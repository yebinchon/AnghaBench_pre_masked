
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int head; } ;
struct TYPE_4__ {TYPE_1__ sq; } ;
struct ocrdma_dev {TYPE_2__ mq; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct ocrdma_dev *VAR_1)
{
 VAR_1->mq.sq.head = (VAR_1->mq.sq.head + 1) & (VAR_0 - 1);
}
