
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_wc {int pkey_index; } ;
struct ib_grh {int dummy; } ;
struct cm_port {int port_num; TYPE_1__* cm_dev; } ;
struct cm_av {int ah_attr; int pkey_index; struct cm_port* port; } ;
struct TYPE_2__ {int ib_device; } ;


 int FUNC_0 (int ,int ,struct ib_wc*,struct ib_grh*,int *) ;

__attribute__((used)) static int FUNC_1(struct cm_port *VAR_0, struct ib_wc *VAR_1,
       struct ib_grh *VAR_2, struct cm_av *VAR_3)
{
 VAR_3->port = VAR_0;
 VAR_3->pkey_index = VAR_1->pkey_index;
 return FUNC_0(VAR_0->cm_dev->ib_device,
           VAR_0->port_num, VAR_1,
           VAR_2, &VAR_3->ah_attr);
}
