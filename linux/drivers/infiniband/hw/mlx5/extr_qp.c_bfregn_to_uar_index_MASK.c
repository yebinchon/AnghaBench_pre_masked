
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct mlx5_ib_dev {int dummy; } ;
struct mlx5_bfreg_info {unsigned int num_sys_pages; unsigned int num_dyn_bfregs; scalar_t__* sys_pages; scalar_t__ num_static_sys_pages; int lib_uar_4k; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (struct mlx5_ib_dev*,int ) ;
 int FUNC_1 (struct mlx5_ib_dev*,char*) ;

int FUNC_2(struct mlx5_ib_dev *VAR_3,
   struct mlx5_bfreg_info *VAR_4, u32 VAR_5,
   bool VAR_6)
{
 unsigned int VAR_7;
 u32 VAR_8;
 u32 VAR_9;

 VAR_7 = FUNC_0(VAR_3, VAR_4->lib_uar_4k) *
    VAR_2;
 VAR_8 = VAR_5 / VAR_7;

 if (VAR_6) {
  VAR_8 += VAR_4->num_static_sys_pages;

  if (VAR_8 >= VAR_4->num_sys_pages)
   return -VAR_0;

  if (VAR_5 > VAR_4->num_dyn_bfregs ||
      VAR_4->sys_pages[VAR_8] == VAR_1) {
   FUNC_1(VAR_3, "Invalid dynamic uar index\n");
   return -VAR_0;
  }
 }

 VAR_9 = VAR_5 % VAR_7 / VAR_2;
 return VAR_4->sys_pages[VAR_8] + VAR_9;
}
