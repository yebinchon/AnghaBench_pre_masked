
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer8_priv {int dummy; } ;
struct clock_event_device {int name; } ;


 struct timer8_priv* FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct timer8_priv*,int) ;
 int FUNC_3 (struct timer8_priv*) ;

__attribute__((used)) static int FUNC_4(struct clock_event_device *VAR_0)
{
 struct timer8_priv *VAR_1 = FUNC_0(VAR_0);

 FUNC_1("%s: used for oneshot clock events\n", VAR_0->name);
 FUNC_3(VAR_1);
 FUNC_2(VAR_1, 0x10000);

 return 0;
}
