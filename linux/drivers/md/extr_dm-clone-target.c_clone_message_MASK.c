
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {struct clone* private; } ;
struct clone {int dummy; } ;


 int FUNC_0 (char*,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct clone*) ;
 int FUNC_2 (struct clone*) ;
 int FUNC_3 (struct clone*) ;
 scalar_t__ FUNC_4 (char*,int,unsigned int*) ;
 int FUNC_5 (struct clone*,unsigned int) ;
 int FUNC_6 (struct clone*,unsigned int) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static int FUNC_8(struct dm_target *VAR_1, unsigned int VAR_2, char **VAR_3,
    char *VAR_4, unsigned int VAR_5)
{
 struct clone *VAR_6 = VAR_1->private;
 unsigned int VAR_7;

 if (!VAR_2)
  return -VAR_0;

 if (!FUNC_7(VAR_3[0], "enable_hydration")) {
  FUNC_3(VAR_6);
  return 0;
 }

 if (!FUNC_7(VAR_3[0], "disable_hydration")) {
  FUNC_2(VAR_6);
  return 0;
 }

 if (VAR_2 != 2)
  return -VAR_0;

 if (!FUNC_7(VAR_3[0], "hydration_threshold")) {
  if (FUNC_4(VAR_3[1], 10, &VAR_7))
   return -VAR_0;

  FUNC_6(VAR_6, VAR_7);

  return 0;
 }

 if (!FUNC_7(VAR_3[0], "hydration_batch_size")) {
  if (FUNC_4(VAR_3[1], 10, &VAR_7))
   return -VAR_0;

  FUNC_5(VAR_6, VAR_7);

  return 0;
 }

 FUNC_0("%s: Unsupported message `%s'", FUNC_1(VAR_6), VAR_3[0]);
 return -VAR_0;
}
