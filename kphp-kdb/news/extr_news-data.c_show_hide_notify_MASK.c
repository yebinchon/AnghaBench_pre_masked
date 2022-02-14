
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* pnext; } ;
typedef TYPE_1__ userplace_t ;
struct TYPE_6__ {TYPE_1__* first; } ;
typedef TYPE_2__ notify_place_t ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 scalar_t__ FUNC_1 (int,int,int,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,TYPE_2__*,int,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static int FUNC_6 (int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7) {
  FUNC_5 (4, "show_hide_notify: type = %d, owner = %d, place = %d, item = %d, shown = %d, time = %lf\n", VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, (double)FUNC_3 (0));
  if (VAR_2 < VAR_1) {
    return 0;
  }
  if (!FUNC_0 (VAR_3, VAR_4, VAR_5) || !VAR_0 || !FUNC_4 (VAR_3)) {
    return -1;
  }

  notify_place_t *VAR_8 = (notify_place_t *)FUNC_1 (VAR_3, VAR_4, VAR_5, 0);
  FUNC_5 (4, "V = %p, time = %lf\n", VAR_8, (double)FUNC_3 (0));
  if (!VAR_8) {
    return 0;
  }

  userplace_t *VAR_9 = VAR_8->first;
  int VAR_10 = 0;
  while (VAR_9 != (userplace_t *)VAR_8) {
    VAR_10 += FUNC_2 (VAR_9, 0, VAR_8, VAR_6, VAR_7);
    VAR_9 = VAR_9->pnext;
  }


  return VAR_10;
}
