
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_type {int name; int constructors_num; int flags; int params_num; int params_types; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3 (struct tl_type *VAR_2) {
  FUNC_0 (VAR_1 >= 1 ? VAR_0 : 1);
  FUNC_0 (VAR_2->name);
  FUNC_2 (VAR_2->id);
  FUNC_0 (VAR_2->constructors_num);
  FUNC_0 (VAR_2->flags);
  FUNC_0 (VAR_2->params_num);
  FUNC_1 (VAR_2->params_types);
}
