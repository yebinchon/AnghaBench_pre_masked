
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_lsm6dsx_sensor {int ts_ref; } ;
struct st_lsm6dsx_hw {int * iio_devs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct st_lsm6dsx_sensor* FUNC_1 (int ) ;
 int FUNC_2 (struct st_lsm6dsx_hw*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct st_lsm6dsx_hw *VAR_3)
{
 struct st_lsm6dsx_sensor *VAR_4;
 int VAR_5, VAR_6;


 VAR_6 = FUNC_2(VAR_3, VAR_1,
          VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (!VAR_3->iio_devs[VAR_5])
   continue;

  VAR_4 = FUNC_1(VAR_3->iio_devs[VAR_5]);




  VAR_4->ts_ref = FUNC_0(VAR_3->iio_devs[VAR_5]);
 }
 return 0;
}
