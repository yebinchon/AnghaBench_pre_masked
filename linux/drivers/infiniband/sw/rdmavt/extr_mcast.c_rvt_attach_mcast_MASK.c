
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u16 ;
struct rvt_qp {int port_num; scalar_t__ state; } ;
struct rvt_mcast_qp {int dummy; } ;
struct rvt_mcast {int dummy; } ;
struct rvt_ibport {int dummy; } ;
struct rvt_dev_info {struct rvt_ibport** ports; } ;
struct ib_qp {int qp_num; int device; } ;






 scalar_t__ VAR_0 ;
 struct rvt_dev_info* FUNC_0 (int ) ;
 struct rvt_qp* FUNC_1 (struct ib_qp*) ;
 int FUNC_2 (struct rvt_dev_info*,struct rvt_ibport*,struct rvt_mcast*,struct rvt_mcast_qp*) ;
 struct rvt_mcast* FUNC_3 (union ib_gid*,int ) ;
 int FUNC_4 (struct rvt_mcast*) ;
 struct rvt_mcast_qp* FUNC_5 (struct rvt_qp*) ;
 int FUNC_6 (struct rvt_mcast_qp*) ;

int FUNC_7(struct ib_qp *VAR_1, union ib_gid *VAR_2, u16 VAR_3)
{
 struct rvt_qp *VAR_4 = FUNC_1(VAR_1);
 struct rvt_dev_info *VAR_5 = FUNC_0(VAR_1->device);
 struct rvt_ibport *VAR_6 = VAR_5->ports[VAR_4->port_num - 1];
 struct rvt_mcast *VAR_7;
 struct rvt_mcast_qp *VAR_8;
 int VAR_9 = -129;

 if (VAR_1->qp_num <= 1 || VAR_4->state == VAR_0)
  return -130;





 VAR_7 = FUNC_3(VAR_2, VAR_3);
 if (!VAR_7)
  return -129;

 VAR_8 = FUNC_5(VAR_4);
 if (!VAR_8)
  goto bail_mcast;

 switch (FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8)) {
 case 128:

  VAR_9 = 0;
  goto bail_mqp;
 case 131:
  VAR_9 = 0;
  goto bail_mcast;
 case 129:

  VAR_9 = -129;
  goto bail_mqp;
 case 130:

  VAR_9 = -130;
  goto bail_mqp;
 default:
  break;
 }

 return 0;

bail_mqp:
 FUNC_6(VAR_8);

bail_mcast:
 FUNC_4(VAR_7);

 return VAR_9;
}
