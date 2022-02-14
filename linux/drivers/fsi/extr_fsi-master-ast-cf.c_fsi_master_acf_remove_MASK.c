
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct fsi_master_acf {int master; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 struct fsi_master_acf* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct fsi_master_acf *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2->dev, &VAR_0);

 FUNC_1(&VAR_2->master);

 return 0;
}
