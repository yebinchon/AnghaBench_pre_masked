
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenkbd_info {int gref; int irq; int page; } ;
struct xenbus_transaction {int dummy; } ;
struct xenbus_device {int nodename; int devicetype; int otherend_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int ,int ,struct xenkbd_info*) ;
 int FUNC_1 (int,int ,unsigned long) ;
 int FUNC_2 (int ,int,int ) ;
 int VAR_5 ;
 int FUNC_3 (int,struct xenkbd_info*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct xenbus_device*,int*) ;
 int FUNC_6 (struct xenbus_device*,int,char*) ;
 int FUNC_7 (struct xenbus_device*,int) ;
 int FUNC_8 (struct xenbus_transaction,int ,int ,char*,int) ;
 int FUNC_9 (struct xenbus_device*,int ) ;
 int FUNC_10 (struct xenbus_transaction,int) ;
 int FUNC_11 (struct xenbus_transaction*) ;

__attribute__((used)) static int FUNC_12(struct xenbus_device *VAR_6,
      struct xenkbd_info *VAR_7)
{
 int VAR_8, VAR_9;
 struct xenbus_transaction VAR_10;

 VAR_8 = FUNC_2(VAR_6->otherend_id,
                                   FUNC_4(VAR_7->page), 0);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_7->gref = VAR_8;

 VAR_8 = FUNC_5(VAR_6, &VAR_9);
 if (VAR_8)
  goto error_grant;
 VAR_8 = FUNC_0(VAR_9, VAR_5,
     0, VAR_6->devicetype, VAR_7);
 if (VAR_8 < 0) {
  FUNC_6(VAR_6, VAR_8, "bind_evtchn_to_irqhandler");
  goto error_evtchan;
 }
 VAR_7->irq = VAR_8;

 again:
 VAR_8 = FUNC_11(&VAR_10);
 if (VAR_8) {
  FUNC_6(VAR_6, VAR_8, "starting transaction");
  goto error_irqh;
 }
 VAR_8 = FUNC_8(VAR_10, VAR_6->nodename, VAR_3, "%lu",
       FUNC_4(VAR_7->page));
 if (VAR_8)
  goto error_xenbus;
 VAR_8 = FUNC_8(VAR_10, VAR_6->nodename, VAR_2,
       "%u", VAR_7->gref);
 if (VAR_8)
  goto error_xenbus;
 VAR_8 = FUNC_8(VAR_10, VAR_6->nodename, VAR_1, "%u",
       VAR_9);
 if (VAR_8)
  goto error_xenbus;
 VAR_8 = FUNC_10(VAR_10, 0);
 if (VAR_8) {
  if (VAR_8 == -VAR_0)
   goto again;
  FUNC_6(VAR_6, VAR_8, "completing transaction");
  goto error_irqh;
 }

 FUNC_9(VAR_6, VAR_4);
 return 0;

 error_xenbus:
 FUNC_10(VAR_10, 1);
 FUNC_6(VAR_6, VAR_8, "writing xenstore");
 error_irqh:
 FUNC_3(VAR_7->irq, VAR_7);
 VAR_7->irq = -1;
 error_evtchan:
 FUNC_7(VAR_6, VAR_9);
 error_grant:
 FUNC_1(VAR_7->gref, 0, 0UL);
 VAR_7->gref = -1;
 return VAR_8;
}
