
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct amdgpu_ib {unsigned int* ptr; int length_dw; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_ib *VAR_2,
     uint64_t VAR_3, uint64_t VAR_4,
     unsigned VAR_5)
{
 unsigned VAR_6 = VAR_5 * 8;

 VAR_2->ptr[VAR_2->length_dw++] = FUNC_0(VAR_0,
  VAR_1, 0);
 VAR_2->ptr[VAR_2->length_dw++] = VAR_6;
 VAR_2->ptr[VAR_2->length_dw++] = 0;
 VAR_2->ptr[VAR_2->length_dw++] = FUNC_1(VAR_4);
 VAR_2->ptr[VAR_2->length_dw++] = FUNC_2(VAR_4);
 VAR_2->ptr[VAR_2->length_dw++] = FUNC_1(VAR_3);
 VAR_2->ptr[VAR_2->length_dw++] = FUNC_2(VAR_3);
}
