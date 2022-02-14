
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct rpcent {int r_number; } ;


 int FUNC_0 (int,char*,char*) ;
 struct rpcent* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,char**,int) ;

__attribute__((used)) static u_long
FUNC_5 (char *VAR_0)
{
 char *VAR_1;
 register struct rpcent *VAR_2;
 register u_long VAR_3;
 char *VAR_4 = VAR_0;

 while (*VAR_4 && FUNC_3(*VAR_4++));
 if (*VAR_4 || FUNC_2(*(VAR_4 - 1))) {
  VAR_2 = FUNC_1(VAR_0);
  if (VAR_2 == ((void*)0))
   FUNC_0(1, "%s is unknown service", VAR_0);
  VAR_3 = VAR_2->r_number;
 } else {
  VAR_3 = FUNC_4(VAR_0, &VAR_1, 10);
  if (VAR_1 == VAR_0 || *VAR_1 != '\0')
   FUNC_0(1, "%s is illegal program number", VAR_0);
 }
 return (VAR_3);
}
