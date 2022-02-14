
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree_ext_small_t ;
struct tree_payload {scalar_t__ text; scalar_t__ date; scalar_t__ value; scalar_t__ flags; } ;
struct TYPE_2__ {scalar_t__ N; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tree_payload* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5 (tree_ext_small_t *VAR_6) {
  struct tree_payload *VAR_7 = FUNC_0 (VAR_6);
  if ((unsigned)VAR_7->flags >= 256) {
    VAR_5 |= VAR_0;
  }

  if (VAR_7->value) {
    VAR_5 |= VAR_3;
  }

  if (VAR_7->date) {
    VAR_5 |= VAR_1;
  }

  int VAR_8 = -1;
  if (VAR_7->text) {
    VAR_8 = FUNC_3 (VAR_7->text);
  } else {
    FUNC_4 (VAR_4.N - FUNC_1 (VAR_6), &VAR_8);
  }
  FUNC_2 (VAR_8 >= 0);

  if (VAR_8) {
    VAR_5 |= VAR_2;
  }
  return 0;
}
