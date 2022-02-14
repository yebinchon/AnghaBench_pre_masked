
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_cqe {int dummy; } ;
struct mthca_cq {int buf; } ;


 struct mthca_cqe* FUNC_0 (int *,int) ;

__attribute__((used)) static inline struct mthca_cqe *FUNC_1(struct mthca_cq *VAR_0, int VAR_1)
{
 return FUNC_0(&VAR_0->buf, VAR_1);
}
