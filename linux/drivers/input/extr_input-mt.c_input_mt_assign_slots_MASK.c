
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_mt_pos {int dummy; } ;
struct input_mt {int num_slots; int red; } ;
struct input_dev {struct input_mt* mt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int,int,int) ;
 int FUNC_1 (struct input_mt*,struct input_mt_pos const*,int,int) ;
 int FUNC_2 (struct input_mt*,int*,int) ;

int FUNC_3(struct input_dev *VAR_2, int *VAR_3,
     const struct input_mt_pos *VAR_4, int VAR_5,
     int VAR_6)
{
 struct input_mt *VAR_7 = VAR_2->mt;
 int VAR_8 = 2 * VAR_6 * VAR_6;
 int VAR_9;

 if (!VAR_7 || !VAR_7->red)
  return -VAR_1;
 if (VAR_5 > VAR_7->num_slots)
  return -VAR_0;
 if (VAR_5 < 1)
  return 0;

 VAR_9 = FUNC_1(VAR_7, VAR_4, VAR_5, VAR_8);
 FUNC_0(VAR_7->red, VAR_5, VAR_9 / VAR_5, VAR_9, VAR_8);
 FUNC_2(VAR_7, VAR_3, VAR_5);

 return 0;
}
