
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w8001 {int mutex; int open_count; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 struct w8001* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct w8001*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_1)
{
 struct w8001 *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_2->mutex);
 if (VAR_3)
  return VAR_3;

 if (VAR_2->open_count++ == 0) {
  VAR_3 = FUNC_3(VAR_2, VAR_0, 0);
  if (VAR_3)
   VAR_2->open_count--;
 }

 FUNC_2(&VAR_2->mutex);
 return VAR_3;
}
