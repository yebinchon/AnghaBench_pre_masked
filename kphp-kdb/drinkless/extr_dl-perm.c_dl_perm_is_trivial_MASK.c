
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ n; scalar_t__ len; TYPE_1__* v; } ;
typedef TYPE_2__ dl_perm ;
struct TYPE_4__ {int * r; int * l; } ;



int FUNC_0 (dl_perm *VAR_0) {
  return VAR_0->n == VAR_0->len && (VAR_0->v == ((void*)0) || (VAR_0->v->l == ((void*)0) && VAR_0->v->r == ((void*)0)));
}
