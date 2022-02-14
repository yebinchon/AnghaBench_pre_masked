
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_trigger_cpu {int is_active; int _trig; } ;
typedef enum cpu_led_event { ____Placeholder_cpu_led_event } cpu_led_event ;







 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int,int *) ;
 unsigned int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int ,unsigned int) ;
 int VAR_3 ;
 unsigned int FUNC_4 () ;
 struct led_trigger_cpu* FUNC_5 (int *) ;
 int VAR_4 ;

void FUNC_6(enum cpu_led_event VAR_5)
{
 struct led_trigger_cpu *VAR_6 = FUNC_5(&VAR_2);
 bool VAR_7 = VAR_6->is_active;


 switch (VAR_5) {
 case 131:
 case 129:

  VAR_7 = 1;
  break;

 case 130:
 case 128:
 case 132:

  VAR_7 = 0;
  break;

 default:

  break;
 }

 if (VAR_7 != VAR_6->is_active) {
  unsigned int VAR_8;
  unsigned int VAR_9;


  VAR_6->is_active = VAR_7;
  FUNC_1(VAR_7 ? 1 : -1, &VAR_3);
  VAR_8 = FUNC_2(&VAR_3);
  VAR_9 = FUNC_4();

  FUNC_3(VAR_6->_trig,
   VAR_7 ? VAR_0 : VAR_1);


  FUNC_3(VAR_4,
   FUNC_0(VAR_0 * VAR_8, VAR_9));

 }
}
