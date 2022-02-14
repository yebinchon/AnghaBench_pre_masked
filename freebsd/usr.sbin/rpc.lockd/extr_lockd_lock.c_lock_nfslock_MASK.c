
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int dummy; } ;
typedef enum nfslock_status { ____Placeholder_nfslock_status } nfslock_status ;


 int FUNC_0 (int *,struct file_lock*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct file_lock*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct file_lock*,struct file_lock**) ;

enum nfslock_status
FUNC_4(struct file_lock *VAR_4)
{
 enum nfslock_status VAR_5;
 struct file_lock *VAR_6;

 VAR_6 = ((void*)0);

 FUNC_1("Entering lock_nfslock...\n");

 VAR_5 = FUNC_3(VAR_4,&VAR_6);

 if (VAR_5 == VAR_0 || VAR_5 == VAR_1) {
  FUNC_1("Inserting lock...\n");
  FUNC_2(VAR_4);
  FUNC_0(&VAR_3, VAR_4, VAR_2);
 }

 FUNC_1("Exiting lock_nfslock...\n");

 return (VAR_5);
}
