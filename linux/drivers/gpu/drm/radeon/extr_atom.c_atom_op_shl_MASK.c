
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int atom_exec_context ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int** VAR_2 ;
 int FUNC_2 (int *,int,int,int*,int*,int) ;
 int FUNC_3 (int *,int,int*) ;
 int FUNC_4 (int *,int,int,int*,int,int) ;

__attribute__((used)) static void FUNC_5(atom_exec_context *VAR_3, int *VAR_4, int VAR_5)
{
 uint8_t VAR_6 = FUNC_1((*VAR_4)++), VAR_7;
 uint32_t VAR_8, VAR_9;
 int VAR_10 = *VAR_4;
 uint32_t VAR_11 = VAR_2[(VAR_6 >> 3) & 7][(VAR_6 >> 6) & 3];
 FUNC_0("   dst: ");
 VAR_9 = FUNC_2(VAR_3, VAR_5, VAR_6, VAR_4, &VAR_8, 1);

 VAR_9 = VAR_8;
 VAR_7 = FUNC_3(VAR_3, VAR_6, VAR_4);
 FUNC_0("   shift: %d\n", VAR_7);
 VAR_9 <<= VAR_7;
 VAR_9 &= VAR_0[VAR_11];
 VAR_9 >>= VAR_1[VAR_11];
 FUNC_0("   dst: ");
 FUNC_4(VAR_3, VAR_5, VAR_6, &VAR_10, VAR_9, VAR_8);
}
