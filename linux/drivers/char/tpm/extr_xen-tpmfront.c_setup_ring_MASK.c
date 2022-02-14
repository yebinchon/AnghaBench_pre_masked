
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_transaction {int dummy; } ;
struct xenbus_device {int nodename; } ;
struct tpm_private {int irq; int evtchn; int ring_ref; void* shr; } ;
typedef int grant_ref_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,char*,struct tpm_private*) ;
 int VAR_5 ;
 int FUNC_2 (struct xenbus_device*,int *) ;
 int FUNC_3 (struct xenbus_device*,int,char*,char const*) ;
 int FUNC_4 (struct xenbus_device*,int,char*) ;
 int FUNC_5 (struct xenbus_device*,void*,int,int *) ;
 int FUNC_6 (struct xenbus_transaction,int ,char*,char*,...) ;
 int FUNC_7 (struct xenbus_device*,int ) ;
 int FUNC_8 (struct xenbus_transaction,int) ;
 int FUNC_9 (struct xenbus_transaction*) ;

__attribute__((used)) static int FUNC_10(struct xenbus_device *VAR_6, struct tpm_private *VAR_7)
{
 struct xenbus_transaction VAR_8;
 const char *VAR_9 = ((void*)0);
 int VAR_10;
 grant_ref_t VAR_11;

 VAR_7->shr = (void *)FUNC_0(VAR_2|VAR_4);
 if (!VAR_7->shr) {
  FUNC_4(VAR_6, -VAR_1, "allocating shared ring");
  return -VAR_1;
 }

 VAR_10 = FUNC_5(VAR_6, VAR_7->shr, 1, &VAR_11);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_7->ring_ref = VAR_11;

 VAR_10 = FUNC_2(VAR_6, &VAR_7->evtchn);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_1(VAR_7->evtchn, VAR_5, 0,
           "tpmif", VAR_7);
 if (VAR_10 <= 0) {
  FUNC_4(VAR_6, VAR_10, "allocating TPM irq");
  return VAR_10;
 }
 VAR_7->irq = VAR_10;

 again:
 VAR_10 = FUNC_9(&VAR_8);
 if (VAR_10) {
  FUNC_4(VAR_6, VAR_10, "starting transaction");
  return VAR_10;
 }

 VAR_10 = FUNC_6(VAR_8, VAR_6->nodename,
   "ring-ref", "%u", VAR_7->ring_ref);
 if (VAR_10) {
  VAR_9 = "writing ring-ref";
  goto abort_transaction;
 }

 VAR_10 = FUNC_6(VAR_8, VAR_6->nodename, "event-channel", "%u",
   VAR_7->evtchn);
 if (VAR_10) {
  VAR_9 = "writing event-channel";
  goto abort_transaction;
 }

 VAR_10 = FUNC_6(VAR_8, VAR_6->nodename, "feature-protocol-v2", "1");
 if (VAR_10) {
  VAR_9 = "writing feature-protocol-v2";
  goto abort_transaction;
 }

 VAR_10 = FUNC_8(VAR_8, 0);
 if (VAR_10 == -VAR_0)
  goto again;
 if (VAR_10) {
  FUNC_4(VAR_6, VAR_10, "completing transaction");
  return VAR_10;
 }

 FUNC_7(VAR_6, VAR_3);

 return 0;

 abort_transaction:
 FUNC_8(VAR_8, 1);
 if (VAR_9)
  FUNC_3(VAR_6, VAR_10, "%s", VAR_9);

 return VAR_10;
}
