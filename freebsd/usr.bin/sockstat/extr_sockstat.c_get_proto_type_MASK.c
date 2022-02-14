
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protoent {int p_proto; } ;


 struct protoent* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_0)
{
 struct protoent *VAR_1;

 if (FUNC_1(VAR_0) == 0)
  return (0);
 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 == ((void*)0)) {
  FUNC_2("getprotobyname");
  return (-1);
 }
 return (VAR_1->p_proto);
}
