
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_type {int constructors_num; int extra; struct tl_type* constructors; scalar_t__ id; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct tl_type) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (struct tl_type*,int) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5 (struct tl_type *VAR_1) {
  if (!VAR_1) { return; }
  if (VAR_1->id) {
    FUNC_0 (FUNC_2 (VAR_1->id));
    FUNC_4 (VAR_1->id);
  }
  if (VAR_1->constructors_num && VAR_1->constructors) {
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_1->extra; VAR_2++) {
      FUNC_1 (VAR_1->constructors[VAR_2]);
    }
    FUNC_3 (VAR_1->constructors, VAR_1->constructors_num * sizeof (void *));
    FUNC_0 (VAR_1->constructors_num * sizeof (void *));
  }
  VAR_0 --;
  FUNC_3 (VAR_1, sizeof (*VAR_1));
  FUNC_0 (sizeof (*VAR_1));
}
