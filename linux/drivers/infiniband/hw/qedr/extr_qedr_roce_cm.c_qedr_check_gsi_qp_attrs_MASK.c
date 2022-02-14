
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedr_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ max_recv_sge; scalar_t__ max_recv_wr; scalar_t__ max_send_wr; } ;
struct ib_qp_init_attr {TYPE_1__ cap; } ;


 int FUNC_0 (struct qedr_dev*,char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline int FUNC_1(struct qedr_dev *VAR_4,
       struct ib_qp_init_attr *VAR_5)
{
 if (VAR_5->cap.max_recv_sge > VAR_1) {
  FUNC_0(VAR_4,
         " create gsi qp: failed. max_recv_sge is larger the max %d>%d\n",
         VAR_5->cap.max_recv_sge, VAR_1);
  return -VAR_0;
 }

 if (VAR_5->cap.max_recv_wr > VAR_2) {
  FUNC_0(VAR_4,
         " create gsi qp: failed. max_recv_wr is too large %d>%d\n",
         VAR_5->cap.max_recv_wr, VAR_2);
  return -VAR_0;
 }

 if (VAR_5->cap.max_send_wr > VAR_3) {
  FUNC_0(VAR_4,
         " create gsi qp: failed. max_send_wr is too large %d>%d\n",
         VAR_5->cap.max_send_wr, VAR_3);
  return -VAR_0;
 }

 return 0;
}
