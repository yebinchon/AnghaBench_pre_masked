
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
struct radeon_ib {unsigned int* ptr; int length_dw; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 void* FUNC_1 (unsigned int) ;
 void* FUNC_2 (unsigned int) ;

void FUNC_3(struct radeon_device *VAR_2,
       struct radeon_ib *VAR_3,
       uint64_t VAR_4, uint64_t VAR_5,
       unsigned VAR_6)
{
 while (VAR_6) {
  unsigned VAR_7 = VAR_6 * 8;
  if (VAR_7 > 0x1FFFF8)
   VAR_7 = 0x1FFFF8;

  VAR_3->ptr[VAR_3->length_dw++] = FUNC_0(VAR_0,
   VAR_1, 0);
  VAR_3->ptr[VAR_3->length_dw++] = VAR_7;
  VAR_3->ptr[VAR_3->length_dw++] = 0;
  VAR_3->ptr[VAR_3->length_dw++] = FUNC_1(VAR_5);
  VAR_3->ptr[VAR_3->length_dw++] = FUNC_2(VAR_5);
  VAR_3->ptr[VAR_3->length_dw++] = FUNC_1(VAR_4);
  VAR_3->ptr[VAR_3->length_dw++] = FUNC_2(VAR_4);

  VAR_4 += VAR_7;
  VAR_5 += VAR_7;
  VAR_6 -= VAR_7 / 8;
 }
}
