
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static void FUNC_4(void)
{
 u32 VAR_6, VAR_7;
 u8 VAR_8, VAR_9;

 FUNC_1(VAR_3, VAR_6, VAR_7);
 VAR_9 = VAR_7 & VAR_4;
 VAR_8 = VAR_6 & VAR_5;
 VAR_6 = VAR_8 | (VAR_9 << VAR_1);
 VAR_7 = VAR_0;
 FUNC_0("cpu%d, init lo 0x%x, hi 0x%x\n", FUNC_2(), VAR_6, VAR_7);
 FUNC_3(VAR_2, VAR_6, VAR_7);
}
