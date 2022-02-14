
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tn; } ;
typedef TYPE_1__ event_dump ;
typedef int event ;


 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *,int,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char*,int,int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 () ;

event *FUNC_6 (event *VAR_0, char *VAR_1, int VAR_2) {
  if (VAR_1 == ((void*)0)) {
    return VAR_0;
  }

  FUNC_5();

  event_dump VAR_3;
  FUNC_4 (&VAR_3, VAR_2);

  if (FUNC_3 (&VAR_3, VAR_1, VAR_2, VAR_0) < 0) {
    return ((void*)0);
  }

  if (VAR_3.tn) {
    FUNC_0 (FUNC_2 (&VAR_3, VAR_0, VAR_2, ((void*)0)) > -1);
    VAR_0 = FUNC_1 (&VAR_3);
    FUNC_0 (VAR_0 != ((void*)0));
  }
  return VAR_0;
}
