
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {size_t type; int param_set; int param_int; } ;
typedef TYPE_2__ token ;
struct TYPE_9__ {size_t type; int param_set; int param_int; } ;
struct TYPE_11__ {int vn; struct TYPE_11__** v; TYPE_1__ tok; } ;
typedef TYPE_3__ node ;


 scalar_t__ FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__** FUNC_3 (int) ;
 TYPE_3__* FUNC_4 () ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_5 (node **VAR_5, token *VAR_6, int *VAR_7, int *VAR_8, int VAR_9) {


  while ((*VAR_8) && VAR_2[VAR_6[(*VAR_8) - 1].type] <= VAR_9) {
    node *VAR_10 = FUNC_4();
    VAR_10->tok.type = VAR_6[--(*VAR_8)].type;
    VAR_10->tok.param_int = VAR_6[(*VAR_8)].param_int;
    VAR_10->tok.param_set = VAR_6[(*VAR_8)].param_set;
    if (VAR_10->tok.type == VAR_1 || VAR_10->tok.type == VAR_0) {
      FUNC_2 (VAR_10);
      return 0;
    }
    if (FUNC_0(VAR_10->tok.type)) {
      VAR_10->vn = 0;
    } else if (FUNC_1(VAR_10->tok.type)) {
      VAR_10->vn = 1;
    } else {
      VAR_10->vn = 2;
    }
    VAR_10->v = FUNC_3 (sizeof (node *) * VAR_10->vn);
    if ((*VAR_7) < VAR_10->vn) {
      FUNC_2 (VAR_10);
      return 0;
    }
    (*VAR_7) -= VAR_10->vn;
    int VAR_11;
    for (VAR_11 = 0; VAR_11 < VAR_10->vn; VAR_11++) {
      VAR_10->v[VAR_11] = VAR_5[(*VAR_7) + VAR_11];
    }
    VAR_5[(*VAR_7)++] = VAR_10;
  }



  return 1;
}
