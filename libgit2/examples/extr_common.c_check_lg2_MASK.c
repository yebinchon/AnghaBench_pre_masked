
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* message; } ;
typedef TYPE_1__ git_error ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 TYPE_1__* FUNC_2 () ;
 int VAR_0 ;

void FUNC_3(int VAR_1, const char *VAR_2, const char *VAR_3)
{
 const git_error *VAR_4;
 const char *VAR_5 = "", *VAR_6 = "";

 if (!VAR_1)
  return;

 if ((VAR_4 = FUNC_2()) != ((void*)0) && VAR_4->message != ((void*)0)) {
  VAR_5 = VAR_4->message;
  VAR_6 = " - ";
 }

 if (VAR_3)
  FUNC_1(VAR_0, "%s '%s' [%d]%s%s\n",
   VAR_2, VAR_3, VAR_1, VAR_6, VAR_5);
 else
  FUNC_1(VAR_0, "%s [%d]%s%s\n",
   VAR_2, VAR_1, VAR_6, VAR_5);

 FUNC_0(1);
}
