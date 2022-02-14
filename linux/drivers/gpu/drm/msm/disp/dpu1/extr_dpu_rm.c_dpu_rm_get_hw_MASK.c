
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_rm_hw_iter {int dummy; } ;
struct dpu_rm {int rm_lock; } ;


 int FUNC_0 (struct dpu_rm*,struct dpu_rm_hw_iter*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3(struct dpu_rm *VAR_0, struct dpu_rm_hw_iter *VAR_1)
{
 bool VAR_2;

 FUNC_1(&VAR_0->rm_lock);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->rm_lock);

 return VAR_2;
}
