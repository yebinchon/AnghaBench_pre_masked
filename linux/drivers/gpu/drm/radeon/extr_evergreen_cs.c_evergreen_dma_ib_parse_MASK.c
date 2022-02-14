
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct radeon_ib {size_t length_dw; size_t* ptr; } ;
struct radeon_device {int dummy; } ;






 int FUNC_0 (char*,size_t,size_t) ;
 int VAR_0 ;
 size_t FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t) ;
 size_t FUNC_3 (size_t) ;

int FUNC_4(struct radeon_device *VAR_1, struct radeon_ib *VAR_2)
{
 u32 VAR_3 = 0;
 u32 VAR_4, VAR_5, VAR_6, VAR_7;

 do {
  VAR_4 = VAR_2->ptr[VAR_3];
  VAR_5 = FUNC_1(VAR_4);
  VAR_6 = FUNC_2(VAR_4);
  VAR_7 = FUNC_3(VAR_4);

  switch (VAR_5) {
  case 128:
   switch (VAR_7) {

   case 8:
    VAR_3 += VAR_6 + 7;
    break;

   case 0:
    VAR_3 += VAR_6 + 3;
    break;
   default:
    FUNC_0("bad DMA_PACKET_WRITE [%6d] 0x%08x sub cmd is not 0 or 8\n", VAR_3, VAR_2->ptr[VAR_3]);
    return -VAR_0;
   }
   break;
  case 130:
   switch (VAR_7) {

   case 0x00:
    VAR_3 += 5;
    break;

   case 0x08:
    VAR_3 += 9;
    break;

   case 0x40:
    VAR_3 += 5;
    break;

   case 0x41:
    VAR_3 += 9;
    break;

   case 0x44:
    VAR_3 += 7;
    break;

   case 0x48:
    VAR_3 += 10;
    break;

   case 0x49:
    VAR_3 += 12;
    break;

   case 0x4b:
    VAR_3 += 10;
    break;

   case 0x4c:
    VAR_3 += 9;
    break;

   case 0x4d:
    VAR_3 += 13;
    break;

   case 0x4f:
    VAR_3 += 10;
    break;
   default:
    FUNC_0("bad DMA_PACKET_COPY [%6d] 0x%08x invalid sub cmd\n", VAR_3, VAR_2->ptr[VAR_3]);
    return -VAR_0;
   }
   break;
  case 131:
   VAR_3 += 4;
   break;
  case 129:
   VAR_3 += 1;
   break;
  default:
   FUNC_0("Unknown packet type %d at %d !\n", VAR_5, VAR_3);
   return -VAR_0;
  }
 } while (VAR_3 < VAR_2->length_dw);

 return 0;
}
