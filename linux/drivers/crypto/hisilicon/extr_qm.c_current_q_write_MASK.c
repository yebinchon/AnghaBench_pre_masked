
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ curr_qm_qp_num; } ;
struct hisi_qm {scalar_t__ io_base; TYPE_1__ debug; } ;
struct debugfs_file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct hisi_qm* FUNC_0 (struct debugfs_file*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct debugfs_file *VAR_5, u32 VAR_6)
{
 struct hisi_qm *VAR_7 = FUNC_0(VAR_5);
 u32 VAR_8;

 if (VAR_6 >= VAR_7->debug.curr_qm_qp_num)
  return -VAR_1;

 VAR_8 = VAR_6 << VAR_3 |
       (FUNC_1(VAR_7->io_base + VAR_4) & VAR_0);
 FUNC_2(VAR_8, VAR_7->io_base + VAR_4);

 VAR_8 = VAR_6 << VAR_3 |
       (FUNC_1(VAR_7->io_base + VAR_2) & VAR_0);
 FUNC_2(VAR_8, VAR_7->io_base + VAR_2);

 return 0;
}
