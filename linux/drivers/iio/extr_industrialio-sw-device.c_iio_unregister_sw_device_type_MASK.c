
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_sw_device_type {int group; int list; int name; } ;


 struct iio_sw_device_type* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct iio_sw_device_type *VAR_1)
{
 struct iio_sw_device_type *VAR_2;

 FUNC_3(&VAR_0);
 VAR_2 = FUNC_0(VAR_1->name, FUNC_5(VAR_1->name));
 if (VAR_2)
  FUNC_2(&VAR_1->list);
 FUNC_4(&VAR_0);

 FUNC_1(VAR_1->group);
}
