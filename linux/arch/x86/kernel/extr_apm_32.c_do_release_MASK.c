
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct apm_user* private_data; } ;
struct apm_user {scalar_t__ standbys_pending; scalar_t__ suspends_pending; struct apm_user* next; } ;


 scalar_t__ FUNC_0 (struct apm_user*,char*) ;
 int FUNC_1 (struct apm_user*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_1 ;
 struct apm_user* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_4, struct file *VAR_5)
{
 struct apm_user *VAR_6;

 VAR_6 = VAR_5->private_data;
 if (FUNC_0(VAR_6, "release"))
  return 0;
 VAR_5->private_data = ((void*)0);
 if (VAR_6->standbys_pending > 0) {
  VAR_0 -= VAR_6->standbys_pending;
  if (VAR_0 <= 0)
   FUNC_5();
 }
 if (VAR_6->suspends_pending > 0) {
  VAR_1 -= VAR_6->suspends_pending;
  if (VAR_1 <= 0)
   (void) FUNC_6(1);
 }
 FUNC_3(&VAR_3);
 if (VAR_2 == VAR_6)
  VAR_2 = VAR_6->next;
 else {
  struct apm_user *VAR_7;

  for (VAR_7 = VAR_2;
       (VAR_7 != ((void*)0)) && (VAR_7->next != VAR_6);
       VAR_7 = VAR_7->next)
   ;
  if (VAR_7 == ((void*)0))
   FUNC_2("filp not in user list\n");
  else
   VAR_7->next = VAR_6->next;
 }
 FUNC_4(&VAR_3);
 FUNC_1(VAR_6);
 return 0;
}
