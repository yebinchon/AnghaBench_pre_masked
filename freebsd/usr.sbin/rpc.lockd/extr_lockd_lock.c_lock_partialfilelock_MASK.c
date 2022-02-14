
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int blocking; int client_name; } ;
typedef enum partialfilelock_status { ____Placeholder_partialfilelock_status } partialfilelock_status ;
typedef enum nfslock_status { ____Placeholder_nfslock_status } nfslock_status ;
typedef enum hwlock_status { ____Placeholder_hwlock_status } hwlock_status ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct file_lock*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct file_lock*) ;
 int FUNC_3 (struct file_lock*) ;
 int FUNC_4 (struct file_lock*) ;
 int FUNC_5 (struct file_lock*) ;
 int FUNC_6 (int ) ;

enum partialfilelock_status
FUNC_7(struct file_lock *VAR_9)
{
 enum partialfilelock_status VAR_10;
 enum nfslock_status VAR_11;
 enum hwlock_status VAR_12;

 FUNC_1("Entering lock_partialfilelock\n");

 VAR_10 = VAR_0;






 VAR_11 = FUNC_5(VAR_9);

 switch (VAR_11) {
 case 130:
 case 129:




  VAR_12 = FUNC_4(VAR_9);

  switch (VAR_12) {
  case 134:
  case 133:
   FUNC_1("HW GRANTED\n");





   if (VAR_11 == 129) {
    VAR_10 = VAR_2;
   } else {
    VAR_10 = VAR_1;
   }
   FUNC_6(VAR_9->client_name);
   break;
  case 132:
   FUNC_1("HW RESERR\n");
   VAR_10 = VAR_4;
   break;
  case 135:
   FUNC_1("HW DENIED\n");
   VAR_10 = VAR_3;
   break;
  default:
   FUNC_1("Unmatched hwstatus %d\n",VAR_12);
   break;
  }

  if (VAR_10 != VAR_1 &&
      VAR_10 != VAR_2) {

   FUNC_1("Deleting trial NFS lock\n");
   FUNC_2(VAR_9);
  }
  break;
 case 131:
  VAR_10 = VAR_6;
  break;
 case 128:
  VAR_10 = VAR_8;
  break;
 default:
  FUNC_1("Unmatched lnlstatus %d\n");
  VAR_10 = VAR_7;
  break;
 }







 if (VAR_10 == VAR_6 || VAR_10 == VAR_3) {

  if (VAR_9->blocking == 1) {
   if (VAR_10 == VAR_6) {

    FUNC_1("BLOCKING LOCK RECEIVED\n");
    VAR_10 = VAR_5;
    FUNC_0(VAR_9);
    FUNC_3(VAR_9);
   } else {

    FUNC_1("BLOCKING LOCK DENIED IN HARDWARE\n");
    FUNC_3(VAR_9);
   }
  } else {

   FUNC_1("Lock denied.  Non-blocking failure\n");
   FUNC_3(VAR_9);
  }
 }

 FUNC_1("Exiting lock_partialfilelock\n");

 return VAR_10;
}
