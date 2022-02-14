
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tn; } ;
typedef TYPE_1__ event_dump ;
typedef int event ;


 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *,int,int *) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 () ;

event *FUNC_5 (event *VAR_0, event *VAR_1, int VAR_2) {
  if (VAR_1 == ((void*)0)) {
    return VAR_0;
  }

  FUNC_4();

  event_dump VAR_3;
  FUNC_3 (&VAR_3, VAR_2);

  FUNC_0 (FUNC_2 (&VAR_3, VAR_1, VAR_2, VAR_0) > -1);

  if (VAR_3.tn) {
    FUNC_2 (&VAR_3, VAR_0, VAR_2, ((void*)0));

    VAR_0 = FUNC_1 (&VAR_3);
    FUNC_0 (VAR_0 != ((void*)0));
  }
  return VAR_0;
}
