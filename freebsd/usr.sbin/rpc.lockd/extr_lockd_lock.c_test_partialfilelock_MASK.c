
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct file_lock const file_lock ;
typedef enum partialfilelock_status { ____Placeholder_partialfilelock_status } partialfilelock_status ;
typedef enum nfslock_status { ____Placeholder_nfslock_status } nfslock_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct file_lock const*) ;
 int FUNC_2 (struct file_lock const*,struct file_lock const**) ;

enum partialfilelock_status
FUNC_3(const struct file_lock *VAR_6,
    struct file_lock **VAR_7)
{
 enum partialfilelock_status VAR_8;
 enum nfslock_status VAR_9;

 FUNC_0("Entering testpartialfilelock...\n");

 VAR_8 = VAR_2;

 VAR_9 = FUNC_2(VAR_6, VAR_7);
 FUNC_0("test_partialfilelock: teststatus %d\n",VAR_9);

 if (VAR_9 == VAR_0 || VAR_9 == VAR_1) {

  VAR_8 = (VAR_9 == VAR_0) ?
      VAR_3 : VAR_4;
  FUNC_0("Dumping locks...\n");
  FUNC_1(VAR_6);
  FUNC_1(*VAR_7);
  FUNC_0("Done dumping locks...\n");
 } else {
  VAR_8 = VAR_5;
  FUNC_0("NFS test denied.\n");
  FUNC_1(VAR_6);
  FUNC_0("Conflicting.\n");
  FUNC_1(*VAR_7);
 }

 FUNC_0("Exiting testpartialfilelock...\n");

 return VAR_8;
}
