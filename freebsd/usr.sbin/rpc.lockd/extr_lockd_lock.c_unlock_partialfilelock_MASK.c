
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct file_lock {int client_name; } const file_lock ;
typedef enum partialfilelock_status { ____Placeholder_partialfilelock_status } partialfilelock_status ;
typedef enum nfslock_status { ____Placeholder_nfslock_status } nfslock_status ;
typedef enum hwlock_status { ____Placeholder_hwlock_status } hwlock_status ;




 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct file_lock const*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct file_lock const*) ;
 int FUNC_3 (struct file_lock const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct file_lock const*) ;
 int FUNC_7 (struct file_lock const*,struct file_lock const**,struct file_lock const**,struct file_lock const**) ;
 int FUNC_8 (int ) ;

enum partialfilelock_status
FUNC_9(const struct file_lock *VAR_6)
{
 struct file_lock *VAR_7,*VAR_8,*VAR_9,*VAR_10;
 enum partialfilelock_status VAR_11;
 enum nfslock_status VAR_12;
 enum hwlock_status VAR_13, VAR_14;

 FUNC_1("Entering unlock_partialfilelock\n");

 VAR_10 = ((void*)0);
 VAR_7 = ((void*)0);
 VAR_8 = ((void*)0);
 VAR_9 = ((void*)0);
 VAR_11 = VAR_2;
 do {
  FUNC_1("Value of releasedfl: %p\n",VAR_9);

  VAR_12 = FUNC_7(VAR_6, &VAR_9, &VAR_7, &VAR_8);
  FUNC_1("Value of releasedfl: %p\n",VAR_9);



  if (VAR_7 != ((void*)0)) {
   VAR_14 = FUNC_3(VAR_7);
   if (VAR_14 != 130 &&
       VAR_14 != VAR_0) {
    FUNC_1("HW duplicate lock failure for left split\n");
   }
   FUNC_4(VAR_7->client_name);
  }

  if (VAR_8 != ((void*)0)) {
   VAR_14 = FUNC_3(VAR_8);
   if (VAR_14 != 130 &&
       VAR_14 != VAR_0) {
    FUNC_1("HW duplicate lock failure for right split\n");
   }
   FUNC_4(VAR_8->client_name);
  }

  switch (VAR_12) {
  case 128:

   FUNC_1("NFS unlock granted.  Attempting hardware unlock\n");


   VAR_13 = FUNC_6(VAR_6);
   FUNC_1("HW unlock returned with code %d\n",VAR_13);

   switch (VAR_13) {
   case 130:
    FUNC_1("HW unlock granted\n");
    FUNC_8(VAR_9->client_name);
    VAR_11 = VAR_3;
    break;
   case 131:

    FUNC_1("HW unlock denied no lock\n");
    VAR_11 = VAR_4;

    VAR_12 = VAR_1;
    break;
   default:
    FUNC_1("HW unlock failed\n");
    VAR_11 = VAR_4;

    VAR_12 = VAR_1;
    break;
   }

   FUNC_1("Exiting with status retval: %d\n",VAR_11);

   FUNC_5();
   break;
  case 129:
   VAR_11 = VAR_3;
   FUNC_1("All locks cleaned out\n");
   break;
  default:
   VAR_11 = VAR_5;
   FUNC_1("NFS unlock failure\n");
   FUNC_2(VAR_6);
   break;
  }

  if (VAR_9 != ((void*)0)) {
   if (VAR_6 == VAR_9) {





    FUNC_1("Attempt to unlock self\n");
    VAR_10 = VAR_9;
   } else {







    FUNC_0(VAR_9);
    VAR_9 = ((void*)0);
   }
  }

 } while (VAR_12 == 128);

 if (VAR_10 != ((void*)0)) {




  FUNC_1("WARNING!  Destroying incoming lock pointer\n");
  FUNC_0(VAR_10);
 }

 FUNC_1("Exiting unlock_partialfilelock\n");

 return VAR_11;
}
