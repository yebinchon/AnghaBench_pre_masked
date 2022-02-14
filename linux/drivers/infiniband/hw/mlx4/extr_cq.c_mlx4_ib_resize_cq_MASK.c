
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mlx4_mtt {int dummy; } ;
struct mlx4_ib_dev {TYPE_3__* dev; } ;
struct mlx4_ib_cq_buf {struct mlx4_mtt mtt; } ;
struct TYPE_7__ {int cqe; } ;
struct mlx4_ib_cq {int resize_mutex; int * resize_umem; TYPE_5__* resize_buf; int lock; TYPE_2__ ibcq; struct mlx4_ib_cq_buf buf; int * umem; int mcq; } ;
struct ib_udata {int dummy; } ;
struct ib_cq {int cqe; scalar_t__ uobject; int device; } ;
struct TYPE_9__ {int cqe; struct mlx4_ib_cq_buf buf; } ;
struct TYPE_6__ {int max_cqes; } ;
struct TYPE_8__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (struct mlx4_ib_dev*,struct mlx4_ib_cq*,int) ;
 int FUNC_3 (struct mlx4_ib_dev*,struct mlx4_ib_cq*,int,struct ib_udata*) ;
 int FUNC_4 (TYPE_3__*,int *,int,struct mlx4_mtt*) ;
 int FUNC_5 (struct mlx4_ib_cq*) ;
 int FUNC_6 (struct mlx4_ib_dev*,struct mlx4_ib_cq_buf*,int) ;
 int FUNC_7 (struct mlx4_ib_cq*) ;
 int FUNC_8 (TYPE_3__*,struct mlx4_mtt*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct mlx4_ib_cq* FUNC_14 (struct ib_cq*) ;
 struct mlx4_ib_dev* FUNC_15 (int ) ;

int FUNC_16(struct ib_cq *VAR_1, int VAR_2, struct ib_udata *VAR_3)
{
 struct mlx4_ib_dev *VAR_4 = FUNC_15(VAR_1->device);
 struct mlx4_ib_cq *VAR_5 = FUNC_14(VAR_1);
 struct mlx4_mtt VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_9(&VAR_5->resize_mutex);
 if (VAR_2 < 1 || VAR_2 > VAR_4->dev->caps.max_cqes) {
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_2 = FUNC_11(VAR_2 + 1);
 if (VAR_2 == VAR_1->cqe + 1) {
  VAR_8 = 0;
  goto out;
 }

 if (VAR_2 > VAR_4->dev->caps.max_cqes + 1) {
  VAR_8 = -VAR_0;
  goto out;
 }

 if (VAR_1->uobject) {
  VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_2, VAR_3);
  if (VAR_8)
   goto out;
 } else {

  VAR_7 = FUNC_7(VAR_5);
  if (VAR_2 < VAR_7 + 1) {
   VAR_8 = -VAR_0;
   goto out;
  }

  VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_2);
  if (VAR_8)
   goto out;
 }

 VAR_6 = VAR_5->buf.mtt;

 VAR_8 = FUNC_4(VAR_4->dev, &VAR_5->mcq, VAR_2, &VAR_5->resize_buf->buf.mtt);
 if (VAR_8)
  goto err_buf;

 FUNC_8(VAR_4->dev, &VAR_6);
 if (VAR_1->uobject) {
  VAR_5->buf = VAR_5->resize_buf->buf;
  VAR_5->ibcq.cqe = VAR_5->resize_buf->cqe;
  FUNC_0(VAR_5->umem);
  VAR_5->umem = VAR_5->resize_umem;

  FUNC_1(VAR_5->resize_buf);
  VAR_5->resize_buf = ((void*)0);
  VAR_5->resize_umem = ((void*)0);
 } else {
  struct mlx4_ib_cq_buf VAR_9;
  int VAR_10 = 0;

  FUNC_12(&VAR_5->lock);
  if (VAR_5->resize_buf) {
   FUNC_5(VAR_5);
   VAR_9 = VAR_5->buf;
   VAR_10 = VAR_5->ibcq.cqe;
   VAR_5->buf = VAR_5->resize_buf->buf;
   VAR_5->ibcq.cqe = VAR_5->resize_buf->cqe;

   FUNC_1(VAR_5->resize_buf);
   VAR_5->resize_buf = ((void*)0);
  }
  FUNC_13(&VAR_5->lock);

  if (VAR_10)
   FUNC_6(VAR_4, &VAR_9, VAR_10);
 }

 goto out;

err_buf:
 FUNC_8(VAR_4->dev, &VAR_5->resize_buf->buf.mtt);
 if (!VAR_1->uobject)
  FUNC_6(VAR_4, &VAR_5->resize_buf->buf,
        VAR_5->resize_buf->cqe);

 FUNC_1(VAR_5->resize_buf);
 VAR_5->resize_buf = ((void*)0);

 FUNC_0(VAR_5->resize_umem);
 VAR_5->resize_umem = ((void*)0);
out:
 FUNC_10(&VAR_5->resize_mutex);

 return VAR_8;
}
