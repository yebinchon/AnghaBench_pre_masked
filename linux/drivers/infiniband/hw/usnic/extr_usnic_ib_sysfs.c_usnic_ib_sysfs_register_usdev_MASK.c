
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;
struct usnic_ib_dev {TYPE_2__ ib_dev; int * qpn_kobj; } ;


 int VAR_0 ;
 int * FUNC_0 (char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct usnic_ib_dev *VAR_1)
{

 FUNC_1(&VAR_1->ib_dev.dev.kobj);
 VAR_1->qpn_kobj = FUNC_0("qpn",
   &VAR_1->ib_dev.dev.kobj);
 if (VAR_1->qpn_kobj == ((void*)0)) {
  FUNC_2(&VAR_1->ib_dev.dev.kobj);
  return -VAR_0;
 }

 return 0;
}
