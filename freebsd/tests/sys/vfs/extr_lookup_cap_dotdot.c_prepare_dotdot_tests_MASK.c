
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cwd ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,char*) ;
 int VAR_3 ;
 int * FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (char*,int ,char*) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static void
FUNC_8(void)
{
 char VAR_4[VAR_0];

 FUNC_0(FUNC_2(VAR_4, sizeof(VAR_4)) != ((void*)0));
 FUNC_1(&VAR_2, "%s/testdir/d1/f1", VAR_4);

 FUNC_0(FUNC_3("testdir", 0777) == 0);
 FUNC_0((VAR_3 = FUNC_5("testdir", VAR_1)) >= 0);

 FUNC_0(FUNC_4(VAR_3, "d1", 0777) == 0);
 FUNC_0(FUNC_4(VAR_3, "d1/d2", 0777) == 0);
 FUNC_0(FUNC_4(VAR_3, "d1/d2/d3", 0777) == 0);
 FUNC_7(VAR_3, "d1/f1");
 FUNC_7(VAR_3, "d1/d2/f2");
 FUNC_7(VAR_3, "d1/d2/d3/f3");
 FUNC_0(FUNC_6("d1/d2/d3", VAR_3, "l3") == 0);
 FUNC_0(FUNC_6("../testdir/d1", VAR_3, "lup") == 0);
 FUNC_0(FUNC_6("../..", VAR_3, "d1/d2/d3/ld1") == 0);
 FUNC_0(FUNC_6("../../f1", VAR_3, "d1/d2/d3/lf1") == 0);
}
