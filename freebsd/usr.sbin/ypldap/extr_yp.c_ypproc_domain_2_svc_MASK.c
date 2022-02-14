
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_req {int dummy; } ;
typedef int domainname ;
typedef scalar_t__ bool_t ;
struct TYPE_2__ {int sc_domainname; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

bool_t *
FUNC_1(domainname *VAR_1, struct svc_req *VAR_2)
{
 static bool_t VAR_3;

 VAR_3 = (bool_t)1;
 if (FUNC_0(*VAR_1, VAR_0->sc_domainname) != 0)
  VAR_3 = (bool_t)0;
 return (&VAR_3);
}
