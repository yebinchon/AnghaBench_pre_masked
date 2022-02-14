
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ib_device {int dev; } ;
struct cm_work {TYPE_4__* mad_recv_wc; TYPE_2__* port; } ;
struct TYPE_8__ {TYPE_3__* wc; } ;
struct TYPE_7__ {int pkey_index; } ;
struct TYPE_6__ {int port_num; TYPE_1__* cm_dev; } ;
struct TYPE_5__ {struct ib_device* ib_device; } ;


 int FUNC_0 (int *,char*,int ,int ,int) ;
 int FUNC_1 (struct ib_device*,int ,int ,int *) ;

__attribute__((used)) static u16 FUNC_2(struct cm_work *VAR_0)
{
 struct ib_device *VAR_1 = VAR_0->port->cm_dev->ib_device;
 u8 VAR_2 = VAR_0->port->port_num;
 u16 VAR_3 = VAR_0->mad_recv_wc->wc->pkey_index;
 u16 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_4);
 if (VAR_5) {
  FUNC_0(&VAR_1->dev, "ib_cm: Couldn't retrieve pkey for incoming request (port %d, pkey index %d). %d\n",
         VAR_2, VAR_3, VAR_5);
  return 0;
 }

 return VAR_4;
}
