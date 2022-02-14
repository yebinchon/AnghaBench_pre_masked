
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* history_mf; } ;
typedef TYPE_1__ user_t ;
struct TYPE_7__ {scalar_t__ len; TYPE_5__* prev; TYPE_5__* next; scalar_t__ aio; } ;
typedef TYPE_2__ core_mf_t ;
struct TYPE_8__ {struct TYPE_8__* next; struct TYPE_8__* prev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,long long) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_1__* FUNC_3 (long long) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_4 (long long VAR_5) {
  user_t *VAR_6 = FUNC_3 (VAR_5);

  if (VAR_4 > 1) {
    FUNC_1 (VAR_3, "unload_history_metafile(%lld)\n", VAR_5);
  }

  if (!VAR_6 || !VAR_6->history_mf || VAR_6->history_mf->aio) {
    if (VAR_4 > 1) {
      FUNC_1 (VAR_3, "cannot unload history metafile (%lld)\n", VAR_5);
    }
    return 0;
  }

  core_mf_t *VAR_7 = VAR_6->history_mf;

  FUNC_0 (VAR_7->next);
  VAR_7->next->prev = VAR_7->prev;
  VAR_7->prev->next = VAR_7->next;
  VAR_7->next = VAR_7->prev = 0;

  VAR_0 -= VAR_7->len;
  VAR_1 -= VAR_7->len;
  VAR_2--;

  FUNC_2 (VAR_7);
  VAR_6->history_mf = 0;

  if (VAR_4 > 1) {
    FUNC_1 (VAR_3, "unload_history_metafile(%lld) END\n", VAR_5);
  }

  return 1;
}
