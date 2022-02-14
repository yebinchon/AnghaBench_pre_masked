
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct radeon_ib {int* ptr; int length_dw; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct radeon_device*,int) ;
 void* FUNC_2 (int) ;

void FUNC_3(struct radeon_device *VAR_4,
        struct radeon_ib *VAR_5,
        uint64_t VAR_6,
        uint64_t VAR_7, unsigned VAR_8,
        uint32_t VAR_9, uint32_t VAR_10)
{
 uint64_t VAR_11;
 unsigned VAR_12;

 while (VAR_8) {
  VAR_12 = VAR_8 * 2;
  if (VAR_12 > 0xFFFFE)
   VAR_12 = 0xFFFFE;


  VAR_5->ptr[VAR_5->length_dw++] = FUNC_0(VAR_2,
   VAR_3, 0);
  VAR_5->ptr[VAR_5->length_dw++] = VAR_6;
  VAR_5->ptr[VAR_5->length_dw++] = FUNC_2(VAR_6);
  VAR_5->ptr[VAR_5->length_dw++] = VAR_12;
  for (; VAR_12 > 0; VAR_12 -= 2, --VAR_8, VAR_6 += 8) {
   if (VAR_10 & VAR_0) {
    VAR_11 = FUNC_1(VAR_4, VAR_7);
   } else if (VAR_10 & VAR_1) {
    VAR_11 = VAR_7;
   } else {
    VAR_11 = 0;
   }
   VAR_7 += VAR_9;
   VAR_11 |= VAR_10;
   VAR_5->ptr[VAR_5->length_dw++] = VAR_11;
   VAR_5->ptr[VAR_5->length_dw++] = FUNC_2(VAR_11);
  }
 }
}
