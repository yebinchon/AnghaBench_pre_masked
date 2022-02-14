
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_mr_cache {void* root; struct mlx5_cache_ent* ent; } ;
struct mlx5_ib_dev {TYPE_2__* mdev; scalar_t__ is_rep; struct mlx5_mr_cache cache; } ;
struct mlx5_cache_ent {char* name; int order; int miss; int cur; } ;
struct dentry {int dummy; } ;
struct TYPE_3__ {void* dbg_root; } ;
struct TYPE_4__ {TYPE_1__ priv; } ;


 int VAR_0 ;
 void* FUNC_0 (char*,void*) ;
 int FUNC_1 (char*,int,struct dentry*,struct mlx5_cache_ent*,int *) ;
 int FUNC_2 (char*,int,struct dentry*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct mlx5_ib_dev *VAR_4)
{
 struct mlx5_mr_cache *VAR_5 = &VAR_4->cache;
 struct mlx5_cache_ent *VAR_6;
 struct dentry *VAR_7;
 int VAR_8;

 if (!VAR_2 || VAR_4->is_rep)
  return;

 VAR_5->root = FUNC_0("mr_cache", VAR_4->mdev->priv.dbg_root);

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_6 = &VAR_5->ent[VAR_8];
  FUNC_3(VAR_6->name, "%d", VAR_6->order);
  VAR_7 = FUNC_0(VAR_6->name, VAR_5->root);
  FUNC_1("size", 0600, VAR_7, VAR_6, &VAR_3);
  FUNC_1("limit", 0600, VAR_7, VAR_6, &VAR_1);
  FUNC_2("cur", 0400, VAR_7, &VAR_6->cur);
  FUNC_2("miss", 0600, VAR_7, &VAR_6->miss);
 }
}
