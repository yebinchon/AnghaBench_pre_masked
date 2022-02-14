
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef unsigned int uint32_t ;
struct amdgpu_ib {unsigned int* ptr; int length_dw; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_ib *VAR_1, uint64_t VAR_2,
         uint64_t VAR_3, unsigned VAR_4,
         uint32_t VAR_5, uint64_t VAR_6)
{

 VAR_1->ptr[VAR_1->length_dw++] = FUNC_0(VAR_0);
 VAR_1->ptr[VAR_1->length_dw++] = FUNC_1(VAR_2);
 VAR_1->ptr[VAR_1->length_dw++] = FUNC_2(VAR_2);
 VAR_1->ptr[VAR_1->length_dw++] = FUNC_1(VAR_6);
 VAR_1->ptr[VAR_1->length_dw++] = FUNC_2(VAR_6);
 VAR_1->ptr[VAR_1->length_dw++] = FUNC_1(VAR_3);
 VAR_1->ptr[VAR_1->length_dw++] = FUNC_2(VAR_3);
 VAR_1->ptr[VAR_1->length_dw++] = VAR_5;
 VAR_1->ptr[VAR_1->length_dw++] = 0;
 VAR_1->ptr[VAR_1->length_dw++] = VAR_4;
}
