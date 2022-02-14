
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
struct radeon_ib {int* ptr; int length_dw; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int ,int,int ,int ,unsigned int) ;
 int VAR_0 ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;

void FUNC_3(struct radeon_device *VAR_1,
     struct radeon_ib *VAR_2,
     uint64_t VAR_3, uint64_t VAR_4,
     unsigned VAR_5)
{
 while (VAR_5) {
  unsigned VAR_6 = VAR_5 * 8;
  if (VAR_6 > 0xFFFF8)
   VAR_6 = 0xFFFF8;

  VAR_2->ptr[VAR_2->length_dw++] = FUNC_0(VAR_0,
            1, 0, 0, VAR_6);
  VAR_2->ptr[VAR_2->length_dw++] = FUNC_1(VAR_3);
  VAR_2->ptr[VAR_2->length_dw++] = FUNC_1(VAR_4);
  VAR_2->ptr[VAR_2->length_dw++] = FUNC_2(VAR_3) & 0xff;
  VAR_2->ptr[VAR_2->length_dw++] = FUNC_2(VAR_4) & 0xff;

  VAR_3 += VAR_6;
  VAR_4 += VAR_6;
  VAR_5 -= VAR_6 / 8;
 }
}
