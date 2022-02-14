
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* right; struct TYPE_4__* left; } ;
typedef TYPE_1__ query_node_t ;


 TYPE_1__* FUNC_0 (int ) ;
 char* VAR_0 ;
 void* FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;

__attribute__((used)) static query_node_t *FUNC_3 (void) {
  query_node_t *VAR_4, *VAR_5;
  VAR_4 = FUNC_1 ();
  if (!VAR_4) {
    return 0;
  }
  while (1) {
    FUNC_2();
    if (*VAR_0 != '&' && *VAR_0 != '+' && *VAR_0 != '-' && *VAR_0 != '#') {
      return VAR_4;
    }
    VAR_5 = FUNC_0 (*VAR_0 == '#' ? VAR_3 : (*VAR_0 == '-' ? VAR_2 : VAR_1));
    if (!VAR_5) {
      return 0;
    }
    VAR_5->left = VAR_4;
    VAR_0++;
    VAR_5->right = FUNC_1 ();
    if (!VAR_5->right) {
      return 0;
    }
    VAR_4 = VAR_5;
  }
  return VAR_4;
}
