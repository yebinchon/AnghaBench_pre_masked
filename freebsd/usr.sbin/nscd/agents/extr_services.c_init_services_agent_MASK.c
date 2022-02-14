
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int * name; } ;
struct common_agent {int lookup_func; TYPE_1__ parent; } ;
struct agent {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct agent* (*) ()) ;
 int FUNC_1 (struct agent* (*) ()) ;
 int FUNC_2 (int ) ;
 struct common_agent* FUNC_3 (int,int) ;
 int VAR_1 ;
 int * FUNC_4 (char*) ;

struct agent *
FUNC_5(void)
{
 struct common_agent *VAR_2;
 FUNC_0(FUNC_5);

 VAR_2 = FUNC_3(1, sizeof(*VAR_2));
 FUNC_2(VAR_2 != ((void*)0));

 VAR_2->parent.name = FUNC_4("services");
 FUNC_2(VAR_2->parent.name != ((void*)0));

 VAR_2->parent.type = VAR_0;
 VAR_2->lookup_func = VAR_1;

 FUNC_1(FUNC_5);
 return ((struct agent *)VAR_2);
}
