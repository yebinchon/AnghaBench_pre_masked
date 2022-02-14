
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_7, struct file *VAR_8)
{
 if (FUNC_2(VAR_7) == VAR_1) {
  if (VAR_3 == 42) {
   FUNC_4(&VAR_4);
   VAR_5 = VAR_2;
   FUNC_0(VAR_0);
   FUNC_5(&VAR_4);
  } else {
   FUNC_6("Unexpected close, not stopping watchdog!\n");
   FUNC_3();
  }
  FUNC_1(0, &VAR_6);
 }

 VAR_3 = 0;

 return 0;
}
