
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer8_priv {int dummy; } ;
struct clock_event_device {int dummy; } ;


 int FUNC_0 (int) ;
 struct timer8_priv* FUNC_1 (struct clock_event_device*) ;
 int FUNC_2 (struct clock_event_device*) ;
 int FUNC_3 (struct timer8_priv*,unsigned long) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_0,
       struct clock_event_device *VAR_1)
{
 struct timer8_priv *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(!FUNC_2(VAR_1));
 FUNC_3(VAR_2, VAR_0 - 1);

 return 0;
}
