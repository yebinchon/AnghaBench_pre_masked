
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct io_context {int ioprio; } ;
struct cred {int uid; int euid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cred* FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int ) ;
 struct cred* FUNC_2 () ;
 struct io_context* FUNC_3 (struct task_struct*,int ,int ) ;
 int FUNC_4 (struct io_context*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct task_struct*,int) ;
 int FUNC_8 (int ,int ) ;

int FUNC_9(struct task_struct *VAR_4, int VAR_5)
{
 int VAR_6;
 struct io_context *VAR_7;
 const struct cred *VAR_8 = FUNC_2(), *VAR_9;

 FUNC_5();
 VAR_9 = FUNC_0(VAR_4);
 if (!FUNC_8(VAR_9->uid, VAR_8->euid) &&
     !FUNC_8(VAR_9->uid, VAR_8->uid) && !FUNC_1(VAR_0)) {
  FUNC_6();
  return -VAR_1;
 }
 FUNC_6();

 VAR_6 = FUNC_7(VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_7 = FUNC_3(VAR_4, VAR_2, VAR_3);
 if (VAR_7) {
  VAR_7->ioprio = VAR_5;
  FUNC_4(VAR_7);
 }

 return VAR_6;
}
