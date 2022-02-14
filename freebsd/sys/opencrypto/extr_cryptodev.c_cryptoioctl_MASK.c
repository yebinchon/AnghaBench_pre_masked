
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int32_t ;
struct thread {int dummy; } ;
struct file {int dummy; } ;
struct fcrypt {int sesn; int csessions; } ;
struct crypt_find_op {int dummy; } ;
struct cdev {int dummy; } ;
typedef scalar_t__ caddr_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (struct crypt_find_op*) ;
 int VAR_6 ;
 int FUNC_3 (struct thread*,struct file**,int*,int ) ;
 int FUNC_4 (struct file*,struct thread*) ;
 int FUNC_5 (struct file*,int,int ,struct fcrypt*,int *) ;
 int FUNC_6 (struct fcrypt*,int ) ;
 struct fcrypt* FUNC_7 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_8(struct cdev *VAR_7, u_long VAR_8, caddr_t VAR_9, int VAR_10, struct thread *VAR_11)
{
 struct file *VAR_12;
 struct fcrypt *VAR_13;
 int VAR_14, VAR_15;

 switch (VAR_8) {
 case 128:
  VAR_13 = FUNC_7(sizeof(struct fcrypt), VAR_5, VAR_4);
  FUNC_0(&VAR_13->csessions);
  VAR_13->sesn = 0;

  VAR_15 = FUNC_3(VAR_11, &VAR_12, &VAR_14, 0);

  if (VAR_15) {
   FUNC_6(VAR_13, VAR_5);
   return (VAR_15);
  }

  FUNC_5(VAR_12, VAR_2 | VAR_3, VAR_0, VAR_13, &VAR_6);
  *(u_int32_t *)VAR_9 = VAR_14;
  FUNC_4(VAR_12, VAR_11);
  break;
 case 129:
  VAR_15 = FUNC_2((struct crypt_find_op *)VAR_9);
  break;
 case 130:
  VAR_15 = FUNC_1((int *)VAR_9);
  break;
 default:
  VAR_15 = VAR_1;
  break;
 }
 return (VAR_15);
}
