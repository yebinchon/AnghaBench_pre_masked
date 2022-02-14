
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 int VAR_0 ;
 int FUNC_6 (int *,char*,int,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_7(FILE *VAR_1, int VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < 10; VAR_3++)
  FUNC_6(VAR_1, "D[%u] MASK %08x IFS %08x RTRY %08x CHNT %08x MISC %06x\n"
   , VAR_3
   , FUNC_5(VAR_0, FUNC_3(VAR_3))
   , FUNC_5(VAR_0, FUNC_1(VAR_3))
   , FUNC_5(VAR_0, FUNC_4(VAR_3))
   , FUNC_5(VAR_0, FUNC_0(VAR_3))
   , FUNC_5(VAR_0, FUNC_2(VAR_3))
  );
}
