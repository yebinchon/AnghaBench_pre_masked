
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedr_device_attr {scalar_t__ max_srq_wr; scalar_t__ max_sge; } ;
struct qedr_dev {struct qedr_device_attr attr; } ;
struct ib_udata {int dummy; } ;
struct TYPE_2__ {scalar_t__ max_wr; scalar_t__ max_sge; } ;
struct ib_srq_init_attr {TYPE_1__ attr; } ;


 int FUNC_0 (struct qedr_dev*,char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct qedr_dev *VAR_1,
     struct ib_srq_init_attr *VAR_2,
     struct ib_udata *VAR_3)
{
 struct qedr_device_attr *VAR_4 = &VAR_1->attr;

 if (VAR_2->attr.max_wr > VAR_4->max_srq_wr) {
  FUNC_0(VAR_1,
         "create srq: unsupported srq_wr=0x%x requested (max_srq_wr=0x%x)\n",
         VAR_2->attr.max_wr, VAR_4->max_srq_wr);
  return -VAR_0;
 }

 if (VAR_2->attr.max_sge > VAR_4->max_sge) {
  FUNC_0(VAR_1,
         "create srq: unsupported sge=0x%x requested (max_srq_sge=0x%x)\n",
         VAR_2->attr.max_sge, VAR_4->max_sge);
  return -VAR_0;
 }

 return 0;
}
