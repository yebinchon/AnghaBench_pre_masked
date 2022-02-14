
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_transaction {int dummy; } ;
struct xenbus_device {unsigned long long state; int nodename; } ;
struct xen_vbd {unsigned long long size; int pdevice; } ;
struct xen_blkif {int domid; int be; struct xen_vbd vbd; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,unsigned long long,...) ;
 int FUNC_3 (char*) ;
 unsigned long long FUNC_4 (struct xen_vbd*) ;
 struct xenbus_device* FUNC_5 (int ) ;
 int FUNC_6 (struct xenbus_transaction,int ,char*,char*,unsigned long long) ;
 int FUNC_7 (struct xenbus_transaction,int) ;
 int FUNC_8 (struct xenbus_transaction*) ;

__attribute__((used)) static void FUNC_9(struct xen_blkif *VAR_1)
{
 struct xen_vbd *VAR_2 = &VAR_1->vbd;
 struct xenbus_transaction VAR_3;
 int VAR_4;
 struct xenbus_device *VAR_5 = FUNC_5(VAR_1->be);
 unsigned long long VAR_6 = FUNC_4(VAR_2);

 FUNC_2("VBD Resize: Domid: %d, Device: (%d, %d)\n",
  VAR_1->domid, FUNC_0(VAR_2->pdevice), FUNC_1(VAR_2->pdevice));
 FUNC_2("VBD Resize: new size %llu\n", VAR_6);
 VAR_2->size = VAR_6;
again:
 VAR_4 = FUNC_8(&VAR_3);
 if (VAR_4) {
  FUNC_3("Error starting transaction\n");
  return;
 }
 VAR_4 = FUNC_6(VAR_3, VAR_5->nodename, "sectors", "%llu",
       (unsigned long long)FUNC_4(VAR_2));
 if (VAR_4) {
  FUNC_3("Error writing new size\n");
  goto abort;
 }





 VAR_4 = FUNC_6(VAR_3, VAR_5->nodename, "state", "%d", VAR_5->state);
 if (VAR_4) {
  FUNC_3("Error writing the state\n");
  goto abort;
 }

 VAR_4 = FUNC_7(VAR_3, 0);
 if (VAR_4 == -VAR_0)
  goto again;
 if (VAR_4)
  FUNC_3("Error ending transaction\n");
 return;
abort:
 FUNC_7(VAR_3, 1);
}
