
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
struct file {struct apm_user* private_data; } ;
struct apm_user {int suspend_result; int suspend_state; int writer; int suser; } ;



 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static long
FUNC_7(struct file *VAR_11, u_int VAR_12, u_long VAR_13)
{
 struct apm_user *VAR_14 = VAR_11->private_data;
 int VAR_15 = -VAR_1;

 if (!VAR_14->suser || !VAR_14->writer)
  return -VAR_2;

 switch (VAR_12) {
 case 130:
  FUNC_2(&VAR_9);

  VAR_14->suspend_result = -VAR_0;

  switch (VAR_14->suspend_state) {
  case 128:





   VAR_14->suspend_state = VAR_5;
   FUNC_0(&VAR_10);
   FUNC_3(&VAR_9);





   FUNC_6(&VAR_8);
   while (FUNC_5(VAR_8,
     VAR_14->suspend_state != VAR_5))
    FUNC_1(10);
   break;
  case 129:
   VAR_14->suspend_result = -VAR_3;
   FUNC_3(&VAR_9);
   break;
  default:
   VAR_14->suspend_state = VAR_7;
   FUNC_3(&VAR_9);






   VAR_14->suspend_result = FUNC_4(VAR_4);
  }

  FUNC_2(&VAR_9);
  VAR_15 = VAR_14->suspend_result;
  VAR_14->suspend_state = VAR_6;
  FUNC_3(&VAR_9);
  break;
 }

 return VAR_15;
}
