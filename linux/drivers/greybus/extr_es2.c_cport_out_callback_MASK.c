
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {struct gb_message* context; } ;
struct gb_message {int * hcpriv; int header; TYPE_2__* operation; } ;
struct gb_host_device {int dummy; } ;
struct es2_ap_dev {int cport_out_urb_lock; } ;
struct TYPE_4__ {TYPE_1__* connection; } ;
struct TYPE_3__ {struct gb_host_device* hd; } ;


 int FUNC_0 (struct urb*) ;
 int FUNC_1 (struct es2_ap_dev*,struct urb*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct gb_host_device*,struct gb_message*,int) ;
 struct es2_ap_dev* FUNC_4 (struct gb_host_device*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct urb *VAR_0)
{
 struct gb_message *VAR_1 = VAR_0->context;
 struct gb_host_device *VAR_2 = VAR_1->operation->connection->hd;
 struct es2_ap_dev *VAR_3 = FUNC_4(VAR_2);
 int VAR_4 = FUNC_0(VAR_0);
 unsigned long VAR_5;

 FUNC_2(VAR_1->header);

 FUNC_5(&VAR_3->cport_out_urb_lock, VAR_5);
 VAR_1->hcpriv = ((void*)0);
 FUNC_6(&VAR_3->cport_out_urb_lock, VAR_5);





 FUNC_3(VAR_2, VAR_1, VAR_4);

 FUNC_1(VAR_3, VAR_0);
}
