
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int * timestamp; } ;
typedef int ktime_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct input_dev*,int ) ;
 int FUNC_1 (int ,int const) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;

ktime_t *FUNC_4(struct input_dev *VAR_1)
{
 const ktime_t VAR_2 = FUNC_3(0, 0);

 if (!FUNC_1(VAR_1->timestamp[VAR_0], VAR_2))
  FUNC_0(VAR_1, FUNC_2());

 return VAR_1->timestamp;
}
