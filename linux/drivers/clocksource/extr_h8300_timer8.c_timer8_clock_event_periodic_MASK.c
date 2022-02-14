
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer8_priv {int rate; } ;
struct clock_event_device {int name; } ;


 int VAR_0 ;
 struct timer8_priv* FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct timer8_priv*,int) ;
 int FUNC_3 (struct timer8_priv*) ;

__attribute__((used)) static int FUNC_4(struct clock_event_device *VAR_1)
{
 struct timer8_priv *VAR_2 = FUNC_0(VAR_1);

 FUNC_1("%s: used for periodic clock events\n", VAR_1->name);
 FUNC_3(VAR_2);
 FUNC_2(VAR_2, (VAR_2->rate + VAR_0/2) / VAR_0);

 return 0;
}
