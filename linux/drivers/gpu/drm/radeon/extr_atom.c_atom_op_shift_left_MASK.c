
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int atom_exec_context ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int* VAR_1 ;
 int FUNC_2 (int *,int,int,int*,int*,int) ;
 int FUNC_3 (int *,int ,int*) ;
 int FUNC_4 (int *,int,int,int*,int,int) ;

__attribute__((used)) static void FUNC_5(atom_exec_context *VAR_2, int *VAR_3, int VAR_4)
{
 uint8_t VAR_5 = FUNC_1((*VAR_3)++), VAR_6;
 uint32_t VAR_7, VAR_8;
 int VAR_9 = *VAR_3;
 VAR_5 &= 0x38;
 VAR_5 |= VAR_1[VAR_5 >> 3] << 6;
 FUNC_0("   dst: ");
 VAR_8 = FUNC_2(VAR_2, VAR_4, VAR_5, VAR_3, &VAR_7, 1);
 VAR_6 = FUNC_3(VAR_2, VAR_0, VAR_3);
 FUNC_0("   shift: %d\n", VAR_6);
 VAR_8 <<= VAR_6;
 FUNC_0("   dst: ");
 FUNC_4(VAR_2, VAR_4, VAR_5, &VAR_9, VAR_8, VAR_7);
}
