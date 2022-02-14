
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int groupcounter; int ** groups; } ;


 int VAR_0 ;

void FUNC_0(struct iio_dev *VAR_1)
{
 VAR_1->groups[VAR_1->groupcounter++] =
  &VAR_0;
}
