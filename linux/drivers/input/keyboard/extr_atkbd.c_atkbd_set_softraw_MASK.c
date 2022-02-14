
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct atkbd {unsigned int softraw; struct input_dev* dev; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atkbd*) ;
 struct input_dev* FUNC_1 () ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (char const*,int,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_6(struct atkbd *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct input_dev *VAR_5, *VAR_6;
 unsigned int VAR_7;
 int VAR_8;
 bool VAR_9;

 VAR_8 = FUNC_5(VAR_3, 10, &VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_7 > 1)
  return -VAR_0;

 if (VAR_2->softraw != VAR_7) {
  VAR_5 = VAR_2->dev;
  VAR_9 = VAR_2->softraw;

  VAR_6 = FUNC_1();
  if (!VAR_6)
   return -VAR_1;

  VAR_2->dev = VAR_6;
  VAR_2->softraw = VAR_7;
  FUNC_0(VAR_2);

  VAR_8 = FUNC_3(VAR_2->dev);
  if (VAR_8) {
   FUNC_2(VAR_6);

   VAR_2->dev = VAR_5;
   VAR_2->softraw = VAR_9;
   FUNC_0(VAR_2);

   return VAR_8;
  }
  FUNC_4(VAR_5);
 }
 return VAR_4;
}
