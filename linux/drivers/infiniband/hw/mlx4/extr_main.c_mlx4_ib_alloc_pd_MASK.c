
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_ib_pd {int pdn; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {struct ib_device* device; } ;
struct ib_device {int dummy; } ;
typedef int __u32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ib_udata*,int *,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__* FUNC_3 (struct ib_device*) ;
 struct mlx4_ib_pd* FUNC_4 (struct ib_pd*) ;

__attribute__((used)) static int FUNC_5(struct ib_pd *VAR_1, struct ib_udata *VAR_2)
{
 struct mlx4_ib_pd *VAR_3 = FUNC_4(VAR_1);
 struct ib_device *VAR_4 = VAR_1->device;
 int VAR_5;

 VAR_5 = FUNC_1(FUNC_3(VAR_4)->dev, &VAR_3->pdn);
 if (VAR_5)
  return VAR_5;

 if (VAR_2 && FUNC_0(VAR_2, &VAR_3->pdn, sizeof(__u32))) {
  FUNC_2(FUNC_3(VAR_4)->dev, VAR_3->pdn);
  return -VAR_0;
 }
 return 0;
}
