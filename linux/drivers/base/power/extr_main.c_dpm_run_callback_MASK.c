
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_4__ {int event; } ;
typedef TYPE_1__ pm_message_t ;
typedef int (* pm_callback_t ) (struct device*) ;
typedef int ktime_t ;


 int FUNC_0 (struct device*,int ,int (*) (struct device*),int) ;
 int FUNC_1 (struct device*,int (*) (struct device*)) ;
 int FUNC_2 (struct device*,TYPE_1__,char const*) ;
 int FUNC_3 (int (*) (struct device*),int) ;
 int FUNC_4 (struct device*,int) ;
 int FUNC_5 (struct device*,char const*,int ) ;

__attribute__((used)) static int FUNC_6(pm_callback_t VAR_0, struct device *VAR_1,
       pm_message_t VAR_2, const char *VAR_3)
{
 ktime_t VAR_4;
 int VAR_5;

 if (!VAR_0)
  return 0;

 VAR_4 = FUNC_1(VAR_1, VAR_0);

 FUNC_2(VAR_1, VAR_2, VAR_3);
 FUNC_5(VAR_1, VAR_3, VAR_2.event);
 VAR_5 = VAR_0(VAR_1);
 FUNC_4(VAR_1, VAR_5);
 FUNC_3(VAR_0, VAR_5);

 FUNC_0(VAR_1, VAR_4, VAR_0, VAR_5);

 return VAR_5;
}
