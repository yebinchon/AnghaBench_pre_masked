
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int dummy; } ;


 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (struct node*) ;
 int FUNC_5 (struct node*,int) ;
 int FUNC_6 (struct node*,char const*) ;
 int * VAR_0 ;

void
FUNC_7(struct node *VAR_1, const char *VAR_2)
{

 FUNC_3("parsing auto_master file at \"%s\"", VAR_2);

 VAR_0 = FUNC_2(VAR_2, "r");
 if (VAR_0 == ((void*)0))
  FUNC_0(1, "unable to open %s", VAR_2);

 FUNC_6(VAR_1, VAR_2);

 FUNC_1(VAR_0);
 VAR_0 = ((void*)0);

 FUNC_3("done parsing \"%s\"", VAR_2);

 FUNC_5(VAR_1, 1);
 FUNC_4(VAR_1);
}
