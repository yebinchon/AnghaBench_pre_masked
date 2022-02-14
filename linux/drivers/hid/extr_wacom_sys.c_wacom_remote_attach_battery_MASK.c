
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wacom_remote {TYPE_3__* remotes; } ;
struct TYPE_6__ {TYPE_1__* groups; } ;
struct wacom {struct wacom_remote* remote; TYPE_2__ led; } ;
struct TYPE_8__ {scalar_t__ battery; } ;
struct TYPE_7__ {TYPE_4__ battery; int registered; } ;
struct TYPE_5__ {scalar_t__ select; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct wacom*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_1(struct wacom *VAR_1, int VAR_2)
{
 struct wacom_remote *VAR_3 = VAR_1->remote;
 int VAR_4;

 if (!VAR_3->remotes[VAR_2].registered)
  return 0;

 if (VAR_3->remotes[VAR_2].battery.battery)
  return 0;

 if (VAR_1->led.groups[VAR_2].select == VAR_0)
  return 0;

 VAR_4 = FUNC_0(VAR_1,
     &VAR_1->remote->remotes[VAR_2].battery);
 if (VAR_4)
  return VAR_4;

 return 0;
}
