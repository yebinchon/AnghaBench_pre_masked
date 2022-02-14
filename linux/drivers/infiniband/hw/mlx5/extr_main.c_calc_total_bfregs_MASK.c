
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int mdev; } ;
struct mlx5_ib_alloc_ucontext_req_v2 {int total_num_bfregs; scalar_t__ num_low_latency_bfregs; } ;
struct mlx5_bfreg_info {int num_static_sys_pages; int num_dyn_bfregs; int total_num_bfregs; int num_sys_pages; } ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mlx5_ib_dev*,int) ;
 int FUNC_5 (struct mlx5_ib_dev*,char*,char*,char*,int,int,int,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct mlx5_ib_dev *VAR_6, bool VAR_7,
        struct mlx5_ib_alloc_ucontext_req_v2 *VAR_8,
        struct mlx5_bfreg_info *VAR_9)
{
 int VAR_10;
 int VAR_11;
 int VAR_12 = VAR_8->total_num_bfregs;

 if (VAR_8->total_num_bfregs == 0)
  return -VAR_0;

 FUNC_1(VAR_2 % VAR_3);
 FUNC_1(VAR_2 < VAR_3);

 if (VAR_8->total_num_bfregs > VAR_2)
  return -VAR_1;

 VAR_10 = FUNC_4(VAR_6, VAR_7);
 VAR_11 = VAR_10 * VAR_4;

 VAR_8->total_num_bfregs = FUNC_0(VAR_8->total_num_bfregs, VAR_11);
 if (VAR_8->num_low_latency_bfregs > VAR_8->total_num_bfregs - 1)
  return -VAR_0;

 VAR_9->num_static_sys_pages = VAR_8->total_num_bfregs / VAR_11;
 VAR_9->num_dyn_bfregs = FUNC_0(FUNC_3(VAR_10), VAR_11);
 VAR_9->total_num_bfregs = VAR_8->total_num_bfregs + VAR_9->num_dyn_bfregs;
 VAR_9->num_sys_pages = VAR_9->total_num_bfregs / VAR_11;

 FUNC_5(VAR_6, "uar_4k: fw support %s, lib support %s, user requested %d bfregs, allocated %d, total bfregs %d, using %d sys pages\n",
      FUNC_2(VAR_6->mdev, VAR_5) ? "yes" : "no",
      VAR_7 ? "yes" : "no", VAR_12,
      VAR_8->total_num_bfregs, VAR_9->total_num_bfregs,
      VAR_9->num_sys_pages);

 return 0;
}
