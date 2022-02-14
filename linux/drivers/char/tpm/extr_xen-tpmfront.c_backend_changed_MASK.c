
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int const state; int dev; int otherend; } ;
typedef enum xenbus_state { ____Placeholder_xenbus_state } xenbus_state ;


 int VAR_0 ;




 int FUNC_0 (int *) ;
 int FUNC_1 (struct xenbus_device*,int ,char*) ;
 int FUNC_2 (struct xenbus_device*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (struct xenbus_device*,int const) ;

__attribute__((used)) static void FUNC_5(struct xenbus_device *VAR_1,
  enum xenbus_state VAR_2)
{
 switch (VAR_2) {
 case 128:
 case 129:
  if (VAR_1->state == 129)
   break;

  if (!FUNC_3(VAR_1->otherend, "feature-protocol-v2",
       0)) {
   FUNC_1(VAR_1, -VAR_0,
     "vTPM protocol 2 required");
   return;
  }
  FUNC_4(VAR_1, 129);
  break;

 case 130:
 case 131:
  FUNC_0(&VAR_1->dev);
  FUNC_2(VAR_1);
  break;
 default:
  break;
 }
}
