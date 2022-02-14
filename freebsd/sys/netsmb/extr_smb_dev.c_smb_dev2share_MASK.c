
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct file* td_fpop; } ;
struct smb_share {int dummy; } ;
struct smb_dev {int refcount; struct smb_share* sd_share; } ;
struct smb_cred {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 struct thread* VAR_2 ;
 int FUNC_2 (void**) ;
 int FUNC_3 (struct file*,struct thread*) ;
 int FUNC_4 (struct thread*,int,int *,struct file**) ;
 int FUNC_5 (struct smb_share*,struct smb_cred*) ;

int
FUNC_6(int VAR_3, int VAR_4, struct smb_cred *VAR_5,
 struct smb_share **VAR_6, struct smb_dev **VAR_7)
{
 struct file *VAR_8, *VAR_9;
 struct smb_dev *VAR_10;
 struct smb_share *VAR_11;
 struct thread *VAR_12;
 int VAR_13;

 VAR_12 = VAR_2;
 VAR_13 = FUNC_4(VAR_12, VAR_3, &VAR_1, &VAR_8);
 if (VAR_13)
  return (VAR_13);
 VAR_9 = VAR_12->td_fpop;
 VAR_12->td_fpop = VAR_8;
 VAR_13 = FUNC_2((void **)&VAR_10);
 VAR_12->td_fpop = VAR_9;
 FUNC_3(VAR_8, VAR_12);
 if (VAR_13 || VAR_10 == ((void*)0))
  return (VAR_13);
 FUNC_0();
 *VAR_7 = VAR_10;
 VAR_11 = VAR_10->sd_share;
 if (VAR_11 == ((void*)0)) {
  FUNC_1();
  return (VAR_0);
 }
 VAR_13 = FUNC_5(VAR_11, VAR_5);
 if (VAR_13 == 0) {
  VAR_10->refcount++;
  *VAR_6 = VAR_11;
 }
 FUNC_1();
 return VAR_13;
}
