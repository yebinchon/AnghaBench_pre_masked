
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ users; int lock; int flags; int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct file* VAR_2 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_4, struct file *VAR_5)
{
 FUNC_3(&VAR_3.lock);
 VAR_3.users--;
 if (VAR_5 == VAR_2) {
  FUNC_5("Closing debugger reader.\n");
  VAR_2 = ((void*)0);

  FUNC_5("Closing debugger interface.\n");
  VAR_3.flags |= VAR_0;





  FUNC_7(&VAR_3.wait);
  FUNC_4(&VAR_3.lock);





  FUNC_6(VAR_3.wait, !FUNC_0());





  FUNC_5("Terminating debugger thread.\n");
  FUNC_2();
  FUNC_6(VAR_3.wait, !FUNC_1());
  FUNC_5("Debugger thread terminated.\n");

  FUNC_3(&VAR_3.lock);
  VAR_3.flags &= ~VAR_1;
 }
 if (VAR_3.users == 0) {
  FUNC_5("Debugger interface closed.\n");
  VAR_3.flags &= ~VAR_0;
 }
 FUNC_4(&VAR_3.lock);
 return 0;
}
