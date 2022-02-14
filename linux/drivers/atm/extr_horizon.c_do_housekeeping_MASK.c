
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_5__ {int housekeeping; int unassigned_cell_count; int hec_error_count; int rx_cell_count; int tx_cell_count; } ;
typedef TYPE_1__ hrz_dev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 TYPE_1__* FUNC_0 (int ,struct timer_list*,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_3 (struct timer_list *VAR_8) {

  hrz_dev * VAR_9 = FUNC_0(VAR_9, VAR_8, VAR_6);


  VAR_9->tx_cell_count += FUNC_2 (VAR_9, VAR_3);
  VAR_9->rx_cell_count += FUNC_2 (VAR_9, VAR_2);
  VAR_9->hec_error_count += FUNC_2 (VAR_9, VAR_0);
  VAR_9->unassigned_cell_count += FUNC_2 (VAR_9, VAR_4);

  FUNC_1 (&VAR_9->housekeeping, VAR_7 + VAR_1/10);

  return;
}
