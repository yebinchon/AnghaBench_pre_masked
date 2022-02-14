
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int au_mask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int,int ,...) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(int VAR_8, au_mask_t *VAR_9)
{
 int VAR_10;
 int VAR_11 = VAR_2;


 if (FUNC_1(VAR_8, VAR_4, &VAR_11) < 0)
  FUNC_0("Preselection mode: %s", FUNC_2(VAR_7));


 if (FUNC_1(VAR_8, VAR_3, VAR_9) < 0)
  FUNC_0("Preselection flag: %s", FUNC_2(VAR_7));


 if (FUNC_1(VAR_8, VAR_5, VAR_9) < 0)
  FUNC_0("Preselection naflag: %s", FUNC_2(VAR_7));


 if (FUNC_1(VAR_8, VAR_1, &VAR_10) < 0)
  FUNC_0("Query max-limit: %s", FUNC_2(VAR_7));


 if (FUNC_1(VAR_8, VAR_6, &VAR_10) < 0)
  FUNC_0("Set max-qlimit: %s", FUNC_2(VAR_7));


 if (FUNC_1(VAR_8, VAR_0) < 0)
  FUNC_0("Auditpipe flush: %s", FUNC_2(VAR_7));
}
