
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocrdma_srq {int id; struct ocrdma_pd* pd; } ;
struct TYPE_2__ {int device; } ;
struct ocrdma_pd {TYPE_1__ ibpd; } ;
struct ocrdma_mqe {int dummy; } ;
struct ocrdma_modify_srq {int limit_max_rqe; int id; } ;
struct ocrdma_dev {int dummy; } ;
struct ib_srq_attr {int srq_limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ocrdma_dev* FUNC_0 (int ) ;
 int FUNC_1 (struct ocrdma_modify_srq*) ;
 struct ocrdma_modify_srq* FUNC_2 (int ,int) ;
 int FUNC_3 (struct ocrdma_dev*,struct ocrdma_mqe*) ;

int FUNC_4(struct ocrdma_srq *VAR_3, struct ib_srq_attr *VAR_4)
{
 int VAR_5 = -VAR_0;
 struct ocrdma_modify_srq *VAR_6;
 struct ocrdma_pd *VAR_7 = VAR_3->pd;
 struct ocrdma_dev *VAR_8 = FUNC_0(VAR_7->ibpd.device);

 VAR_6 = FUNC_2(VAR_1, sizeof(*VAR_6));
 if (!VAR_6)
  return VAR_5;
 VAR_6->id = VAR_3->id;
 VAR_6->limit_max_rqe |= VAR_4->srq_limit <<
     VAR_2;
 VAR_5 = FUNC_3(VAR_8, (struct ocrdma_mqe *)VAR_6);
 FUNC_1(VAR_6);
 return VAR_5;
}
