
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int dummy; } ;
struct es2_ap_dev {int* cport_out_urb_busy; TYPE_1__* usb_dev; int cport_out_urb_lock; struct urb** cport_out_urb; int * cport_out_urb_cancelled; } ;
typedef int gfp_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct urb* FUNC_3 (int ,int ) ;

__attribute__((used)) static struct urb *FUNC_4(struct es2_ap_dev *VAR_1, gfp_t VAR_2)
{
 struct urb *VAR_3 = ((void*)0);
 unsigned long VAR_4;
 int VAR_5;

 FUNC_1(&VAR_1->cport_out_urb_lock, VAR_4);


 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  if (!VAR_1->cport_out_urb_busy[VAR_5] &&
      !VAR_1->cport_out_urb_cancelled[VAR_5]) {
   VAR_1->cport_out_urb_busy[VAR_5] = 1;
   VAR_3 = VAR_1->cport_out_urb[VAR_5];
   break;
  }
 }
 FUNC_2(&VAR_1->cport_out_urb_lock, VAR_4);
 if (VAR_3)
  return VAR_3;





 FUNC_0(&VAR_1->usb_dev->dev,
  "No free CPort OUT urbs, having to dynamically allocate one!\n");
 return FUNC_3(0, VAR_2);
}
