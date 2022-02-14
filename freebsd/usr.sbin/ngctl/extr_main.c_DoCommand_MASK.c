
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ngcmd {int (* func ) (int,char**) ;int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ngcmd* FUNC_0 (char*) ;
 int FUNC_1 (int,char**) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int
FUNC_3(int VAR_3, char **VAR_4)
{
 const struct ngcmd *VAR_5;
 int VAR_6;

 if (VAR_3 == 0 || *VAR_4[0] == 0)
  return (VAR_1);
 if ((VAR_5 = FUNC_0(VAR_4[0])) == ((void*)0))
  return (VAR_0);
 if ((VAR_6 = (*VAR_5->func)(VAR_3, VAR_4)) == VAR_2)
  FUNC_2("usage: %s", VAR_5->cmd);
 return (VAR_6);
}
