
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int my_dyn_object ;
struct TYPE_2__ {scalar_t__ tp; int fn; int f; int * e; } ;
typedef TYPE_1__ my_change ;
typedef int event ;
typedef int dyn_object ;
typedef int change ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *,int) ;
 int * FUNC_3 (int *,int ,int ,int) ;

inline int FUNC_4 (dyn_object **VAR_2, change *VAR_3, int VAR_4) {
  my_dyn_object **VAR_5 = (my_dyn_object **)VAR_2;
  my_change *VAR_6 = (my_change *)VAR_3;

  event *VAR_7;
  if (VAR_6->tp == VAR_0) {
    if (*VAR_5 == ((void*)0)) {
      VAR_7 = VAR_6->e;
    } else {
      VAR_7 = FUNC_2 (*VAR_5, VAR_6->e, VAR_4);
      FUNC_1 (VAR_6->e);
    }
  } else if (VAR_6->tp == VAR_1) {
    VAR_7 = FUNC_3 (*VAR_5, VAR_6->f, VAR_6->fn, VAR_4);
  } else {
    FUNC_0 ("wtf" && 0);
  }

  if (*VAR_5 != VAR_7) {
    FUNC_1 (*VAR_5);
    *VAR_5 = VAR_7;
  }
  return 0;
}
