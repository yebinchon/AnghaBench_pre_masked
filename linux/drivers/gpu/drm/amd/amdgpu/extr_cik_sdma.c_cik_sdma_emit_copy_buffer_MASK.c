
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef void* uint32_t ;
struct amdgpu_ib {int length_dw; void** ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ,int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_ib *VAR_2,
          uint64_t VAR_3,
          uint64_t VAR_4,
          uint32_t VAR_5)
{
 VAR_2->ptr[VAR_2->length_dw++] = FUNC_0(VAR_1, VAR_0, 0);
 VAR_2->ptr[VAR_2->length_dw++] = VAR_5;
 VAR_2->ptr[VAR_2->length_dw++] = 0;
 VAR_2->ptr[VAR_2->length_dw++] = FUNC_1(VAR_3);
 VAR_2->ptr[VAR_2->length_dw++] = FUNC_2(VAR_3);
 VAR_2->ptr[VAR_2->length_dw++] = FUNC_1(VAR_4);
 VAR_2->ptr[VAR_2->length_dw++] = FUNC_2(VAR_4);
}
