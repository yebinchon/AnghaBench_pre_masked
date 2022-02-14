
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hubbub {int dummy; } ;
struct dcn10_hubbub {int debug_test_index_pstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int ,int) ;
 int FUNC_3 (int ,int ) ;
 struct dcn10_hubbub* FUNC_4 (struct hubbub*) ;
 int FUNC_5 (int) ;

bool FUNC_6(
 struct hubbub *VAR_5)
{
 struct dcn10_hubbub *VAR_6 = FUNC_4(VAR_5);
 static unsigned int VAR_7 = 200;
 static unsigned int VAR_8 = 40;
 static unsigned int VAR_9;
 static bool VAR_10;

 unsigned int VAR_11;
 unsigned int VAR_12;

 if (VAR_10) {




  FUNC_2(VAR_2,
        VAR_1, 0,
        VAR_0, 0);
  VAR_10 = 0;
 }
 FUNC_3(VAR_4, VAR_6->debug_test_index_pstate);

 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  VAR_11 = FUNC_1(VAR_3);

  if (VAR_11 & (1 << 30)) {

   if (VAR_12 > VAR_8)
    FUNC_0("pstate took longer than expected ~%dus\n",
      VAR_12);

   return 1;
  }
  if (VAR_9 < VAR_12)
   VAR_9 = VAR_12;

  FUNC_5(1);
 }




 FUNC_2(VAR_2,
       VAR_1, 1,
       VAR_0, 1);
 VAR_10 = 1;

 FUNC_0("pstate TEST_DEBUG_DATA: 0x%X\n",
   VAR_11);

 return 0;
}
