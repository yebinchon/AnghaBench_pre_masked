
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iolatency_grp {struct blk_iolatency* blkiolat; } ;
struct blkg_policy_data {int dummy; } ;
struct blkcg_gq {int dummy; } ;
struct blk_iolatency {int enabled; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct blkcg_gq*) ;
 int FUNC_3 (struct blkcg_gq*,int ) ;
 struct blkcg_gq* FUNC_4 (struct iolatency_grp*) ;
 struct iolatency_grp* FUNC_5 (struct blkg_policy_data*) ;

__attribute__((used)) static void FUNC_6(struct blkg_policy_data *VAR_0)
{
 struct iolatency_grp *VAR_1 = FUNC_5(VAR_0);
 struct blkcg_gq *VAR_2 = FUNC_4(VAR_1);
 struct blk_iolatency *VAR_3 = VAR_1->blkiolat;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_2, 0);
 if (VAR_4 == 1)
  FUNC_1(&VAR_3->enabled);
 if (VAR_4 == -1)
  FUNC_0(&VAR_3->enabled);
 FUNC_2(VAR_2);
}
