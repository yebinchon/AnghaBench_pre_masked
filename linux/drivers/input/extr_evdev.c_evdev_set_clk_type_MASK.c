
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdev_client {int clk_type; scalar_t__ head; scalar_t__ tail; scalar_t__ packet_head; int buffer_lock; } ;
typedef enum input_clock_type { ____Placeholder_input_clock_type } input_clock_type ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct evdev_client*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct evdev_client *VAR_4, unsigned int VAR_5)
{
 unsigned long VAR_6;
 enum input_clock_type VAR_7;

 switch (VAR_5) {

 case 128:
  VAR_7 = VAR_3;
  break;
 case 129:
  VAR_7 = VAR_2;
  break;
 case 130:
  VAR_7 = VAR_1;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_4->clk_type != VAR_7) {
  VAR_4->clk_type = VAR_7;





  FUNC_1(&VAR_4->buffer_lock, VAR_6);

  if (VAR_4->head != VAR_4->tail) {
   VAR_4->packet_head = VAR_4->head = VAR_4->tail;
   FUNC_0(VAR_4);
  }

  FUNC_2(&VAR_4->buffer_lock, VAR_6);
 }

 return 0;
}
