
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int tx_queue; } ;
typedef TYPE_1__ hrz_dev ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,TYPE_1__*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4 (hrz_dev * VAR_3) {
  FUNC_0 (VAR_0, "sleeping at tx lock %p %lu", VAR_3, VAR_3->flags);
  FUNC_3(VAR_3->tx_queue, (!FUNC_2(VAR_2, &VAR_3->flags)));
  FUNC_0 (VAR_0, "woken at tx lock %p %lu", VAR_3, VAR_3->flags);
  if (FUNC_1 (VAR_1))
    return -1;
  FUNC_0 (VAR_0, "set tx_busy for dev %p", VAR_3);
  return 0;
}
