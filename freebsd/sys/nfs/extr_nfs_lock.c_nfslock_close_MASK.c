
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct __lock_msg {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct __lock_msg* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct __lock_msg*,int ) ;
 int FUNC_3 (struct __lock_msg*,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_5, int VAR_6, int VAR_7, struct thread *VAR_8)
{
 struct __lock_msg *VAR_9;

 FUNC_4(&VAR_4);
 VAR_2 = 0;
 while (!FUNC_0(&VAR_3)) {
  VAR_9 = FUNC_1(&VAR_3);

  FUNC_2(&VAR_3, VAR_9, VAR_1);
  FUNC_3(VAR_9, VAR_0);
 }
 FUNC_5(&VAR_4);
 return (0);
}
