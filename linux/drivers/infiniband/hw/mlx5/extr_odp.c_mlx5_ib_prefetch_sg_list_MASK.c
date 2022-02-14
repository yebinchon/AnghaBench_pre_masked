
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct mlx5_ib_dev {int dummy; } ;
struct ib_sge {int length; int addr; int lkey; } ;
struct ib_pd {int device; } ;


 int FUNC_0 (struct mlx5_ib_dev*,struct ib_pd*,int ,int ,int ,int*,int *,size_t) ;
 struct mlx5_ib_dev* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ib_pd *VAR_0, u32 VAR_1,
        struct ib_sge *VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 int VAR_5 = 0;
 struct mlx5_ib_dev *VAR_6 = FUNC_1(VAR_0->device);

 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
  struct ib_sge *VAR_7 = &VAR_2[VAR_4];
  int VAR_8 = 0;

  VAR_5 = FUNC_0(VAR_6, VAR_0, VAR_7->lkey, VAR_7->addr,
          VAR_7->length,
          &VAR_8, ((void*)0),
          VAR_1);
  if (VAR_5 < 0)
   break;
 }

 return VAR_5 < 0 ? VAR_5 : 0;
}
