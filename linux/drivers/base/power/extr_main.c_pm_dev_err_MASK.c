
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_3__ {int event; } ;
typedef TYPE_1__ pm_message_t ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ,char const*,int) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, pm_message_t VAR_1, const char *VAR_2,
   int VAR_3)
{
 FUNC_2("Device %s failed to %s%s: error %d\n",
        FUNC_0(VAR_0), FUNC_1(VAR_1.event), VAR_2, VAR_3);
}
