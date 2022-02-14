
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trigger_info {int dummy; } ;
struct thread {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct trigger_info* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct trigger_info*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct trigger_info*,int ) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_5, int VAR_6, int VAR_7, struct thread *VAR_8)
{
 struct trigger_info *VAR_9;


 FUNC_4(&VAR_2);
 VAR_1 = 0;
 while (!FUNC_0(&VAR_4)) {
  VAR_9 = FUNC_1(&VAR_4);
  FUNC_2(&VAR_4, VAR_9, VAR_3);
  FUNC_3(VAR_9, VAR_0);
 }
 FUNC_5(&VAR_2);

 return (0);
}
