
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int * timestamp; } ;
typedef int ktime_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct input_dev *VAR_4, ktime_t VAR_5)
{
 VAR_4->timestamp[VAR_1] = VAR_5;
 VAR_4->timestamp[VAR_2] = FUNC_1(VAR_5);
 VAR_4->timestamp[VAR_0] = FUNC_0(VAR_5,
          VAR_3);
}
