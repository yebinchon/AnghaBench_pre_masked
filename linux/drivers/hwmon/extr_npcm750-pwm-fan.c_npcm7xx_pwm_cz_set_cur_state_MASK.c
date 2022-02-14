
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_cooling_device {struct npcm7xx_cooling_device* devdata; } ;
struct npcm7xx_cooling_device {unsigned long max_state; unsigned long cur_state; int * cooling_levels; int pwm_port; int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct thermal_cooling_device *VAR_1,
        unsigned long VAR_2)
{
 struct npcm7xx_cooling_device *VAR_3 = VAR_1->devdata;
 int VAR_4;

 if (VAR_2 > VAR_3->max_state)
  return -VAR_0;

 VAR_3->cur_state = VAR_2;
 VAR_4 = FUNC_0(VAR_3->data, VAR_3->pwm_port,
         VAR_3->cooling_levels[VAR_3->cur_state]);

 return VAR_4;
}
