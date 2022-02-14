
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_personality {int list; int name; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct md_personality *VAR_1)
{
 FUNC_1("md: %s personality unregistered\n", VAR_1->name);
 FUNC_2(&VAR_0);
 FUNC_0(&VAR_1->list);
 FUNC_3(&VAR_0);
 return 0;
}
