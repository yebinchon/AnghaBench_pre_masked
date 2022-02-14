
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (void*,char*,int*,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int*,int *) ;
 int VAR_2 ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (void*,char*,int*,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_10(void)
{
 u64 VAR_4;
 void *VAR_5;

 FUNC_0(0, VAR_2);
 FUNC_7(VAR_3);

 if (!FUNC_6(VAR_3, VAR_0, &VAR_4)) {
  FUNC_8("No PlanetCore crystal frequency key.\r\n");
  return;
 }
 FUNC_3(VAR_4, 0xa8c000);
 FUNC_5((u32 *)0xef600800, ((void*)0));
 FUNC_4("/plb/ebc");

 if (!FUNC_6(VAR_3, VAR_1, &VAR_4)) {
  FUNC_8("No PlanetCore NVRAM size key.\r\n");
  return;
 }
 VAR_5 = FUNC_1("/plb/ebc/nvrtc@4,200000");
 if (VAR_5 != ((void*)0)) {
  u32 VAR_6[3] = { 4, 0x200000, 0};
  FUNC_2(VAR_5, "reg", VAR_6, 3);
  VAR_6[2] = (VAR_4 << 10) & 0xffffffff;
  FUNC_9(VAR_5, "reg", VAR_6, 3);
 }
}
