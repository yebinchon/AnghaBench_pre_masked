
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlist {char* n_name; scalar_t__ n_value; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int,char*,...) ;
 int FUNC_6 () ;

void
FUNC_7(struct nlist VAR_1[])
{
 int VAR_2, VAR_3;

 VAR_3 = 0;
 FUNC_0();
 FUNC_5(2, 10, "systat: nlist: can't find following symbols:");
 for (VAR_2 = 0;
     VAR_1[VAR_2].n_name != ((void*)0) && *VAR_1[VAR_2].n_name != '\0'; VAR_2++)
  if (VAR_1[VAR_2].n_value == 0)
   FUNC_5(2 + ++VAR_3, 10, "%s", VAR_1[VAR_2].n_name);
 FUNC_4(VAR_0, 0);
 FUNC_1();
 FUNC_6();
 FUNC_2();
 FUNC_3(1);
}
