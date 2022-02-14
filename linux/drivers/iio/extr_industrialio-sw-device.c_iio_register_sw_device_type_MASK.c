
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_sw_device_type {int group; int name; int list; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct iio_sw_device_type* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct iio_sw_device_type *VAR_5)
{
 struct iio_sw_device_type *VAR_6;
 int VAR_7 = 0;

 FUNC_5(&VAR_3);
 VAR_6 = FUNC_2(VAR_5->name, FUNC_7(VAR_5->name));
 if (VAR_6)
  VAR_7 = -VAR_0;
 else
  FUNC_4(&VAR_5->list, &VAR_2);
 FUNC_6(&VAR_3);

 if (VAR_7)
  return VAR_7;

 VAR_5->group = FUNC_3(VAR_4, VAR_5->name,
      &VAR_1);
 if (FUNC_0(VAR_5->group))
  VAR_7 = FUNC_1(VAR_5->group);

 return VAR_7;
}
