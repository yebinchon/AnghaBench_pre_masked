
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_state {int dummy; } ;
struct led_classdev {int dev; struct port_state* trigger_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct led_classdev *VAR_1)
{
 struct port_state *VAR_2 = VAR_1->trigger_data;

 if (!VAR_2)
  return;

 FUNC_0(VAR_1->dev, &VAR_0);

}
