
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obj_order {int orig_order; int obj; int order; } ;
typedef int (* obj_path_fn_t ) (int ) ;


 int FUNC_0 (struct obj_order*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;

void FUNC_3(const char *VAR_1, obj_path_fn_t VAR_2,
     struct obj_order *VAR_3, int VAR_4)
{
 int VAR_5;

 if (!VAR_4)
  return;

 FUNC_2(VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_3[VAR_5].orig_order = VAR_5;
  VAR_3[VAR_5].order = FUNC_1(VAR_2(VAR_3[VAR_5].obj));
 }
 FUNC_0(VAR_3, VAR_4, VAR_0);
}
