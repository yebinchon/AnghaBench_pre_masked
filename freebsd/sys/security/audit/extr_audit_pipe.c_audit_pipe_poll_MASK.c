
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct audit_pipe {int ap_selinfo; int ap_queue; } ;


 int FUNC_0 (struct audit_pipe*) ;
 int FUNC_1 (struct audit_pipe*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (void**) ;
 int FUNC_4 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct audit_pipe *VAR_5;
 int VAR_6, VAR_7;

 VAR_7 = 0;
 VAR_6 = FUNC_3((void **)&VAR_5);
 if (VAR_6 != 0)
  return (VAR_6);
 if (VAR_3 & (VAR_0 | VAR_1)) {
  FUNC_0(VAR_5);
  if (FUNC_2(&VAR_5->ap_queue) != ((void*)0))
   VAR_7 |= VAR_3 & (VAR_0 | VAR_1);
  else
   FUNC_4(VAR_4, &VAR_5->ap_selinfo);
  FUNC_1(VAR_5);
 }
 return (VAR_7);
}
