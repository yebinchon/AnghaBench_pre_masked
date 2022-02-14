
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct amdgpu_ib {int* ptr; int length_dw; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 unsigned int FUNC_2 (int) ;
 void* FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_ib *VAR_2, uint64_t VAR_3,
       uint64_t VAR_4, unsigned VAR_5,
       uint32_t VAR_6)
{
 unsigned VAR_7 = VAR_5 * 2;

 VAR_2->ptr[VAR_2->length_dw++] = FUNC_0(VAR_0) |
  FUNC_1(VAR_1);
 VAR_2->ptr[VAR_2->length_dw++] = VAR_3;
 VAR_2->ptr[VAR_2->length_dw++] = FUNC_3(VAR_3);
 VAR_2->ptr[VAR_2->length_dw++] = VAR_7;
 for (; VAR_7 > 0; VAR_7 -= 2) {
  VAR_2->ptr[VAR_2->length_dw++] = FUNC_2(VAR_4);
  VAR_2->ptr[VAR_2->length_dw++] = FUNC_3(VAR_4);
  VAR_4 += VAR_6;
 }
}
