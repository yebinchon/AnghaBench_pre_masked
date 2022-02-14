
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree_ext_small_t ;
struct tree_payload {scalar_t__ text; } ;
struct TYPE_2__ {scalar_t__ N; } ;


 struct tree_payload* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int*) ;
 int VAR_1 ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5 (tree_ext_small_t *VAR_2) {
  FUNC_4 (VAR_1);
  struct tree_payload *VAR_3 = FUNC_0 (VAR_2);
  int VAR_4;
  if (VAR_3->text) {
    VAR_4 = FUNC_2 (VAR_3->text);
  } else {
    FUNC_3 (VAR_0.N - FUNC_1 (VAR_2), &VAR_4);
  }
  VAR_1 += VAR_4;
  return 0;
}
