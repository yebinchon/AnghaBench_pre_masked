
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedr_device_attr {scalar_t__ max_sqe; scalar_t__ max_inline; scalar_t__ max_sge; } ;
struct qedr_dev {struct qedr_device_attr attr; } ;
struct ib_udata {int dummy; } ;
struct TYPE_2__ {scalar_t__ max_send_wr; scalar_t__ max_inline_data; scalar_t__ max_send_sge; scalar_t__ max_recv_sge; } ;
struct ib_qp_init_attr {scalar_t__ qp_type; TYPE_1__ cap; } ;
struct ib_pd {int dummy; } ;


 int FUNC_0 (struct qedr_dev*,int ,char*,scalar_t__) ;
 int FUNC_1 (struct qedr_dev*,char*,scalar_t__,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct ib_pd *VAR_4, struct qedr_dev *VAR_5,
          struct ib_qp_init_attr *VAR_6,
          struct ib_udata *VAR_7)
{
 struct qedr_device_attr *VAR_8 = &VAR_5->attr;


 if (VAR_6->qp_type != VAR_2 && VAR_6->qp_type != VAR_1) {
  FUNC_0(VAR_5, VAR_3,
    "create qp: unsupported qp type=0x%x requested\n",
    VAR_6->qp_type);
  return -VAR_0;
 }

 if (VAR_6->cap.max_send_wr > VAR_8->max_sqe) {
  FUNC_1(VAR_5,
         "create qp: cannot create a SQ with %d elements (max_send_wr=0x%x)\n",
         VAR_6->cap.max_send_wr, VAR_8->max_sqe);
  return -VAR_0;
 }

 if (VAR_6->cap.max_inline_data > VAR_8->max_inline) {
  FUNC_1(VAR_5,
         "create qp: unsupported inline data size=0x%x requested (max_inline=0x%x)\n",
         VAR_6->cap.max_inline_data, VAR_8->max_inline);
  return -VAR_0;
 }

 if (VAR_6->cap.max_send_sge > VAR_8->max_sge) {
  FUNC_1(VAR_5,
         "create qp: unsupported send_sge=0x%x requested (max_send_sge=0x%x)\n",
         VAR_6->cap.max_send_sge, VAR_8->max_sge);
  return -VAR_0;
 }

 if (VAR_6->cap.max_recv_sge > VAR_8->max_sge) {
  FUNC_1(VAR_5,
         "create qp: unsupported recv_sge=0x%x requested (max_recv_sge=0x%x)\n",
         VAR_6->cap.max_recv_sge, VAR_8->max_sge);
  return -VAR_0;
 }


 if (VAR_7 && VAR_6->qp_type == VAR_1) {
  FUNC_1(VAR_5,
         "create qp: userspace can't create special QPs of type=0x%x\n",
         VAR_6->qp_type);
  return -VAR_0;
 }

 return 0;
}
