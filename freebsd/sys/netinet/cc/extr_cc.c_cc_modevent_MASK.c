
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cc_algo {int (* mod_init ) () ;int (* mod_destroy ) () ;} ;
typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct cc_algo*) ;
 int FUNC_1 (struct cc_algo*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int
FUNC_4(module_t VAR_2, int VAR_3, void *VAR_4)
{
 struct cc_algo *VAR_5;
 int VAR_6;

 VAR_6 = 0;
 VAR_5 = (struct cc_algo *)VAR_4;

 switch(VAR_3) {
 case 131:
  if (VAR_5->mod_init != ((void*)0))
   VAR_6 = VAR_5->mod_init();
  if (!VAR_6)
   VAR_6 = FUNC_1(VAR_5);
  break;

 case 130:
 case 129:
 case 128:
  VAR_6 = FUNC_0(VAR_5);
  if (!VAR_6 && VAR_5->mod_destroy != ((void*)0))
   VAR_5->mod_destroy();
  if (VAR_6 == VAR_1)
   VAR_6 = 0;
  break;

 default:
  VAR_6 = VAR_0;
  break;
 }

 return (VAR_6);
}
