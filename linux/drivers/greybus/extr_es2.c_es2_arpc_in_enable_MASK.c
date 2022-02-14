
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int dummy; } ;
struct es2_ap_dev {struct urb** arpc_urb; TYPE_1__* usb_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct urb*) ;
 int FUNC_2 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_3(struct es2_ap_dev *VAR_2)
{
 struct urb *VAR_3;
 int VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
  VAR_3 = VAR_2->arpc_urb[VAR_5];

  VAR_4 = FUNC_2(VAR_3, VAR_0);
  if (VAR_4) {
   FUNC_0(&VAR_2->usb_dev->dev,
    "failed to submit arpc in-urb: %d\n", VAR_4);
   goto err_kill_urbs;
  }
 }

 return 0;

err_kill_urbs:
 for (--VAR_5; VAR_5 >= 0; --VAR_5) {
  VAR_3 = VAR_2->arpc_urb[VAR_5];
  FUNC_1(VAR_3);
 }

 return VAR_4;
}
