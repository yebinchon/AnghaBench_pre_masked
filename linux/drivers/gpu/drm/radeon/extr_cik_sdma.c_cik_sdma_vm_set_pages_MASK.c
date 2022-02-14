
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
typedef int uint32_t ;
struct radeon_ib {unsigned int* ptr; int length_dw; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ,int ,int ) ;
 void* FUNC_1 (unsigned int) ;

void FUNC_2(struct radeon_device *VAR_2,
      struct radeon_ib *VAR_3,
      uint64_t VAR_4,
      uint64_t VAR_5, unsigned VAR_6,
      uint32_t VAR_7, uint32_t VAR_8)
{
 uint64_t VAR_9;
 unsigned VAR_10;

 while (VAR_6) {
  VAR_10 = VAR_6;
  if (VAR_10 > 0x7FFFF)
   VAR_10 = 0x7FFFF;

  if (VAR_8 & VAR_0)
   VAR_9 = VAR_5;
  else
   VAR_9 = 0;


  VAR_3->ptr[VAR_3->length_dw++] = FUNC_0(VAR_1, 0, 0);
  VAR_3->ptr[VAR_3->length_dw++] = VAR_4;
  VAR_3->ptr[VAR_3->length_dw++] = FUNC_1(VAR_4);
  VAR_3->ptr[VAR_3->length_dw++] = VAR_8;
  VAR_3->ptr[VAR_3->length_dw++] = 0;
  VAR_3->ptr[VAR_3->length_dw++] = VAR_9;
  VAR_3->ptr[VAR_3->length_dw++] = FUNC_1(VAR_9);
  VAR_3->ptr[VAR_3->length_dw++] = VAR_7;
  VAR_3->ptr[VAR_3->length_dw++] = 0;
  VAR_3->ptr[VAR_3->length_dw++] = VAR_10;

  VAR_4 += VAR_10 * 8;
  VAR_5 += VAR_10 * VAR_7;
  VAR_6 -= VAR_10;
 }
}
