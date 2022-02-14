
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(int VAR_4, u32 VAR_5)
{
 switch (VAR_4) {
 FUNC_0(VAR_1, VAR_5);
 FUNC_0(VAR_0, VAR_5);
 FUNC_0(VAR_3, VAR_5);
 FUNC_0(VAR_2, VAR_5);
 default:
  FUNC_2("attempt to write to unknown breakpoint register %d\n",
   VAR_4);
 }
 FUNC_1();
}
