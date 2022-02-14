
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenkbd_info {int page; } ;
struct xenbus_device {int dev; } ;


 int VAR_0 ;
 struct xenkbd_info* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct xenbus_device*,struct xenkbd_info*) ;
 int FUNC_3 (struct xenkbd_info*) ;

__attribute__((used)) static int FUNC_4(struct xenbus_device *VAR_1)
{
 struct xenkbd_info *VAR_2 = FUNC_0(&VAR_1->dev);

 FUNC_3(VAR_2);
 FUNC_1(VAR_2->page, 0, VAR_0);
 return FUNC_2(VAR_1, VAR_2);
}
