
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int state; int dev; } ;
struct xen_drm_front_info {int dummy; } ;
typedef enum xenbus_state { ____Placeholder_xenbus_state } xenbus_state ;


 int FUNC_0 (char*,int ,int ) ;
 struct xen_drm_front_info* FUNC_1 (int *) ;
 int FUNC_2 (struct xen_drm_front_info*) ;
 int FUNC_3 (struct xen_drm_front_info*) ;
 int FUNC_4 (struct xen_drm_front_info*) ;
 int FUNC_5 (struct xenbus_device*,int,char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct xenbus_device*,int const) ;

__attribute__((used)) static void FUNC_8(struct xenbus_device *VAR_0,
         enum xenbus_state VAR_1)
{
 struct xen_drm_front_info *VAR_2 = FUNC_1(&VAR_0->dev);
 int VAR_3;

 FUNC_0("Backend state is %s, front is %s\n",
    FUNC_6(VAR_1),
    FUNC_6(VAR_0->state));

 switch (VAR_1) {
 case 129:

 case 130:

 case 132:
  break;

 case 131:
  if (VAR_0->state == 129)
   break;


  FUNC_3(VAR_2);
  break;

 case 133:
  if (VAR_0->state == 129)
   break;


  FUNC_3(VAR_2);
  if (VAR_0->state != 131)
   break;

  VAR_3 = FUNC_4(VAR_2);
  if (VAR_3 < 0)
   FUNC_5(VAR_0, VAR_3, "initializing frontend");
  else
   FUNC_7(VAR_0, 132);
  break;

 case 134:
  if (VAR_0->state != 132)
   break;

  VAR_3 = FUNC_2(VAR_2);
  if (VAR_3 < 0) {
   FUNC_3(VAR_2);
   FUNC_5(VAR_0, VAR_3, "connecting backend");
  } else {
   FUNC_7(VAR_0, 134);
  }
  break;

 case 135:





  break;

 case 128:

 case 136:
  if (VAR_0->state == 136)
   break;

  FUNC_3(VAR_2);
  break;
 }
}
