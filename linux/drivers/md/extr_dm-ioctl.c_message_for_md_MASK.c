
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct mapped_device*) ;
 int FUNC_2 (struct mapped_device*,unsigned int,char**,char*,unsigned int) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(struct mapped_device *VAR_1, unsigned VAR_2, char **VAR_3,
     char *VAR_4, unsigned VAR_5)
{
 int VAR_6;

 if (**VAR_3 != '@')
  return 2;

 if (!FUNC_3(VAR_3[0], "@cancel_deferred_remove")) {
  if (VAR_2 != 1) {
   FUNC_0("Invalid arguments for @cancel_deferred_remove");
   return -VAR_0;
  }
  return FUNC_1(VAR_1);
 }

 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6 < 2)
  return VAR_6;

 FUNC_0("Unsupported message sent to DM core: %s", VAR_3[0]);
 return -VAR_0;
}
