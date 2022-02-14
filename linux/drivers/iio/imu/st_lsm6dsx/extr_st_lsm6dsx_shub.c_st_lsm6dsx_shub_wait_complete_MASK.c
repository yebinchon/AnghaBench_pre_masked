
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct st_lsm6dsx_sensor {int odr; } ;
struct st_lsm6dsx_hw {int enable_mask; int * iio_devs; } ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;
 struct st_lsm6dsx_sensor* FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static void FUNC_3(struct st_lsm6dsx_hw *VAR_1)
{
 struct st_lsm6dsx_sensor *VAR_2;
 u16 VAR_3;

 VAR_2 = FUNC_1(VAR_1->iio_devs[VAR_0]);
 VAR_3 = (VAR_1->enable_mask & FUNC_0(VAR_0)) ? VAR_2->odr : 13;
 FUNC_2((2000U / VAR_3) + 1);
}
