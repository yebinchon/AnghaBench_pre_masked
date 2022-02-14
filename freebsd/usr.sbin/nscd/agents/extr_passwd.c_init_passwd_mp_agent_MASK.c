
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * name; int type; } ;
struct multipart_agent {TYPE_1__ parent; int mp_destroy_func; int mp_lookup_func; int mp_init_func; } ;
struct agent {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct agent* (*) ()) ;
 int FUNC_1 (struct agent* (*) ()) ;
 int FUNC_2 (int ) ;
 struct multipart_agent* FUNC_3 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_4 (char*) ;

struct agent *
FUNC_5(void)
{
 struct multipart_agent *VAR_4;

 FUNC_0(FUNC_5);
 VAR_4 = FUNC_3(1,
  sizeof(*VAR_4));
 FUNC_2(VAR_4 != ((void*)0));

 VAR_4->parent.name = FUNC_4("passwd");
 VAR_4->parent.type = VAR_0;
 VAR_4->mp_init_func = VAR_2;
 VAR_4->mp_lookup_func = VAR_3;
 VAR_4->mp_destroy_func = VAR_1;
 FUNC_2(VAR_4->parent.name != ((void*)0));

 FUNC_1(FUNC_5);
 return ((struct agent *)VAR_4);
}
