
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct amdgpu_ib {int* ptr; int length_dw; } ;


 int FUNC_0 (int ,int,int ,int ,unsigned int) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_ib *VAR_1,
          uint64_t VAR_2, uint64_t VAR_3,
          unsigned VAR_4)
{
 unsigned VAR_5 = VAR_4 * 8;

 VAR_1->ptr[VAR_1->length_dw++] = FUNC_0(VAR_0,
           1, 0, 0, VAR_5);
 VAR_1->ptr[VAR_1->length_dw++] = FUNC_1(VAR_2);
 VAR_1->ptr[VAR_1->length_dw++] = FUNC_1(VAR_3);
 VAR_1->ptr[VAR_1->length_dw++] = FUNC_2(VAR_2) & 0xff;
 VAR_1->ptr[VAR_1->length_dw++] = FUNC_2(VAR_3) & 0xff;
}
