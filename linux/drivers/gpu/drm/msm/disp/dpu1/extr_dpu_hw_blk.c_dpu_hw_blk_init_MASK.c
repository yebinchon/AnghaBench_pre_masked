
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpu_hw_blk_ops {int dummy; } ;
struct dpu_hw_blk {int id; int list; struct dpu_hw_blk_ops ops; int refcount; int type; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct dpu_hw_blk *VAR_2, u32 VAR_3, int VAR_4,
  struct dpu_hw_blk_ops *VAR_5)
{
 FUNC_0(&VAR_2->list);
 VAR_2->type = VAR_3;
 VAR_2->id = VAR_4;
 FUNC_1(&VAR_2->refcount, 0);

 if (VAR_5)
  VAR_2->ops = *VAR_5;

 FUNC_3(&VAR_1);
 FUNC_2(&VAR_2->list, &VAR_0);
 FUNC_4(&VAR_1);
}
