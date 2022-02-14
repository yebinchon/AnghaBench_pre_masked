
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct svc_req {int dummy; } ;
struct nlm4_notify {int state; int name; } ;
struct TYPE_3__ {int state; int name; } ;
typedef TYPE_1__ nlm_notify ;
typedef int bool_t ;


 int FUNC_0 (struct nlm4_notify*,void*,struct svc_req*) ;

bool_t
FUNC_1(nlm_notify *VAR_0, void *VAR_1, struct svc_req *VAR_2)
{
 struct nlm4_notify VAR_3;

 VAR_3 = VAR_0->name;
 VAR_3 = VAR_0->state;

 return (FUNC_0(&VAR_3, VAR_1, VAR_2));
}
