
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct isdnhdlc_vars {int state; int bit_shift; int do_closing; int shift_reg; int data_received; int crc; scalar_t__ do_bitreverse; int ffvalue; int cbin; int data_bits; int hdlc_bits1; scalar_t__ do_adapt56; int dchannel; } ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

int FUNC_2(struct isdnhdlc_vars *VAR_0, const u8 *VAR_1, u16 VAR_2,
      int *VAR_3, u8 *VAR_4, int VAR_5)
{
 static const unsigned char VAR_6[] = {
  0x7e, 0x3f, 0x9f, 0xcf, 0xe7, 0xf3, 0xf9, 0xfc, 0x7e
 };

 int VAR_7 = 0;

 *VAR_3 = VAR_2;


 if ((VAR_2 == 1) && (VAR_0->state == 132))
  VAR_0->state = 137;
 while (VAR_5 > 0) {
  if (VAR_0->bit_shift == 0) {
   if (VAR_2 && !VAR_0->do_closing) {
    VAR_0->shift_reg = *VAR_1++;
    VAR_2--;
    if (VAR_2 == 0)

     VAR_0->do_closing = 1;
    VAR_0->bit_shift = 8;
   } else {
    if (VAR_0->state == 133) {
     if (VAR_0->data_received) {
      VAR_0->state = 135;
      VAR_0->crc ^= 0xffff;
      VAR_0->bit_shift = 8;
      VAR_0->shift_reg =
       VAR_0->crc & 0xff;
     } else if (!VAR_0->do_adapt56)
      VAR_0->state =
       132;
     else
      VAR_0->state =
       140;
    }

   }
  }

  switch (VAR_0->state) {
  case 128:
   while (VAR_5--)
    *VAR_4++ = 0xff;
   return VAR_5;
  case 132:
   VAR_0->do_closing = 0;
   if (VAR_2 == 0) {

    if (VAR_0->do_bitreverse == 0)
     *VAR_4++ = FUNC_0(VAR_0->ffvalue);
    else
     *VAR_4++ = VAR_0->ffvalue;
    VAR_7++;
    VAR_5--;
    break;
   }

  case 137:
   if (VAR_0->bit_shift == 8) {
    VAR_0->cbin = VAR_0->ffvalue >>
     (8 - VAR_0->data_bits);
    VAR_0->state = 133;
    VAR_0->crc = 0xffff;
    VAR_0->hdlc_bits1 = 0;
    VAR_0->data_received = 1;
   }
   break;
  case 140:
   VAR_0->do_closing = 0;
   VAR_0->cbin <<= 1;
   VAR_0->data_bits++;
   VAR_0->hdlc_bits1 = 0;
   VAR_0->state = 139;
   break;
  case 139:
   VAR_0->cbin <<= 1;
   VAR_0->data_bits++;
   VAR_0->cbin++;
   if (++VAR_0->hdlc_bits1 == 6)
    VAR_0->state = 138;
   break;
  case 138:
   VAR_0->cbin <<= 1;
   VAR_0->data_bits++;
   if (VAR_2 == 0) {
    VAR_0->state = 140;
    break;
   }
   if (VAR_0->bit_shift == 8) {
    VAR_0->state = 133;
    VAR_0->crc = 0xffff;
    VAR_0->hdlc_bits1 = 0;
    VAR_0->data_received = 1;
   }
   break;
  case 130:
   VAR_0->data_received = 1;
   if (VAR_0->data_bits == 8) {
    VAR_0->state = 133;
    VAR_0->crc = 0xffff;
    VAR_0->hdlc_bits1 = 0;
    break;
   }
   VAR_0->cbin <<= 1;
   VAR_0->data_bits++;
   if (VAR_0->shift_reg & 0x01)
    VAR_0->cbin++;
   VAR_0->shift_reg >>= 1;
   VAR_0->bit_shift--;
   if (VAR_0->bit_shift == 0) {
    VAR_0->state = 133;
    VAR_0->crc = 0xffff;
    VAR_0->hdlc_bits1 = 0;
   }
   break;
  case 133:
   VAR_0->cbin <<= 1;
   VAR_0->data_bits++;
   if (VAR_0->hdlc_bits1 == 5) {
    VAR_0->hdlc_bits1 = 0;
    break;
   }
   if (VAR_0->bit_shift == 8)
    VAR_0->crc = FUNC_1(VAR_0->crc,
          VAR_0->shift_reg);
   if (VAR_0->shift_reg & 0x01) {
    VAR_0->hdlc_bits1++;
    VAR_0->cbin++;
    VAR_0->shift_reg >>= 1;
    VAR_0->bit_shift--;
   } else {
    VAR_0->hdlc_bits1 = 0;
    VAR_0->shift_reg >>= 1;
    VAR_0->bit_shift--;
   }
   break;
  case 135:
   VAR_0->cbin <<= 1;
   VAR_0->data_bits++;
   if (VAR_0->hdlc_bits1 == 5) {
    VAR_0->hdlc_bits1 = 0;
    break;
   }
   if (VAR_0->shift_reg & 0x01) {
    VAR_0->hdlc_bits1++;
    VAR_0->cbin++;
    VAR_0->shift_reg >>= 1;
    VAR_0->bit_shift--;
   } else {
    VAR_0->hdlc_bits1 = 0;
    VAR_0->shift_reg >>= 1;
    VAR_0->bit_shift--;
   }
   if (VAR_0->bit_shift == 0) {
    VAR_0->shift_reg = (VAR_0->crc >> 8);
    VAR_0->state = 134;
    VAR_0->bit_shift = 8;
   }
   break;
  case 134:
   VAR_0->cbin <<= 1;
   VAR_0->data_bits++;
   if (VAR_0->hdlc_bits1 == 5) {
    VAR_0->hdlc_bits1 = 0;
    break;
   }
   if (VAR_0->shift_reg & 0x01) {
    VAR_0->hdlc_bits1++;
    VAR_0->cbin++;
    VAR_0->shift_reg >>= 1;
    VAR_0->bit_shift--;
   } else {
    VAR_0->hdlc_bits1 = 0;
    VAR_0->shift_reg >>= 1;
    VAR_0->bit_shift--;
   }
   if (VAR_0->bit_shift == 0) {
    VAR_0->shift_reg = 0x7e;
    VAR_0->state = 136;
    VAR_0->bit_shift = 8;
   }
   break;
  case 136:
   VAR_0->cbin <<= 1;
   VAR_0->data_bits++;
   if (VAR_0->hdlc_bits1 == 5) {
    VAR_0->hdlc_bits1 = 0;
    break;
   }
   if (VAR_0->shift_reg & 0x01)
    VAR_0->cbin++;
   VAR_0->shift_reg >>= 1;
   VAR_0->bit_shift--;
   if (VAR_0->bit_shift == 0) {
    VAR_0->ffvalue =
     VAR_6[VAR_0->data_bits];
    if (VAR_0->dchannel) {
     VAR_0->ffvalue = 0x7e;
     VAR_0->state = 129;
     VAR_0->bit_shift = 8-VAR_0->data_bits;
     if (VAR_0->bit_shift == 0)
      VAR_0->state =
       131;
    } else {
     if (!VAR_0->do_adapt56) {
      VAR_0->state =
       132;
      VAR_0->data_received = 0;
     } else {
      VAR_0->state = 140;
      VAR_0->data_received = 0;
     }

     if (VAR_5 > 1)
      VAR_5 = 1;
    }
   }
   break;
  case 129:
   VAR_0->do_closing = 0;
   VAR_0->cbin <<= 1;
   VAR_0->cbin++;
   VAR_0->data_bits++;
   VAR_0->bit_shift--;
   if (VAR_0->bit_shift == 0) {
    VAR_0->state = 131;
    VAR_0->bit_shift = 0;
   }
   break;
  case 131:
   VAR_0->do_closing = 0;
   VAR_0->cbin = 0xff;
   VAR_0->data_bits = 8;
   if (VAR_0->bit_shift == 8) {
    VAR_0->cbin = 0x7e;
    VAR_0->state = 130;
   } else {

    if (VAR_0->do_bitreverse == 0)
     *VAR_4++ = FUNC_0(VAR_0->cbin);
    else
     *VAR_4++ = VAR_0->cbin;
    VAR_0->bit_shift = 0;
    VAR_0->data_bits = 0;
    VAR_7++;
    VAR_5 = 0;
   }
   break;
  default:
   break;
  }
  if (VAR_0->do_adapt56) {
   if (VAR_0->data_bits == 7) {
    VAR_0->cbin <<= 1;
    VAR_0->cbin++;
    VAR_0->data_bits++;
   }
  }
  if (VAR_0->data_bits == 8) {

   if (VAR_0->do_bitreverse == 0)
    *VAR_4++ = FUNC_0(VAR_0->cbin);
   else
    *VAR_4++ = VAR_0->cbin;
   VAR_0->data_bits = 0;
   VAR_7++;
   VAR_5--;
  }
 }
 *VAR_3 -= VAR_2;

 return VAR_7;
}
