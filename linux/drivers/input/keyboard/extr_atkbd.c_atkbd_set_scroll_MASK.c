
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct atkbd {unsigned int scroll; struct input_dev* dev; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atkbd*) ;
 int FUNC_1 (struct atkbd*) ;
 struct input_dev* FUNC_2 () ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (char const*,int,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_7(struct atkbd *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct input_dev *VAR_5, *VAR_6;
 unsigned int VAR_7;
 int VAR_8;
 bool VAR_9;

 VAR_8 = FUNC_6(VAR_3, 10, &VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_7 > 1)
  return -VAR_0;

 if (VAR_2->scroll != VAR_7) {
  VAR_5 = VAR_2->dev;
  VAR_9 = VAR_2->scroll;

  VAR_6 = FUNC_2();
  if (!VAR_6)
   return -VAR_1;

  VAR_2->dev = VAR_6;
  VAR_2->scroll = VAR_7;
  FUNC_1(VAR_2);
  FUNC_0(VAR_2);

  VAR_8 = FUNC_4(VAR_2->dev);
  if (VAR_8) {
   FUNC_3(VAR_6);

   VAR_2->scroll = VAR_9;
   VAR_2->dev = VAR_5;
   FUNC_1(VAR_2);
   FUNC_0(VAR_2);

   return VAR_8;
  }
  FUNC_5(VAR_5);
 }
 return VAR_4;
}
