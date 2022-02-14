
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hisi_zip_ctrl {int num_vfs; } ;
struct TYPE_2__ {int curr_qm_qp_num; } ;
struct hisi_qm {int qp_num; int ctrl_qp_num; scalar_t__ io_base; TYPE_1__ debug; } ;
struct ctrl_debug_file {struct hisi_zip_ctrl* ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct hisi_qm* FUNC_0 (struct ctrl_debug_file*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct ctrl_debug_file *VAR_6, u32 VAR_7)
{
 struct hisi_qm *VAR_8 = FUNC_0(VAR_6);
 struct hisi_zip_ctrl *VAR_9 = VAR_6->ctrl;
 u32 VAR_10;
 u32 VAR_11;

 if (VAR_7 > VAR_9->num_vfs)
  return -VAR_1;


 if (VAR_7 == 0) {
  VAR_8->debug.curr_qm_qp_num = VAR_8->qp_num;
 } else {
  VAR_10 = (VAR_8->ctrl_qp_num - VAR_8->qp_num) / VAR_9->num_vfs;
  if (VAR_7 == VAR_9->num_vfs)
   VAR_8->debug.curr_qm_qp_num = VAR_8->ctrl_qp_num -
    VAR_8->qp_num - (VAR_9->num_vfs - 1) * VAR_10;
  else
   VAR_8->debug.curr_qm_qp_num = VAR_10;
 }

 FUNC_2(VAR_7, VAR_8->io_base + VAR_4);
 FUNC_2(VAR_7, VAR_8->io_base + VAR_3);

 VAR_11 = VAR_7 |
       (FUNC_1(VAR_8->io_base + VAR_5) & VAR_0);
 FUNC_2(VAR_11, VAR_8->io_base + VAR_5);

 VAR_11 = VAR_7 |
       (FUNC_1(VAR_8->io_base + VAR_2) & VAR_0);
 FUNC_2(VAR_11, VAR_8->io_base + VAR_2);

 return 0;
}
