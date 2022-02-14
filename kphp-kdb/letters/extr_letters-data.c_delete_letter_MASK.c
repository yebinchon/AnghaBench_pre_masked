
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {long long id; size_t priority; scalar_t__ drive_l; struct TYPE_11__* l; TYPE_2__* next; TYPE_1__* prev; } ;
typedef TYPE_3__ temp_letter ;
struct TYPE_12__ {scalar_t__ drive_l; int drive_old_mx; scalar_t__ drive_mx; } ;
typedef TYPE_4__ one_header ;
struct TYPE_13__ {TYPE_4__* data; } ;
struct TYPE_10__ {TYPE_1__* prev; } ;
struct TYPE_9__ {TYPE_2__* next; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int * VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_6__ VAR_1 ;
 int VAR_2 ;
 int ** VAR_3 ;
 int FUNC_3 (int *,int) ;
 void** FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_4__*) ;

int FUNC_6 (long long VAR_4) {
  void **VAR_5 = FUNC_4 (&VAR_2, VAR_4);
  if (VAR_5 != ((void*)0)) {
    temp_letter *VAR_6 = (temp_letter *)*VAR_5;
    FUNC_0 (VAR_6 != ((void*)0));
    FUNC_0 (VAR_6->id == VAR_4);

    FUNC_3 (&VAR_2, VAR_6->id);

    VAR_6->prev->next = VAR_6->next;
    VAR_6->next->prev = VAR_6->prev;
    VAR_6->prev = ((void*)0);
    VAR_6->next = ((void*)0);

    one_header *VAR_7 = &VAR_1.data[VAR_6->priority];
    while (VAR_6 != ((void*)0) && VAR_7->drive_l == VAR_6->drive_l && VAR_6->next == ((void*)0)) {
      int VAR_8 = FUNC_2 (VAR_6->l);

      VAR_7->drive_l += VAR_8 - sizeof (long long);

      if (VAR_7->drive_l >= VAR_7->drive_old_mx) {
        VAR_7->drive_l -= VAR_7->drive_old_mx;
        if (VAR_7->drive_old_mx < VAR_7->drive_mx) {
          FUNC_5 (VAR_7);
        }
      }

      int VAR_9 = VAR_6->priority;
      VAR_3[VAR_9][1]++;
      VAR_3[VAR_9][2]--;
      FUNC_3 (&VAR_0[VAR_9], VAR_6->drive_l + 1);
      FUNC_1 (VAR_6->l, VAR_8);
      FUNC_1 (VAR_6, sizeof (temp_letter));

      VAR_5 = FUNC_4 (&VAR_0[VAR_9], VAR_7->drive_l + 1);
      if (VAR_5 != ((void*)0)) {
        VAR_6 = (temp_letter *)*VAR_5;
      } else {
        VAR_6 = ((void*)0);
      }
    }
    return 1;
  }
  return 0;
}
