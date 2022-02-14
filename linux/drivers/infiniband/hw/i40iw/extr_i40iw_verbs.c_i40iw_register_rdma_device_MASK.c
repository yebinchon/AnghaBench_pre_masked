
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_ib_device {int ibdev; } ;
struct i40iw_device {struct i40iw_ib_device* iwibdev; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct i40iw_ib_device* FUNC_0 (struct i40iw_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int *) ;

int FUNC_5(struct i40iw_device *VAR_2)
{
 int VAR_3;
 struct i40iw_ib_device *VAR_4;

 VAR_2->iwibdev = FUNC_0(VAR_2);
 if (!VAR_2->iwibdev)
  return -VAR_0;
 VAR_4 = VAR_2->iwibdev;
 FUNC_4(&VAR_4->ibdev, &VAR_1);
 VAR_3 = FUNC_2(&VAR_4->ibdev, VAR_2->netdev, 1);
 if (VAR_3)
  goto error;

 VAR_3 = FUNC_3(&VAR_4->ibdev, "i40iw%d");
 if (VAR_3)
  goto error;

 return 0;
error:
 FUNC_1(&VAR_2->iwibdev->ibdev);
 return VAR_3;
}
