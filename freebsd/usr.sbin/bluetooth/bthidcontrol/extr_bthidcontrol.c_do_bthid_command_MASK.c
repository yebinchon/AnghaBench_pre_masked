
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bthid_command {int (* handler ) (int ,int,char**) ;char* command; char* description; } ;
typedef int bdaddr_p ;






 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct bthid_command* FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ,int,char**) ;

__attribute__((used)) static int
FUNC_7(bdaddr_p VAR_4, int VAR_5, char **VAR_6)
{
 char *VAR_7 = VAR_6[0];
 struct bthid_command *VAR_8 = ((void*)0);
 int VAR_9, VAR_10;

 VAR_10 = 0;
 if (FUNC_4(VAR_7, "help") == 0) {
  VAR_5 --;
  VAR_6 ++;

  if (VAR_5 <= 0) {
   FUNC_2(VAR_3, "Supported commands:\n");
   FUNC_3(VAR_2);
   FUNC_3(VAR_1);
   FUNC_2(VAR_3, "\nFor more information use " "'help command'\n");


   return (129);
  }

  VAR_10 = 1;
  VAR_7 = VAR_6[0];
 }

 VAR_8 = FUNC_1(VAR_7, VAR_2);
 if (VAR_8 == ((void*)0))
  VAR_8 = FUNC_1(VAR_7, VAR_1);

 if (VAR_8 == ((void*)0)) {
  FUNC_2(VAR_3, "Unknown command: \"%s\"\n", VAR_7);
  return (131);
 }

 if (!VAR_10)
  VAR_9 = (VAR_8->handler)(VAR_4, -- VAR_5, ++ VAR_6);
 else
  VAR_9 = 128;

 switch (VAR_9) {
 case 129:
 case 130:
  break;

 case 131:
  FUNC_2(VAR_3, "Could not execute command \"%s\". %s\n",
    VAR_7, FUNC_5(VAR_0));
  break;

 case 128:
  FUNC_2(VAR_3, "Usage: %s\n%s\n", VAR_8->command, VAR_8->description);
  break;

 default: FUNC_0(0); break;
 }

 return (VAR_9);
}
