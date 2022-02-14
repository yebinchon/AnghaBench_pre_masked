
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int dummy; } ;
struct trigger_info {int trigger; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 struct trigger_info* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct trigger_info*,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct trigger_info*,int ) ;
 int VAR_4 ;
 int FUNC_4 (int *,int *,int,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 int FUNC_7 (int *,int,struct uio*) ;

__attribute__((used)) static int
FUNC_8(struct cdev *VAR_6, struct uio *VAR_7, int VAR_8)
{
 int VAR_9 = 0;
 struct trigger_info *VAR_10 = ((void*)0);

 FUNC_5(&VAR_3);
 while (FUNC_0(&VAR_5)) {
  VAR_9 = FUNC_4(&VAR_5, &VAR_3,
      VAR_2 | VAR_1, "auditd", 0);
  if (VAR_9)
   break;
 }
 if (!VAR_9) {
  VAR_10 = FUNC_1(&VAR_5);
  FUNC_2(&VAR_5, VAR_10, VAR_4);
 }
 FUNC_6(&VAR_3);
 if (!VAR_9) {
  VAR_9 = FUNC_7(&VAR_10->trigger, sizeof(VAR_10->trigger), VAR_7);
  FUNC_3(VAR_10, VAR_0);
 }
 return (VAR_9);
}
