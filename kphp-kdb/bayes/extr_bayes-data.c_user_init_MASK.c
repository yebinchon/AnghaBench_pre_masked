
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cnt; scalar_t__ nbad; scalar_t__ ngood; } ;
struct TYPE_5__ {int metafile_len; TYPE_1__ b; int * prev_used; int * next_used; int * aio; int * metafile; } ;
typedef TYPE_2__ user ;


 int FUNC_0 (int *) ;

void FUNC_1 (user *VAR_0) {
  VAR_0->metafile = ((void*)0);
  VAR_0->metafile_len = -1;
  VAR_0->aio = ((void*)0);
  VAR_0->next_used = ((void*)0);
  VAR_0->prev_used = ((void*)0);

  VAR_0->b.ngood = 0;
  VAR_0->b.nbad = 0;
  FUNC_0 (&VAR_0->b.cnt);
}
