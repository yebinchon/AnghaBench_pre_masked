
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_mc_device {int dev; scalar_t__ resource; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct fsl_mc_device*) ;
 int FUNC_2 (struct fsl_mc_device*) ;

__attribute__((used)) static int FUNC_3(struct fsl_mc_device *VAR_1)
{
 int VAR_2;

 if (!FUNC_1(VAR_1))
  return -VAR_0;

 if (VAR_1->resource) {
  VAR_2 = FUNC_2(VAR_1);
  if (VAR_2 < 0)
   return VAR_2;
 }

 FUNC_0(&VAR_1->dev,
  "Allocatable fsl-mc device unbound from fsl_mc_allocator driver");
 return 0;
}
