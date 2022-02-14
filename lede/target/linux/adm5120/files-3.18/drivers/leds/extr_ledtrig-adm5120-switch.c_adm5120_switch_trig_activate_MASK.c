
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_state {int value; } ;
struct led_classdev {struct port_state* trigger_data; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct led_classdev*,int ) ;
 struct port_state* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct led_classdev *VAR_2)
{
 struct port_state *VAR_3 = VAR_1;
 int VAR_4;

 VAR_2->trigger_data = VAR_3;

 VAR_4 = FUNC_0(VAR_2->dev, &VAR_0);
 if (VAR_4)
  goto err;

 FUNC_1(VAR_2, VAR_3->value);

 return;
err:
 VAR_2->trigger_data = ((void*)0);
}
