
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {scalar_t__ blocking; } ;


 int FUNC_0 (int *,struct file_lock*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct file_lock*) ;
 int VAR_1 ;

void
FUNC_3(struct file_lock *VAR_2)
{
 FUNC_1("Entering add_blockingfilelock\n");
 if (FUNC_2(VAR_2)) {
  FUNC_1("Exiting add_blockingfilelock: already blocked\n");
  return;
 }






 VAR_2->blocking = 0;
 FUNC_0(&VAR_0, VAR_2, VAR_1);

 FUNC_1("Exiting add_blockingfilelock: added blocked lock\n");
}
