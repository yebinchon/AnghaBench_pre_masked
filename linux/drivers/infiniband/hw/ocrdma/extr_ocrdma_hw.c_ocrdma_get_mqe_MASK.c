
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocrdma_mqe {int dummy; } ;
struct TYPE_3__ {int head; struct ocrdma_mqe* va; } ;
struct TYPE_4__ {TYPE_1__ sq; } ;
struct ocrdma_dev {TYPE_2__ mq; } ;



__attribute__((used)) static inline struct ocrdma_mqe *FUNC_0(struct ocrdma_dev *VAR_0)
{
 return VAR_0->mq.sq.va + (VAR_0->mq.sq.head * sizeof(struct ocrdma_mqe));
}
