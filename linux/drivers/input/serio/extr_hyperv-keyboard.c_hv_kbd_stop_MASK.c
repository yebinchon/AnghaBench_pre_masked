
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct hv_kbd_dev* port_data; } ;
struct hv_kbd_dev {int started; int lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct serio *VAR_0)
{
 struct hv_kbd_dev *VAR_1 = VAR_0->port_data;
 unsigned long VAR_2;

 FUNC_0(&VAR_1->lock, VAR_2);
 VAR_1->started = 0;
 FUNC_1(&VAR_1->lock, VAR_2);
}
