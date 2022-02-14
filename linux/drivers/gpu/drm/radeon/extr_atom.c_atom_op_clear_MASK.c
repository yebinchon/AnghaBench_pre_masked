
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int atom_exec_context ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int* VAR_0 ;
 int FUNC_2 (int *,int,int,int*,int *,int ) ;
 int FUNC_3 (int *,int,int,int*,int ,int ) ;

__attribute__((used)) static void FUNC_4(atom_exec_context *VAR_1, int *VAR_2, int VAR_3)
{
 uint8_t VAR_4 = FUNC_1((*VAR_2)++);
 uint32_t VAR_5;
 int VAR_6 = *VAR_2;
 VAR_4 &= 0x38;
 VAR_4 |= VAR_0[VAR_4 >> 3] << 6;
 FUNC_2(VAR_1, VAR_3, VAR_4, VAR_2, &VAR_5, 0);
 FUNC_0("   dst: ");
 FUNC_3(VAR_1, VAR_3, VAR_4, &VAR_6, 0, VAR_5);
}
