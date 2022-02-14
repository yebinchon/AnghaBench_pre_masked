
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int dummy; } ;
struct gb_message {struct urb* hcpriv; TYPE_2__* operation; } ;
struct gb_host_device {int dummy; } ;
struct es2_ap_dev {int* cport_out_urb_cancelled; int cport_out_urb_lock; struct urb** cport_out_urb; } ;
struct TYPE_4__ {TYPE_1__* connection; } ;
struct TYPE_3__ {struct gb_host_device* hd; } ;


 int VAR_0 ;
 struct es2_ap_dev* FUNC_0 (struct gb_host_device*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (struct urb*) ;
 int FUNC_6 (struct urb*) ;

__attribute__((used)) static void FUNC_7(struct gb_message *VAR_1)
{
 struct gb_host_device *VAR_2 = VAR_1->operation->connection->hd;
 struct es2_ap_dev *VAR_3 = FUNC_0(VAR_2);
 struct urb *VAR_4;
 int VAR_5;

 FUNC_1();

 FUNC_2(&VAR_3->cport_out_urb_lock);
 VAR_4 = VAR_1->hcpriv;


 FUNC_5(VAR_4);


 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  if (VAR_4 == VAR_3->cport_out_urb[VAR_5]) {
   VAR_3->cport_out_urb_cancelled[VAR_5] = 1;
   break;
  }
 }
 FUNC_3(&VAR_3->cport_out_urb_lock);

 FUNC_6(VAR_4);

 if (VAR_5 < VAR_0) {
  FUNC_2(&VAR_3->cport_out_urb_lock);
  VAR_3->cport_out_urb_cancelled[VAR_5] = 0;
  FUNC_3(&VAR_3->cport_out_urb_lock);
 }

 FUNC_4(VAR_4);
}
