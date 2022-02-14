
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
typedef int uint32_t ;
struct radeon_ib {unsigned int* ptr; int length_dw; } ;
struct radeon_device {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;

void FUNC_2(struct radeon_device *VAR_1,
        struct radeon_ib *VAR_2,
        uint64_t VAR_3,
        uint64_t VAR_4, unsigned VAR_5,
        uint32_t VAR_6, uint32_t VAR_7)
{
 uint64_t VAR_8;
 unsigned VAR_9;

 while (VAR_5) {
  VAR_9 = VAR_5 * 2;
  if (VAR_9 > 0xFFFFE)
   VAR_9 = 0xFFFFE;

  if (VAR_7 & VAR_0)
   VAR_8 = VAR_4;
  else
   VAR_8 = 0;


  VAR_2->ptr[VAR_2->length_dw++] = FUNC_0(VAR_9);
  VAR_2->ptr[VAR_2->length_dw++] = VAR_3;
  VAR_2->ptr[VAR_2->length_dw++] = FUNC_1(VAR_3) & 0xff;
  VAR_2->ptr[VAR_2->length_dw++] = VAR_7;
  VAR_2->ptr[VAR_2->length_dw++] = 0;
  VAR_2->ptr[VAR_2->length_dw++] = VAR_8;
  VAR_2->ptr[VAR_2->length_dw++] = FUNC_1(VAR_8);
  VAR_2->ptr[VAR_2->length_dw++] = VAR_6;
  VAR_2->ptr[VAR_2->length_dw++] = 0;

  VAR_3 += VAR_9 * 4;
  VAR_4 += (VAR_9 / 2) * VAR_6;
  VAR_5 -= VAR_9 / 2;
 }
}
