
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcpl_ct_sample {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,struct pmcpl_ct_sample*,int ,int*) ;
 int FUNC_3 (struct pmcpl_ct_sample*,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_4 (struct pmcpl_ct_sample*) ;
 int FUNC_5 (struct pmcpl_ct_sample*) ;
 int *** VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

void
FUNC_6(void)
{
 int VAR_4;
 struct pmcpl_ct_sample VAR_5, *VAR_6;

 VAR_6 = &VAR_5;
 FUNC_5(VAR_6);
 FUNC_1();

 FUNC_0("%5.5s %s\n", "%SAMP", "CALLTREE");

 VAR_4 = 0;
 if (FUNC_2(VAR_3,
     VAR_0, VAR_6, 0, &VAR_4))
  FUNC_0("...\n");
 VAR_1[1][VAR_4] = ((void*)0);

 FUNC_3(VAR_6,
     VAR_3, VAR_2 - 2);

 FUNC_4(VAR_6);
}
