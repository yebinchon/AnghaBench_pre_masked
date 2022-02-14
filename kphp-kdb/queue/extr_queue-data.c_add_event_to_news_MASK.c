
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* treap_node_ptr ;
struct TYPE_9__ {int subscr_cnt; int keys_cnt; int ev_first; int ref_cnt; int name; int * subs; } ;
typedef TYPE_2__ queue ;
struct TYPE_10__ {int y; int x; } ;
typedef TYPE_3__ pli ;
typedef int ll ;
struct TYPE_8__ {int val; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,char*,int,int,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int,...) ;
 TYPE_2__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,int ,scalar_t__,int,int) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_10 (int *,int ) ;

void FUNC_11 (ll VAR_4, int VAR_5, int VAR_6, int VAR_7, pli *VAR_8, int VAR_9, char *VAR_10, int VAR_11) {
  int VAR_12 = FUNC_9 (VAR_10), VAR_13;

  VAR_1 = 0;
  VAR_3 = 0;

  for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
    if (!FUNC_0(VAR_8[VAR_13].x)) {
      queue *VAR_14 = FUNC_4 (VAR_8[VAR_13].x, 0);

      if (VAR_14 != ((void*)0)) {
        FUNC_2 (VAR_14->subs != ((void*)0));
        treap_node_ptr VAR_15 = FUNC_10 (VAR_14->subs, VAR_4);

        if (VAR_11) {
          FUNC_3 ("BAD REDIRECT from %lld to %lld[%s](we are here) : ref_cnt = %d, ev_first = %p, keys_cnt = %d, subscr_cnt = %d, ttl = %d\n", VAR_4, VAR_8[VAR_13].x, VAR_14->name, VAR_14->ref_cnt, VAR_14->ev_first, VAR_14->keys_cnt, VAR_14->subscr_cnt, VAR_7);
          if (VAR_15 != ((void*)0)) {
            FUNC_3 ("  ids[i].y = %d, v->val = %d, x = %d, y = %d, %d =?= %d\n", VAR_8[VAR_13].y, VAR_15->val, VAR_5, VAR_6,
                VAR_5 & VAR_15->val, VAR_6);
          }
        }
        if (VAR_15 != ((void*)0)) {
          if (VAR_15->val != VAR_8[VAR_13].y) {
            FUNC_5 (VAR_8[VAR_13].x, VAR_15->val);

          }

          if ((VAR_5 & VAR_15->val) == VAR_6) {
            int VAR_16 = FUNC_8 (VAR_10 + VAR_12, "<!>%d", VAR_15->val);
            FUNC_1 (VAR_14, VAR_10, VAR_12 + VAR_16, VAR_5, VAR_6, VAR_7);
          }
        } else {
          FUNC_6 (VAR_8[VAR_13].x);
        }
      } else {
        if (VAR_11) {
          FUNC_3 ("BAD REDIRECT from %lld to NULL, ttl = %d\n", VAR_4, VAR_7);
        }
        FUNC_6 (VAR_8[VAR_13].x);
      }
    }
  }
  FUNC_7 (VAR_4, ((void*)0), VAR_0, VAR_1, 1, 1);
  FUNC_7 (VAR_4, ((void*)0), VAR_2, VAR_3, 0, 1);
}
