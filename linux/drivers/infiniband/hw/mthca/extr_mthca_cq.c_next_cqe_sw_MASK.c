
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mthca_cqe {int dummy; } ;
struct TYPE_2__ {int cqe; } ;
struct mthca_cq {int cons_index; TYPE_1__ ibcq; } ;


 struct mthca_cqe* FUNC_0 (int ) ;
 int FUNC_1 (struct mthca_cq*,int) ;

__attribute__((used)) static inline struct mthca_cqe *FUNC_2(struct mthca_cq *VAR_0)
{
 return FUNC_0(FUNC_1(VAR_0, VAR_0->cons_index & VAR_0->ibcq.cqe));
}
