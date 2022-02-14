
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_req {int dummy; } ;
typedef int domainname ;
typedef int bool_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct svc_req*,...) ;
 scalar_t__ FUNC_1 (int ) ;

bool_t *
FUNC_2(domainname *VAR_1, struct svc_req *VAR_2)
{
 static bool_t VAR_3;




 if (FUNC_0(((void*)0), (struct svc_req *)VAR_2))

  return (((void*)0));

 if (VAR_1 == ((void*)0) || FUNC_1(*VAR_1))
  return (((void*)0));
 else
  VAR_3 = VAR_0;

 return (&VAR_3);
}
