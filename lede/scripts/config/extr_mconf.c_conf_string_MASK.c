
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct menu {int sym; } ;






 char* FUNC_0 (char const*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (char*,char const*,int,int,int ) ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* FUNC_3 (struct menu*) ;
 int FUNC_4 (struct menu*) ;
 int FUNC_5 (int *,char*,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void FUNC_9(struct menu *VAR_4)
{
 const char *VAR_5 = FUNC_3(VAR_4);

 while (1) {
  int VAR_6;
  const char *VAR_7;

  switch (FUNC_7(VAR_4->sym)) {
  case 129:
   VAR_7 = FUNC_0(VAR_2);
   break;
  case 130:
   VAR_7 = FUNC_0(VAR_1);
   break;
  case 128:
   VAR_7 = FUNC_0(VAR_3);
   break;
  default:
   VAR_7 = FUNC_0("Internal mconf error!");
  }
  FUNC_1();
  VAR_6 = FUNC_2(VAR_5 ? FUNC_0(VAR_5) : FUNC_0("Main Menu"),
          VAR_7, 10, 75,
          FUNC_6(VAR_4->sym));
  switch (VAR_6) {
  case 0:
   if (FUNC_8(VAR_4->sym, VAR_0))
    return;
   FUNC_5(((void*)0), FUNC_0("You have made an invalid entry."), 5, 43);
   break;
  case 1:
   FUNC_4(VAR_4);
   break;
  case 131:
   return;
  }
 }
}
