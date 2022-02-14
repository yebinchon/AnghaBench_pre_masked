
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct isdnhdlc_vars {int bit_shift; scalar_t__ do_bitreverse; int cbin; int state; int hdlc_bits1; int crc; int shift_reg; int data_bits; int data_received; int dstpos; int ffvalue; int ffbit_shift; scalar_t__ do_adapt56; } ;




 int VAR_0 ;




 int VAR_1 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (struct isdnhdlc_vars*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct isdnhdlc_vars*) ;
 int FUNC_4 (struct isdnhdlc_vars*) ;

int FUNC_5(struct isdnhdlc_vars *VAR_2, const u8 *VAR_3, int VAR_4,
      int *VAR_5, u8 *VAR_6, int VAR_7)
{
 int VAR_8 = 0;

 static const unsigned char VAR_9[] = {
  0x00, 0x00, 0x00, 0x20, 0x30, 0x38, 0x3c, 0x3e, 0x3f
 };

 static const unsigned char VAR_10[] = {
  0x00, 0x7e, 0xfc, 0xf9, 0xf3, 0xe7, 0xcf, 0x9f, 0x3f
 };

 static const unsigned char VAR_11[] = {
  0x00, 0x00, 0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0xfc, 0xfe, 0xff
 };
 *VAR_5 = VAR_4;

 while (VAR_4 > 0) {
  if (VAR_2->bit_shift == 0) {

   if (VAR_2->do_bitreverse == 0)
    VAR_2->cbin = FUNC_0(*VAR_3++);
   else
    VAR_2->cbin = *VAR_3++;
   VAR_4--;
   VAR_2->bit_shift = 8;
   if (VAR_2->do_adapt56)
    VAR_2->bit_shift--;
  }

  switch (VAR_2->state) {
  case 128:
   return 0;
  case 133:
   if (VAR_2->cbin == 0xff) {
    VAR_2->bit_shift = 0;
    break;
   }
   VAR_2->state = 129;
   VAR_2->hdlc_bits1 = 0;
   VAR_2->bit_shift = 8;
   break;
  case 129:
   if (!(VAR_2->cbin & 0x80)) {
    VAR_2->state = 132;
    VAR_2->hdlc_bits1 = 0;
   } else {
    if ((!VAR_2->do_adapt56) &&
        (++VAR_2->hdlc_bits1 >= 8) &&
        (VAR_2->bit_shift == 1))
     VAR_2->state = 133;
   }
   VAR_2->cbin <<= 1;
   VAR_2->bit_shift--;
   break;
  case 132:
   if (VAR_2->cbin & 0x80) {
    VAR_2->hdlc_bits1++;
    if (VAR_2->hdlc_bits1 == 6)
     VAR_2->state = 131;
   } else
    VAR_2->hdlc_bits1 = 0;
   VAR_2->cbin <<= 1;
   VAR_2->bit_shift--;
   break;
  case 131:
   if (VAR_2->cbin & 0x80) {
    VAR_2->state = 129;
   } else {
    VAR_2->state = 130;
    VAR_2->crc = 0xffff;
    VAR_2->shift_reg = 0;
    VAR_2->hdlc_bits1 = 0;
    VAR_2->data_bits = 0;
    VAR_2->data_received = 0;
   }
   VAR_2->cbin <<= 1;
   VAR_2->bit_shift--;
   break;
  case 130:
   if (VAR_2->cbin & 0x80) {
    VAR_2->hdlc_bits1++;
    switch (VAR_2->hdlc_bits1) {
    case 6:
     break;
    case 7:
     if (VAR_2->data_received)

      VAR_8 = -VAR_0;
     if (!VAR_2->do_adapt56) {
      if (VAR_2->cbin == VAR_11
          [VAR_2->bit_shift + 1]) {
       VAR_2->state =
        133;
       VAR_2->bit_shift = 1;
       break;
      }
     } else
      VAR_2->state = 129;
     break;
    default:
     VAR_2->shift_reg >>= 1;
     VAR_2->shift_reg |= 0x80;
     VAR_2->data_bits++;
     break;
    }
   } else {
    switch (VAR_2->hdlc_bits1) {
    case 5:
     break;
    case 6:
     if (VAR_2->data_received)
      VAR_8 = FUNC_1(VAR_2);
     VAR_2->crc = 0xffff;
     VAR_2->shift_reg = 0;
     VAR_2->data_bits = 0;
     if (!VAR_2->do_adapt56)
      do { if (VAR_2->cbin == VAR_9[VAR_2->bit_shift]) { VAR_2->ffvalue = VAR_10[VAR_2->bit_shift]; VAR_2->state = 134; VAR_2->ffbit_shift = VAR_2->bit_shift; VAR_2->bit_shift = 1; } else { VAR_2->state = 130; VAR_2->data_received = 0; } } while (0);
     else {
      VAR_2->state = 130;
      VAR_2->data_received = 0;
     }
     break;
    default:
     VAR_2->shift_reg >>= 1;
     VAR_2->data_bits++;
     break;
    }
    VAR_2->hdlc_bits1 = 0;
   }
   if (VAR_8) {
    VAR_2->dstpos = 0;
    *VAR_5 -= VAR_4;
    VAR_2->cbin <<= 1;
    VAR_2->bit_shift--;
    return VAR_8;
   }
   if (VAR_2->data_bits == 8) {
    VAR_2->data_bits = 0;
    VAR_2->data_received = 1;
    VAR_2->crc = FUNC_2(VAR_2->crc,
          VAR_2->shift_reg);


    if (VAR_2->dstpos < VAR_7)
     VAR_6[VAR_2->dstpos++] = VAR_2->shift_reg;
    else {

     VAR_8 = -VAR_1;
     VAR_2->dstpos = 0;
    }
   }
   VAR_2->cbin <<= 1;
   VAR_2->bit_shift--;
   break;
  case 134:
   if (VAR_2->cbin == VAR_2->ffvalue) {
    VAR_2->bit_shift = 0;
    break;
   } else {
    if (VAR_2->cbin == 0xff) {
     VAR_2->state = 133;
     VAR_2->bit_shift = 0;
    } else if (VAR_2->ffbit_shift == 8) {
     VAR_2->state = 131;
     break;
    } else
     do { VAR_2->shift_reg = VAR_11[VAR_2->ffbit_shift - 1]; VAR_2->hdlc_bits1 = VAR_2->ffbit_shift - 2; if (VAR_2->hdlc_bits1 < 0) VAR_2->hdlc_bits1 = 0; VAR_2->data_bits = VAR_2->ffbit_shift - 1; VAR_2->state = 130; VAR_2->data_received = 0; } while (0);
   }
   break;
  default:
   break;
  }
 }
 *VAR_5 -= VAR_4;
 return 0;
}
