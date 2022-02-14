
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct servent {int s_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct servent* FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int*) ;

__attribute__((used)) static int
FUNC_3(char *VAR_2, int VAR_3, int *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, "%d", VAR_4);
 if (VAR_5 != 1)

 {
  struct servent *VAR_6;

  if (VAR_3 == VAR_0)
   VAR_6 = FUNC_0(VAR_2, "tcp");
  else if (VAR_3 == VAR_1)
   VAR_6 = FUNC_0(VAR_2, "udp");
  else
   return (-1);

  if (VAR_6 == ((void*)0))
   return (-1);

  *VAR_4 = (u_int) FUNC_1(VAR_6->s_port);
 }



 return (0);
}
