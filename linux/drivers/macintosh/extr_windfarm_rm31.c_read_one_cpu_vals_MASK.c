
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int s32 ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_3 (int ,int*) ;

__attribute__((used)) static int FUNC_4(int VAR_4, s32 *VAR_5, s32 *VAR_6)
{
 s32 VAR_7, VAR_8, VAR_9;
 int VAR_10;


 VAR_10 = FUNC_3(VAR_2[VAR_4], &VAR_7);
 if (VAR_10) {
  FUNC_0("  CPU%d: temp reading error !\n", VAR_4);
  return -VAR_0;
 }
 FUNC_1("  CPU%d: temp   = %d.%03d\n", VAR_4, FUNC_2((VAR_7)));
 *VAR_5 = VAR_7;


 VAR_10 = FUNC_3(VAR_3[VAR_4], &VAR_8);
 if (VAR_10) {
  FUNC_0("  CPU%d, volts reading error !\n", VAR_4);
  return -VAR_0;
 }
 FUNC_1("  CPU%d: volts  = %d.%03d\n", VAR_4, FUNC_2((VAR_8)));


 VAR_10 = FUNC_3(VAR_1[VAR_4], &VAR_9);
 if (VAR_10) {
  FUNC_0("  CPU%d, current reading error !\n", VAR_4);
  return -VAR_0;
 }
 FUNC_1("  CPU%d: amps   = %d.%03d\n", VAR_4, FUNC_2((VAR_9)));






 *VAR_6 = (((u64)VAR_8) * ((u64)VAR_9)) >> 16;

 FUNC_1("  CPU%d: power  = %d.%03d\n", VAR_4, FUNC_2((*VAR_6)));

 return 0;

}
