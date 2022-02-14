
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps_internal {int list; } ;
struct path_selector_type {int name; } ;


 int VAR_0 ;
 struct ps_internal* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ps_internal*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct path_selector_type *VAR_2)
{
 struct ps_internal *VAR_3;

 FUNC_1(&VAR_1);

 VAR_3 = FUNC_0(VAR_2->name);
 if (!VAR_3) {
  FUNC_4(&VAR_1);
  return -VAR_0;
 }

 FUNC_3(&VAR_3->list);

 FUNC_4(&VAR_1);

 FUNC_2(VAR_3);

 return 0;
}
