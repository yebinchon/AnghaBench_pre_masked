
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct conn_query {int dummy; } ;
struct TYPE_9__ {char* x; TYPE_2__* y; } ;
typedef TYPE_1__ shmap_pair_string_vptr ;
struct TYPE_10__ {char* name; int id; int * ev_last; int ev_first; struct conn_query* last_q; struct conn_query* first_q; } ;
typedef TYPE_2__ queue ;
typedef int ll ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,...) ;
 scalar_t__ FUNC_2 () ;
 char* FUNC_3 (char*) ;
 int FUNC_4 () ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int *,int ) ;
 TYPE_2__* FUNC_6 () ;
 TYPE_1__* FUNC_7 (int *,TYPE_1__) ;
 TYPE_1__* FUNC_8 (int *,TYPE_1__) ;
 int VAR_3 ;

inline queue *FUNC_9 (char *VAR_4, int VAR_5) {
  shmap_pair_string_vptr VAR_6, *VAR_7;
  VAR_6.y = ((void*)0);
  VAR_6.x = VAR_4;

  queue *VAR_8 = ((void*)0);
  if (VAR_5) {
    VAR_7 = FUNC_7 (&VAR_2, VAR_6);
    if (VAR_7->y == ((void*)0)) {
      VAR_3 -= FUNC_2();
      VAR_7->x = FUNC_3 (VAR_7->x);
      VAR_3 += FUNC_2();

      VAR_8 = VAR_7->y = FUNC_6();

      VAR_8->name = VAR_7->x;
      VAR_8->first_q = VAR_8->last_q = (struct conn_query *) VAR_8;

      VAR_8->ev_first = *(VAR_8->ev_last = ((void*)0));




        VAR_8->id = FUNC_4();


      FUNC_1 ("ALIAS for [%s] = %lld\n", VAR_4, VAR_8->id);
      ll VAR_9 = VAR_8->id;

      if (VAR_9 == 0) {
        VAR_9 = VAR_0;
      }

      FUNC_1 ("add alias : %lld\n", VAR_9);
      queue **VAR_10 = (queue **)FUNC_5 (&VAR_1, VAR_9);
      FUNC_0 (*VAR_10 == ((void*)0));
      *VAR_10 = VAR_8;
    } else {
      VAR_8 = VAR_7->y;
    }
  } else {

    VAR_7 = FUNC_8 (&VAR_2, VAR_6);
    if (VAR_7 != ((void*)0)) {
      VAR_8 = VAR_7->y;
    }
  }

  return VAR_8;
}
