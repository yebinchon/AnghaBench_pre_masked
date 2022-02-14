
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usnic_ib_ucontext {int link; int qp_grp_list; } ;
struct usnic_ib_dev {int usdev_lock; int ctx_list; } ;
struct ib_udata {int dummy; } ;
struct ib_ucontext {struct ib_device* device; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct usnic_ib_ucontext* FUNC_4 (struct ib_ucontext*) ;
 struct usnic_ib_dev* FUNC_5 (struct ib_device*) ;
 int FUNC_6 (char*) ;

int FUNC_7(struct ib_ucontext *VAR_0, struct ib_udata *VAR_1)
{
 struct ib_device *VAR_2 = VAR_0->device;
 struct usnic_ib_ucontext *VAR_3 = FUNC_4(VAR_0);
 struct usnic_ib_dev *VAR_4 = FUNC_5(VAR_2);
 FUNC_6("\n");

 FUNC_0(&VAR_3->qp_grp_list);
 FUNC_2(&VAR_4->usdev_lock);
 FUNC_1(&VAR_3->link, &VAR_4->ctx_list);
 FUNC_3(&VAR_4->usdev_lock);

 return 0;
}
