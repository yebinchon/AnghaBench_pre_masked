
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_3__ {int event; } ;
typedef TYPE_1__ pm_message_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,char const*,int ,char*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1, pm_message_t VAR_2, const char *VAR_3)
{
 FUNC_0(VAR_1, "%s%s%s\n", VAR_3, FUNC_2(VAR_2.event),
  ((VAR_2.event & VAR_0) && FUNC_1(VAR_1)) ?
  ", may wakeup" : "");
}
