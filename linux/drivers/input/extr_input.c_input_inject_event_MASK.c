
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_handle {struct input_dev* dev; } ;
struct input_dev {int event_lock; int grab; int evbit; } ;


 int VAR_0 ;
 int FUNC_0 (struct input_dev*,unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_1 (unsigned int,int ,int ) ;
 struct input_handle* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct input_handle *VAR_1,
   unsigned int VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct input_dev *VAR_5 = VAR_1->dev;
 struct input_handle *VAR_6;
 unsigned long VAR_7;

 if (FUNC_1(VAR_2, VAR_5->evbit, VAR_0)) {
  FUNC_5(&VAR_5->event_lock, VAR_7);

  FUNC_3();
  VAR_6 = FUNC_2(VAR_5->grab);
  if (!VAR_6 || VAR_6 == VAR_1)
   FUNC_0(VAR_5, VAR_2, VAR_3, VAR_4);
  FUNC_4();

  FUNC_6(&VAR_5->event_lock, VAR_7);
 }
}
