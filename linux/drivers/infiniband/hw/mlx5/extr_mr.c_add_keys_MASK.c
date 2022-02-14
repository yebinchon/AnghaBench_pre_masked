
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_mr {int allocated_from_cache; int cb_work; int out; int mmkey; struct mlx5_ib_dev* dev; int order; } ;
typedef struct mlx5_ib_mr u32 ;
struct mlx5_mr_cache {struct mlx5_cache_ent* ent; } ;
struct mlx5_ib_dev {int async_ctx; int mdev; struct mlx5_mr_cache cache; } ;
struct mlx5_cache_ent {scalar_t__ pending; int access_mode; int xlt; int page; int lock; int order; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (int ,struct mlx5_ib_mr*,int ) ;
 int FUNC_1 (void*,void*,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct mlx5_ib_mr*) ;
 struct mlx5_ib_mr* FUNC_4 (int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ,int *,int *,struct mlx5_ib_mr*,int,int ,int,int ,int *) ;
 int FUNC_6 (struct mlx5_ib_dev*,char*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_9(struct mlx5_ib_dev *VAR_14, int VAR_15, int VAR_16)
{
 struct mlx5_mr_cache *VAR_17 = &VAR_14->cache;
 struct mlx5_cache_ent *VAR_18 = &VAR_17->ent[VAR_15];
 int VAR_19 = FUNC_2(VAR_6);
 struct mlx5_ib_mr *VAR_20;
 void *VAR_21;
 u32 *VAR_22;
 int VAR_23 = 0;
 int VAR_24;

 VAR_22 = FUNC_4(VAR_19, VAR_2);
 if (!VAR_22)
  return -VAR_1;

 VAR_21 = FUNC_0(VAR_6, VAR_22, VAR_9);
 for (VAR_24 = 0; VAR_24 < VAR_16; VAR_24++) {
  if (VAR_18->pending >= VAR_3) {
   VAR_23 = -VAR_0;
   break;
  }

  VAR_20 = FUNC_4(sizeof(*VAR_20), VAR_2);
  if (!VAR_20) {
   VAR_23 = -VAR_1;
   break;
  }
  VAR_20->order = VAR_18->order;
  VAR_20->allocated_from_cache = 1;
  VAR_20->dev = VAR_14;

  FUNC_1(VAR_21, VAR_21, VAR_7, 1);
  FUNC_1(VAR_21, VAR_21, VAR_13, 1);
  FUNC_1(VAR_21, VAR_21, VAR_4, VAR_18->access_mode & 0x3);
  FUNC_1(VAR_21, VAR_21, VAR_5,
    (VAR_18->access_mode >> 2) & 0x7);

  FUNC_1(VAR_21, VAR_21, VAR_10, 0xffffff);
  FUNC_1(VAR_21, VAR_21, VAR_12, VAR_18->xlt);
  FUNC_1(VAR_21, VAR_21, VAR_8, VAR_18->page);

  FUNC_7(&VAR_18->lock);
  VAR_18->pending++;
  FUNC_8(&VAR_18->lock);
  VAR_23 = FUNC_5(VAR_14->mdev, &VAR_20->mmkey,
            &VAR_14->async_ctx, VAR_22, VAR_19,
            VAR_20->out, sizeof(VAR_20->out),
            VAR_11, &VAR_20->cb_work);
  if (VAR_23) {
   FUNC_7(&VAR_18->lock);
   VAR_18->pending--;
   FUNC_8(&VAR_18->lock);
   FUNC_6(VAR_14, "create mkey failed %d\n", VAR_23);
   FUNC_3(VAR_20);
   break;
  }
 }

 FUNC_3(VAR_22);
 return VAR_23;
}
