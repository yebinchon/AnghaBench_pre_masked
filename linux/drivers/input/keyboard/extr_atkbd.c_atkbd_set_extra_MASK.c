
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct atkbd {unsigned int extra; unsigned char set; struct input_dev* dev; int write; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct atkbd*) ;
 int FUNC_1 (struct atkbd*) ;
 void* FUNC_2 (struct atkbd*,unsigned char,int) ;
 int FUNC_3 (struct atkbd*) ;
 int FUNC_4 (struct atkbd*) ;
 struct input_dev* FUNC_5 () ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (struct input_dev*) ;
 int FUNC_8 (struct input_dev*) ;
 int FUNC_9 (char const*,int,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_10(struct atkbd *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct input_dev *VAR_6, *VAR_7;
 unsigned int VAR_8;
 int VAR_9;
 bool VAR_10;
 unsigned char VAR_11;

 if (!VAR_3->write)
  return -VAR_1;

 VAR_9 = FUNC_9(VAR_4, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 if (VAR_8 > 1)
  return -VAR_0;

 if (VAR_3->extra != VAR_8) {





  VAR_6 = VAR_3->dev;
  VAR_10 = VAR_3->extra;
  VAR_11 = VAR_3->set;

  VAR_7 = FUNC_5();
  if (!VAR_7)
   return -VAR_2;

  VAR_3->dev = VAR_7;
  VAR_3->set = FUNC_2(VAR_3, VAR_3->set, VAR_8);
  FUNC_1(VAR_3);
  FUNC_0(VAR_3);
  FUNC_4(VAR_3);
  FUNC_3(VAR_3);

  VAR_9 = FUNC_7(VAR_3->dev);
  if (VAR_9) {
   FUNC_6(VAR_7);

   VAR_3->dev = VAR_6;
   VAR_3->set = FUNC_2(VAR_3, VAR_11, VAR_10);
   FUNC_4(VAR_3);
   FUNC_3(VAR_3);

   return VAR_9;
  }
  FUNC_8(VAR_6);

 }
 return VAR_5;
}
