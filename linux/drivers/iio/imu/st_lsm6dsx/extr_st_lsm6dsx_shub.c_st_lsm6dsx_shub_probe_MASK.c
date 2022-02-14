
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct st_lsm6dsx_sensor {int dummy; } ;
struct st_lsm6dsx_hw {int * iio_devs; } ;
typedef enum st_lsm6dsx_sensor_id { ____Placeholder_st_lsm6dsx_sensor_id } st_lsm6dsx_sensor_id ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct st_lsm6dsx_sensor* FUNC_1 (int ) ;
 int * VAR_4 ;
 int FUNC_2 (struct st_lsm6dsx_hw*,int,int *,int ,char const*) ;
 int FUNC_3 (struct st_lsm6dsx_hw*,int *,int *) ;
 int FUNC_4 (struct st_lsm6dsx_sensor*) ;

int FUNC_5(struct st_lsm6dsx_hw *VAR_5, const char *VAR_6)
{
 enum st_lsm6dsx_sensor_id VAR_7 = VAR_2;
 struct st_lsm6dsx_sensor *VAR_8;
 int VAR_9, VAR_10, VAR_11 = 0;
 u8 VAR_12 = 0;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4); VAR_10++) {
  VAR_9 = FUNC_3(VAR_5, &VAR_12,
     &VAR_4[VAR_10]);
  if (VAR_9 == -VAR_0)
   continue;
  else if (VAR_9 < 0)
   return VAR_9;

  VAR_5->iio_devs[VAR_7] = FUNC_2(VAR_5, VAR_7,
      &VAR_4[VAR_10],
      VAR_12, VAR_6);
  if (!VAR_5->iio_devs[VAR_7])
   return -VAR_1;

  VAR_8 = FUNC_1(VAR_5->iio_devs[VAR_7]);
  VAR_9 = FUNC_4(VAR_8);
  if (VAR_9 < 0)
   return VAR_9;

  if (++VAR_11 >= VAR_3)
   break;
  VAR_7++;
 }

 return 0;
}
