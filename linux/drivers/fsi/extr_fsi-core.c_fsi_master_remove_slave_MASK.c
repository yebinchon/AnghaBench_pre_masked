
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_slave {int dev; int cdev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct device*,int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct device*) ;
 struct fsi_slave* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, void *VAR_2)
{
 struct fsi_slave *VAR_3 = FUNC_3(VAR_1);

 FUNC_1(VAR_1, ((void*)0), VAR_0);
 FUNC_0(&VAR_3->cdev, &VAR_3->dev);
 FUNC_2(VAR_1);
 return 0;
}
