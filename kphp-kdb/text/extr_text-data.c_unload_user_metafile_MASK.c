
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* mf; } ;
typedef TYPE_1__ user_t ;
struct TYPE_8__ {scalar_t__ len; TYPE_6__* prev; TYPE_6__* next; scalar_t__ aio; } ;
typedef TYPE_2__ core_mf_t ;
struct TYPE_9__ {struct TYPE_9__* next; struct TYPE_9__* prev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_1__* FUNC_3 (long long) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_4 ;

int FUNC_5 (long long VAR_5) {
  user_t *VAR_6 = FUNC_3 (VAR_5);

  if (VAR_4 > 1) {
    FUNC_1 (VAR_3, "unload_user_metafile(%lld)\n", VAR_5);
  }

  if (!VAR_6 || !VAR_6->mf || VAR_6->mf->aio) {
    if (VAR_4 > 1) {
      FUNC_1 (VAR_3, "cannot unload user metafile (%lld)\n", VAR_5);
    }
    return 0;
  }


  FUNC_4 (VAR_6);

  if (VAR_4 > 1) {
    FUNC_1 (VAR_3, "after unbind_user_metafile (%p)\n", VAR_6);
  }

  core_mf_t *VAR_7 = VAR_6->mf;

  FUNC_0 (VAR_7->next);
  VAR_7->next->prev = VAR_7->prev;
  VAR_7->prev->next = VAR_7->next;
  VAR_7->next = VAR_7->prev = 0;

  VAR_0 -= VAR_7->len;
  VAR_1 -= VAR_7->len;
  VAR_2--;

  FUNC_2 (VAR_7);
  VAR_6->mf = 0;

  if (VAR_4 > 1) {
    FUNC_1 (VAR_3, "unload_user_metafile(%lld) END\n", VAR_5);
  }

  return 1;
}
