
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asymmetric_key_parser {int name; int link; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct asymmetric_key_parser *VAR_1)
{
 FUNC_0(&VAR_0);
 FUNC_1(&VAR_1->link);
 FUNC_3(&VAR_0);

 FUNC_2("Asymmetric key parser '%s' unregistered\n", VAR_1->name);
}
