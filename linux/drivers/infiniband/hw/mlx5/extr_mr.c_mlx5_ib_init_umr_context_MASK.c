
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int done; } ;
struct mlx5_ib_umr_context {int status; int done; TYPE_1__ cqe; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(struct mlx5_ib_umr_context *VAR_1)
{
 VAR_1->cqe.done = VAR_0;
 VAR_1->status = -1;
 FUNC_0(&VAR_1->done);
}
