
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mlx4_ib_qp {scalar_t__ rss_usecnt; scalar_t__ port; int mutex; } ;
struct ib_wq {scalar_t__ state; int wq_num; } ;
struct ib_udata {int dummy; } ;
struct ib_rwq_ind_table {int log_ind_tbl_size; struct ib_wq** ind_tbl; } ;
struct ib_qp {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ib_wq*,scalar_t__,struct ib_udata*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 struct mlx4_ib_qp* FUNC_4 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_5(struct ib_rwq_ind_table *VAR_3, u8 VAR_4,
       struct ib_udata *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < (1 << VAR_3->log_ind_tbl_size); VAR_7++) {
  struct ib_wq *VAR_8 = VAR_3->ind_tbl[VAR_7];
  struct mlx4_ib_qp *VAR_9 = FUNC_4((struct ib_qp *)VAR_8);

  FUNC_1(&VAR_9->mutex);







  if ((VAR_9->rss_usecnt > 0) && (VAR_9->port != VAR_4)) {
   VAR_6 = -VAR_0;
   FUNC_2(&VAR_9->mutex);
   break;
  }
  VAR_9->port = VAR_4;
  if ((VAR_9->rss_usecnt == 0) && (VAR_8->state == VAR_1)) {
   VAR_6 = FUNC_0(VAR_8, VAR_1, VAR_5);
   if (VAR_6) {
    FUNC_2(&VAR_9->mutex);
    break;
   }
  }
  VAR_9->rss_usecnt++;

  FUNC_2(&VAR_9->mutex);
 }

 if (VAR_7 && VAR_6) {
  int VAR_10;

  for (VAR_10 = (VAR_7 - 1); VAR_10 >= 0; VAR_10--) {
   struct ib_wq *VAR_11 = VAR_3->ind_tbl[VAR_10];
   struct mlx4_ib_qp *VAR_12 = FUNC_4((struct ib_qp *)VAR_11);

   FUNC_1(&VAR_12->mutex);

   if ((VAR_12->rss_usecnt == 1) &&
       (VAR_11->state == VAR_1))
    if (FUNC_0(VAR_11, VAR_2,
             VAR_5))
     FUNC_3("failed to reverse WQN=0x%06x\n",
      VAR_11->wq_num);
   VAR_12->rss_usecnt--;

   FUNC_2(&VAR_12->mutex);
  }
 }

 return VAR_6;
}
