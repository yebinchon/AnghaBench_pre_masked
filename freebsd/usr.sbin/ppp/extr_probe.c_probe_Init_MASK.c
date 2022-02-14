
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int select_changes_time; int ipv6_available; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,char*,char*) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_2 () ;

void
FUNC_3()
{
  VAR_1.select_changes_time = FUNC_2() ? 1 : 0;
  FUNC_1(VAR_0, "Select changes time: %s\n",
             VAR_1.select_changes_time ? "yes" : "no");

  VAR_1.ipv6_available = FUNC_0() ? 1 : 0;
  FUNC_1(VAR_0, "IPv6 available: %s\n",
             VAR_1.ipv6_available ? "yes" : "no");

}
