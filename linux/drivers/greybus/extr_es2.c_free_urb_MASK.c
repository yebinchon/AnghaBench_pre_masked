
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct es2_ap_dev {int* cport_out_urb_busy; int cport_out_urb_lock; struct urb** cport_out_urb; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct urb*) ;

__attribute__((used)) static void FUNC_3(struct es2_ap_dev *VAR_1, struct urb *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;




 FUNC_0(&VAR_1->cport_out_urb_lock, VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  if (VAR_2 == VAR_1->cport_out_urb[VAR_4]) {
   VAR_1->cport_out_urb_busy[VAR_4] = 0;
   VAR_2 = ((void*)0);
   break;
  }
 }
 FUNC_1(&VAR_1->cport_out_urb_lock, VAR_3);


 FUNC_2(VAR_2);
}
