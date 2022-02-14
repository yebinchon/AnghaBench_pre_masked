
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_mt {int flags; int frame; } ;
struct input_dev {struct input_mt* mt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct input_dev*,struct input_mt*) ;
 int FUNC_1 (struct input_dev*,int) ;

void FUNC_2(struct input_dev *VAR_3)
{
 struct input_mt *VAR_4 = VAR_3->mt;
 bool VAR_5 = 0;

 if (!VAR_4)
  return;

 if (VAR_4->flags & VAR_0)
  FUNC_0(VAR_3, VAR_4);

 if ((VAR_4->flags & VAR_1) && !(VAR_4->flags & VAR_2))
  VAR_5 = 1;

 FUNC_1(VAR_3, VAR_5);

 VAR_4->frame++;
}
