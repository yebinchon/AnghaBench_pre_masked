
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uml_net_private {scalar_t__ user; } ;
struct slip_init {int gate_addr; } ;
struct slip_data {int slave; int gate_addr; int slip; struct net_device* dev; int * addr; int name; } ;
struct net_device {int tx_queue_len; int flags; int type; scalar_t__ addr_len; int * header_ops; scalar_t__ hard_header_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 struct uml_net_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2, void *VAR_3)
{
 struct uml_net_private *VAR_4;
 struct slip_data *VAR_5;
 struct slip_init *VAR_6 = VAR_3;

 VAR_4 = FUNC_1(VAR_2);
 VAR_5 = (struct slip_data *) VAR_4->user;

 FUNC_0(VAR_5->name, 0, sizeof(VAR_5->name));
 VAR_5->addr = ((void*)0);
 VAR_5->gate_addr = VAR_6->gate_addr;
 VAR_5->slave = -1;
 VAR_5->dev = VAR_2;

 FUNC_3(&VAR_5->slip);

 VAR_2->hard_header_len = 0;
 VAR_2->header_ops = ((void*)0);
 VAR_2->addr_len = 0;
 VAR_2->type = VAR_0;
 VAR_2->tx_queue_len = 256;
 VAR_2->flags = VAR_1;
 FUNC_2("SLIP backend - SLIP IP = %s\n", VAR_5->gate_addr);
}
