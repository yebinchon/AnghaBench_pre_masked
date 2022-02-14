
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_command {int (* handler ) (int,int,char**) ;char* command; char* description; } ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 struct hci_command* FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (int,int,char**) ;

__attribute__((used)) static int
FUNC_9(char const *VAR_9, int VAR_10, char **VAR_11)
{
 char *VAR_12 = VAR_11[0];
 struct hci_command *VAR_13 = ((void*)0);
 int VAR_14, VAR_15, VAR_16;

 VAR_16 = 0;
 if (FUNC_6(VAR_12, "help") == 0) {
  VAR_10 --;
  VAR_11 ++;

  if (VAR_10 <= 0) {
   FUNC_3(VAR_8, "Supported commands:\n");
   FUNC_4(VAR_4);
   FUNC_4(VAR_5);
   FUNC_4(VAR_1);
   FUNC_4(VAR_2);
   FUNC_4(VAR_7);
   FUNC_4(VAR_3);
   FUNC_4(VAR_6);
   FUNC_3(VAR_8, "\nFor more information use " "'help command'\n");


   return (129);
  }

  VAR_16 = 1;
  VAR_12 = VAR_11[0];
 }

 VAR_13 = FUNC_2(VAR_12, VAR_4);
 if (VAR_13 != ((void*)0))
  goto execute;

 VAR_13 = FUNC_2(VAR_12, VAR_5);
 if (VAR_13 != ((void*)0))
  goto execute;

 VAR_13 = FUNC_2(VAR_12, VAR_1);
 if (VAR_13 != ((void*)0))
  goto execute;

 VAR_13 = FUNC_2(VAR_12, VAR_2);
 if (VAR_13 != ((void*)0))
  goto execute;

 VAR_13 = FUNC_2(VAR_12, VAR_7);
 if (VAR_13 != ((void*)0))
  goto execute;

 VAR_13 = FUNC_2(VAR_12, VAR_3);
 if (VAR_13 != ((void*)0))
  goto execute;


 VAR_13 = FUNC_2(VAR_12, VAR_6);
 if (VAR_13 == ((void*)0)) {
  FUNC_3(VAR_8, "Unknown command: \"%s\"\n", VAR_12);
  return (131);
 }
execute:
 if (!VAR_16) {
  VAR_14 = FUNC_5(VAR_9);
  VAR_15 = (VAR_13->handler)(VAR_14, -- VAR_10, ++ VAR_11);
  FUNC_1(VAR_14);
 } else
  VAR_15 = 128;

 switch (VAR_15) {
 case 129:
 case 130:
  break;

 case 131:
  FUNC_3(VAR_8, "Could not execute command \"%s\". %s\n",
   VAR_12, FUNC_7(VAR_0));
  break;

 case 128:
  FUNC_3(VAR_8, "Usage: %s\n%s\n", VAR_13->command, VAR_13->description);
  break;

 default: FUNC_0(0); break;
 }


 return (VAR_15);
}
