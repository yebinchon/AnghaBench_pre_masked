
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int send_flags; int opcode; } ;
struct mlx5_umr_wr {int access_flags; TYPE_2__ wr; struct ib_pd* pd; int mkey; } ;
struct TYPE_3__ {int key; } ;
struct mlx5_ib_mr {TYPE_1__ mmkey; } ;
struct mlx5_ib_dev {int dummy; } ;
struct ib_pd {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mlx5_ib_dev*,struct mlx5_umr_wr*) ;
 struct mlx5_ib_dev* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ib_pd *VAR_5, struct mlx5_ib_mr *VAR_6,
       int VAR_7, int VAR_8)
{
 struct mlx5_ib_dev *VAR_9 = FUNC_1(VAR_5->device);
 struct mlx5_umr_wr VAR_10 = {};
 int VAR_11;

 VAR_10.wr.send_flags = VAR_2;

 VAR_10.wr.opcode = VAR_4;
 VAR_10.mkey = VAR_6->mmkey.key;

 if (VAR_8 & VAR_1 || VAR_8 & VAR_0) {
  VAR_10.pd = VAR_5;
  VAR_10.access_flags = VAR_7;
  VAR_10.wr.send_flags |= VAR_3;
 }

 VAR_11 = FUNC_0(VAR_9, &VAR_10);

 return VAR_11;
}
