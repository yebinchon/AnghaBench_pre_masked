
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenbus_device {int dev; } ;
struct xen_drm_front_info {TYPE_1__* xb_dev; } ;
struct TYPE_2__ {int otherend; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 struct xen_drm_front_info* FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct xen_drm_front_info*) ;
 int FUNC_4 (struct xenbus_device*) ;
 unsigned int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (struct xenbus_device*,int ) ;

__attribute__((used)) static int FUNC_8(struct xenbus_device *VAR_3)
{
 struct xen_drm_front_info *VAR_4 = FUNC_1(&VAR_3->dev);
 int VAR_5 = 100;

 FUNC_7(VAR_3, VAR_0);
 while ((FUNC_5(VAR_4->xb_dev->otherend, "state",
         VAR_2) != VAR_1) &&
         --VAR_5)
  FUNC_2(10);

 if (!VAR_5) {
  unsigned int VAR_6;

  VAR_6 = FUNC_5(VAR_4->xb_dev->otherend,
          "state", VAR_2);
  FUNC_0("Backend state is %s while removing driver\n",
     FUNC_6(VAR_6));
 }

 FUNC_3(VAR_4);
 FUNC_4(VAR_3);
 return 0;
}
