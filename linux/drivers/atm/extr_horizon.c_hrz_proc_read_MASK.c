
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct atm_dev {int dummy; } ;
typedef int loff_t ;
struct TYPE_5__ {int tx_avail; int rx_avail; int noof_spare_buffers; int unassigned_cell_count; int hec_error_count; int rx_cell_count; int tx_cell_count; } ;
typedef TYPE_1__ hrz_dev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct atm_dev*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,unsigned int,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (char*,char*,...) ;

__attribute__((used)) static int FUNC_5 (struct atm_dev * VAR_6, loff_t * VAR_7, char * VAR_8) {
  hrz_dev * VAR_9 = FUNC_0(VAR_6);
  int VAR_10 = *VAR_7;
  FUNC_1 (VAR_2, "hrz_proc_read");
  if (!VAR_10--)
    return FUNC_4 (VAR_8,
      "cells: TX %lu, RX %lu, HEC errors %lu, unassigned %lu.\n",
      VAR_9->tx_cell_count, VAR_9->rx_cell_count,
      VAR_9->hec_error_count, VAR_9->unassigned_cell_count);

  if (!VAR_10--)
    return FUNC_4 (VAR_8,
      "free cell buffers: TX %hu, RX %hu+%hu.\n",
      FUNC_3 (VAR_9, VAR_5),
      FUNC_3 (VAR_9, VAR_3),
      VAR_9->noof_spare_buffers);

  if (!VAR_10--)
    return FUNC_4 (VAR_8,
      "cps remaining: TX %u, RX %u\n",
      VAR_9->tx_avail, VAR_9->rx_avail);

  return 0;
}
