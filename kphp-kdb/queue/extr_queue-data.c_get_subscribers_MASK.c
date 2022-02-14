
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int s; scalar_t__ id; TYPE_2__* q; } ;
typedef TYPE_1__ subscribers ;
struct TYPE_7__ {int subscr_cnt; } ;
typedef TYPE_2__ queue ;
typedef scalar_t__ ll ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 TYPE_2__* FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int *,scalar_t__*) ;
 scalar_t__ FUNC_6 (int *,scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int *) ;

inline subscribers *FUNC_8 (ll VAR_3, int VAR_4) {
  subscribers **VAR_5;



  if (VAR_4) {
    queue *VAR_6 = ((void*)0);

    if (!FUNC_0 (VAR_3)) {
      VAR_6 = FUNC_4 (VAR_3);
      if (VAR_6 == ((void*)0)) {
        return ((void*)0);
      }
    }

    VAR_5 = (subscribers **)FUNC_5 (&VAR_0, &VAR_3);


    if (*VAR_5 == (subscribers *)&VAR_3) {
      subscribers *VAR_7 = FUNC_1();
      if (!FUNC_0 (VAR_3)) {
        FUNC_2 (VAR_6 != ((void*)0));
        VAR_7->q = VAR_6;
        VAR_6->subscr_cnt++;
      }

      VAR_7->id = VAR_3;
      FUNC_7 (&VAR_7->s);

      if (VAR_1 > 1) {
        FUNC_3 (VAR_2, "subcribers_created id = %ld\n", VAR_3);
      }

      *VAR_5 = VAR_7;
    }
  } else {
    VAR_5 = (subscribers **)FUNC_6 (&VAR_0, &VAR_3);
    if (VAR_5 == ((void*)0)) {
      return ((void*)0);
    }
  }
  return *VAR_5;
}
