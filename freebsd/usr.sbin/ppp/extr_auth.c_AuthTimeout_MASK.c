
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* req ) (struct authinfo*) ;} ;
struct authinfo {scalar_t__ retry; TYPE_1__* physical; int authtimer; TYPE_2__ fn; int id; } ;
struct TYPE_3__ {int dl; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct authinfo*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1)
{
  struct authinfo *VAR_2 = (struct authinfo *)VAR_1;

  FUNC_4(&VAR_2->authtimer);
  if (--VAR_2->retry > 0) {
    VAR_2->id++;
    (*VAR_2->fn.req)(VAR_2);
    FUNC_3(&VAR_2->authtimer);
  } else {
    FUNC_1(VAR_0, "Auth: No response from server\n");
    FUNC_0(VAR_2->physical->dl);
  }
}
