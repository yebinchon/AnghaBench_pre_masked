
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct radeon_ib {int* ptr; int length_dw; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int ,int ,int ,int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct radeon_device*,int) ;
 int FUNC_2 (int) ;

void FUNC_3(struct radeon_device *VAR_3,
      struct radeon_ib *VAR_4,
      uint64_t VAR_5,
      uint64_t VAR_6, unsigned VAR_7,
      uint32_t VAR_8, uint32_t VAR_9)
{
 uint64_t VAR_10;
 unsigned VAR_11;

 while (VAR_7) {
  VAR_11 = VAR_7 * 2;
  if (VAR_11 > 0xFFFFE)
   VAR_11 = 0xFFFFE;


  VAR_4->ptr[VAR_4->length_dw++] = FUNC_0(VAR_0, 0, 0, 0, VAR_11);
  VAR_4->ptr[VAR_4->length_dw++] = VAR_5;
  VAR_4->ptr[VAR_4->length_dw++] = FUNC_2(VAR_5) & 0xff;
  for (; VAR_11 > 0; VAR_11 -= 2, --VAR_7, VAR_5 += 8) {
   if (VAR_9 & VAR_1) {
    VAR_10 = FUNC_1(VAR_3, VAR_6);
   } else if (VAR_9 & VAR_2) {
    VAR_10 = VAR_6;
   } else {
    VAR_10 = 0;
   }
   VAR_6 += VAR_8;
   VAR_10 |= VAR_9;
   VAR_4->ptr[VAR_4->length_dw++] = VAR_10;
   VAR_4->ptr[VAR_4->length_dw++] = FUNC_2(VAR_10);
  }
 }
}
