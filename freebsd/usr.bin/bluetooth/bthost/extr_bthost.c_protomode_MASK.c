
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protoent {char* p_name; int p_proto; } ;


 int FUNC_0 (char const*) ;
 struct protoent* FUNC_1 (char const*) ;
 struct protoent* FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (char*,...) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_5(char const *VAR_1, int VAR_2)
{
 struct protoent *VAR_3 = ((void*)0);
 int VAR_4;

 if ((VAR_4 = FUNC_0(VAR_1)) != 0)
  VAR_3 = FUNC_2(VAR_4);
 else
  VAR_3 = FUNC_1(VAR_1);

 if (VAR_3 == ((void*)0)) {
  FUNC_3(VAR_0, "%s: Unknown Protocol/Service Multiplexor\n", VAR_1);
  return (1);
 }

 if (VAR_2) {
  if (VAR_4)
   FUNC_4("%s", VAR_3->p_name);
  else
   FUNC_4("%d", VAR_3->p_proto);
 } else {
  FUNC_4("Protocol/Service Multiplexor %s has number %d\n",
   VAR_3->p_name, VAR_3->p_proto);
 }

 return (0);
}
