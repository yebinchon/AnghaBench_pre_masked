
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenkbd_info {scalar_t__ page; scalar_t__ mtouch; scalar_t__ ptr; scalar_t__ kbd; } ;
struct xenbus_device {int dev; } ;


 struct xenkbd_info* FUNC_0 (int *) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct xenkbd_info*) ;
 int FUNC_4 (struct xenkbd_info*) ;

__attribute__((used)) static int FUNC_5(struct xenbus_device *VAR_0)
{
 struct xenkbd_info *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_4(VAR_1);
 if (VAR_1->kbd)
  FUNC_2(VAR_1->kbd);
 if (VAR_1->ptr)
  FUNC_2(VAR_1->ptr);
 if (VAR_1->mtouch)
  FUNC_2(VAR_1->mtouch);
 FUNC_1((unsigned long)VAR_1->page);
 FUNC_3(VAR_1);
 return 0;
}
