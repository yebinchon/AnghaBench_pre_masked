
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_send_wr; } ;
struct mlx5_ib_gsi_qp {int outstanding_pi; int lock; TYPE_1__ cap; } ;
struct TYPE_4__ {int * next; } ;
struct ib_ud_wr {TYPE_2__ wr; } ;
struct ib_send_wr {struct ib_send_wr* next; } ;
struct ib_qp {int dummy; } ;


 struct ib_qp* FUNC_0 (struct mlx5_ib_gsi_qp*,struct ib_ud_wr*) ;
 struct mlx5_ib_gsi_qp* FUNC_1 (struct ib_qp*) ;
 int FUNC_2 (struct ib_qp*,TYPE_2__*,struct ib_send_wr const**) ;
 int FUNC_3 (struct mlx5_ib_gsi_qp*,struct ib_ud_wr*,int *) ;
 int FUNC_4 (struct mlx5_ib_gsi_qp*,struct ib_ud_wr*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct ib_ud_wr* FUNC_7 (struct ib_send_wr const*) ;

int FUNC_8(struct ib_qp *VAR_0, const struct ib_send_wr *VAR_1,
     const struct ib_send_wr **VAR_2)
{
 struct mlx5_ib_gsi_qp *VAR_3 = FUNC_1(VAR_0);
 struct ib_qp *VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 for (; VAR_1; VAR_1 = VAR_1->next) {
  struct ib_ud_wr VAR_7 = *FUNC_7(VAR_1);

  VAR_7.wr.next = ((void*)0);

  FUNC_5(&VAR_3->lock, VAR_5);
  VAR_4 = FUNC_0(VAR_3, &VAR_7);
  if (!VAR_4) {
   VAR_6 = FUNC_4(VAR_3, &VAR_7);
   if (VAR_6)
    goto err;
   FUNC_6(&VAR_3->lock, VAR_5);
   continue;
  }

  VAR_6 = FUNC_3(VAR_3, &VAR_7, ((void*)0));
  if (VAR_6)
   goto err;

  VAR_6 = FUNC_2(VAR_4, &VAR_7.wr, VAR_2);
  if (VAR_6) {

   VAR_3->outstanding_pi = (VAR_3->outstanding_pi - 1) %
           VAR_3->cap.max_send_wr;
   goto err;
  }
  FUNC_6(&VAR_3->lock, VAR_5);
 }

 return 0;

err:
 FUNC_6(&VAR_3->lock, VAR_5);
 *VAR_2 = VAR_1;
 return VAR_6;
}
