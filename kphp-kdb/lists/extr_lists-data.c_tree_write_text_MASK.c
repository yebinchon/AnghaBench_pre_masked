
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
 char* FUNC_3 (scalar_t__) ;
 char* FUNC_4 (scalar_t__,int*) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int FUNC_6 (tree_ext_small_t *VAR_1) {
  struct tree_payload *VAR_2 = FUNC_0 (VAR_1);
  int VAR_3;
  if (VAR_2->text) {
    VAR_3 = FUNC_2 (VAR_2->text);
    FUNC_5 (FUNC_3 (VAR_2->text), VAR_3);
  } else {
    char *VAR_4 = FUNC_4 (VAR_0.N - FUNC_1 (VAR_1), &VAR_3);
    FUNC_5 (VAR_4, VAR_3);
  }
  return 0;
}
