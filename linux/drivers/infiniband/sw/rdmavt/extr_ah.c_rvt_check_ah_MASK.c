
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {int (* check_ah ) (struct ib_device*,struct rdma_ah_attr*) ;} ;
struct rvt_dev_info {TYPE_1__ driver_f; } ;
struct rdma_ah_attr {int dummy; } ;
struct ib_port_attr {scalar_t__ gid_tbl_len; } ;
struct ib_device {int phys_port_cnt; } ;
struct TYPE_4__ {scalar_t__ sgid_index; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ib_device*,int,struct ib_port_attr*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct rvt_dev_info* FUNC_2 (struct ib_device*) ;
 scalar_t__ FUNC_3 (struct rdma_ah_attr*) ;
 int FUNC_4 (struct rdma_ah_attr*) ;
 scalar_t__ FUNC_5 (struct rdma_ah_attr*) ;
 TYPE_2__* FUNC_6 (struct rdma_ah_attr*) ;
 int FUNC_7 (struct ib_device*,struct rdma_ah_attr*) ;

int FUNC_8(struct ib_device *VAR_3,
   struct rdma_ah_attr *VAR_4)
{
 int VAR_5;
 int VAR_6 = FUNC_4(VAR_4);
 struct ib_port_attr VAR_7;
 struct rvt_dev_info *VAR_8 = FUNC_2(VAR_3);
 u8 VAR_9 = FUNC_3(VAR_4);
 u8 VAR_10 = FUNC_5(VAR_4);

 VAR_5 = FUNC_0(VAR_3, VAR_6, &VAR_7);
 if (VAR_5)
  return -VAR_0;
 if (VAR_6 < 1 ||
     VAR_6 > VAR_3->phys_port_cnt)
  return -VAR_0;
 if (VAR_10 != VAR_2 &&
     FUNC_1(VAR_10) < 0)
  return -VAR_0;
 if ((VAR_9 & VAR_1) &&
     FUNC_6(VAR_4)->sgid_index >= VAR_7.gid_tbl_len)
  return -VAR_0;
 if (VAR_8->driver_f.check_ah)
  return VAR_8->driver_f.check_ah(VAR_3, VAR_4);
 return 0;
}
