
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {int (* exec ) (int,char**) ;int name; } ;


 struct command* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char**,char*,int *,int *) ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (char*,int ) ;
 int FUNC_3 (int,char**) ;
 char* VAR_5 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int,char**) ;

int
FUNC_7(int VAR_6, char **VAR_7)
{
 int VAR_8, VAR_9;
 struct command *VAR_10 = ((void*)0);

 VAR_6 = FUNC_6(VAR_6, VAR_7);
 if (VAR_6 < 0)
  FUNC_0(1);

 VAR_5 = "/dev/ses[0-9]*";
 while ((VAR_9 = FUNC_1(VAR_6, VAR_7, "u:", ((void*)0), ((void*)0))) != -1) {
  switch (VAR_9) {
  case 'u':
   VAR_5 = VAR_2;
   break;
  case '?':
  default:
   FUNC_4(VAR_4, ((void*)0));
  }
 }
 VAR_6 -= VAR_3;
 VAR_7 += VAR_3;

 if (VAR_6 < 1) {
  FUNC_5("Missing command");
  FUNC_4(VAR_4, ((void*)0));
 }

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if (FUNC_2(VAR_7[0], VAR_0[VAR_8].name) == 0) {
   VAR_10 = &VAR_0[VAR_8];
   break;
  }
 }

 if (VAR_10 == ((void*)0)) {
  FUNC_5("unknown command %s", VAR_7[0]);
  FUNC_4(VAR_4, ((void*)0));
 }

 return (VAR_10->exec(VAR_6, VAR_7));
}
