
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int use_10_for_rw; int manage_start_stop; scalar_t__ type; int use_10_for_ms; int skip_ms_page_8; int fix_capacity; int start_stop_pwr_cond; int request_queue; struct sbp2_logical_unit* hostdata; } ;
struct sbp2_logical_unit {TYPE_1__* tgt; } ;
struct TYPE_2__ {int workarounds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_7)
{
 struct sbp2_logical_unit *VAR_8 = VAR_7->hostdata;

 VAR_7->use_10_for_rw = 1;

 if (VAR_6)
  VAR_7->manage_start_stop = 1;

 if (VAR_7->type == VAR_5)
  VAR_7->use_10_for_ms = 1;

 if (VAR_7->type == VAR_4 &&
     VAR_8->tgt->workarounds & VAR_2)
  VAR_7->skip_ms_page_8 = 1;

 if (VAR_8->tgt->workarounds & VAR_1)
  VAR_7->fix_capacity = 1;

 if (VAR_8->tgt->workarounds & VAR_3)
  VAR_7->start_stop_pwr_cond = 1;

 if (VAR_8->tgt->workarounds & VAR_0)
  FUNC_0(VAR_7->request_queue, 128 * 1024 / 512);

 return 0;
}
