
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_ib_qp {int rss_usecnt; int mutex; } ;
struct ib_wq {scalar_t__ state; int wq_num; } ;
struct ib_udata {int dummy; } ;
struct ib_rwq_ind_table {int log_ind_tbl_size; struct ib_wq** ind_tbl; } ;
struct ib_qp {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ib_wq*,int ,struct ib_udata*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 struct mlx4_ib_qp* FUNC_4 (struct ib_qp*) ;

__attribute__((used)) static void FUNC_5(struct ib_rwq_ind_table *VAR_2,
    struct ib_udata *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < (1 << VAR_2->log_ind_tbl_size); VAR_4++) {
  struct ib_wq *VAR_5 = VAR_2->ind_tbl[VAR_4];
  struct mlx4_ib_qp *VAR_6 = FUNC_4((struct ib_qp *)VAR_5);

  FUNC_1(&VAR_6->mutex);

  if ((VAR_6->rss_usecnt == 1) && (VAR_5->state == VAR_0))
   if (FUNC_0(VAR_5, VAR_1, VAR_3))
    FUNC_3("failed to reverse WQN=%x\n",
     VAR_5->wq_num);
  VAR_6->rss_usecnt--;

  FUNC_2(&VAR_6->mutex);
 }
}
