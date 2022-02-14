
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hns_roce_qp {int dummy; } ;
struct TYPE_2__ {int num_qps; } ;
struct hns_roce_dev {TYPE_1__ caps; int qp_table_xa; } ;


 struct hns_roce_qp* FUNC_0 (int *,int) ;

__attribute__((used)) static inline struct hns_roce_qp
 *FUNC_1(struct hns_roce_dev *VAR_0, u32 VAR_1)
{
 return FUNC_0(&VAR_0->qp_table_xa, VAR_1 & (VAR_0->caps.num_qps - 1));
}
