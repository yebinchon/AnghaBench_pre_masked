
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uml_net_private {scalar_t__ user; } ;
struct TYPE_2__ {int ** argv; } ;
struct slirp_init {TYPE_1__ argw; } ;
struct slirp_data {int pid; int slave; TYPE_1__ argw; int slip; struct net_device* dev; } ;
struct net_device {int tx_queue_len; int flags; int type; scalar_t__ addr_len; int * header_ops; scalar_t__ hard_header_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct uml_net_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct net_device *VAR_2, void *VAR_3)
{
 struct uml_net_private *VAR_4;
 struct slirp_data *VAR_5;
 struct slirp_init *VAR_6 = VAR_3;
 int VAR_7;

 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = (struct slirp_data *) VAR_4->user;

 VAR_5->argw = VAR_6->argw;
 VAR_5->pid = -1;
 VAR_5->slave = -1;
 VAR_5->dev = VAR_2;

 FUNC_2(&VAR_5->slip);

 VAR_2->hard_header_len = 0;
 VAR_2->header_ops = ((void*)0);
 VAR_2->addr_len = 0;
 VAR_2->type = VAR_0;
 VAR_2->tx_queue_len = 256;
 VAR_2->flags = VAR_1;
 FUNC_1("SLIRP backend - command line:");
 for (VAR_7 = 0; VAR_5->argw.argv[VAR_7] != ((void*)0); VAR_7++)
  FUNC_1(" '%s'",VAR_5->argw.argv[VAR_7]);
 FUNC_1("\n");
}
