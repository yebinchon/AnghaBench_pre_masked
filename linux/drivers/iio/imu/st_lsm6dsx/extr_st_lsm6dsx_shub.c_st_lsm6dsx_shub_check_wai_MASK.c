
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct st_lsm6dsx_shub_settings {int shub_out; int slv0_addr; } ;
struct st_lsm6dsx_sensor {int dummy; } ;
struct st_lsm6dsx_hw {int * iio_devs; TYPE_1__* settings; } ;
struct TYPE_4__ {int addr; int val; } ;
struct st_lsm6dsx_ext_dev_settings {int* i2c_addr; TYPE_2__ wai; } ;
typedef int data ;
typedef int config ;
struct TYPE_3__ {struct st_lsm6dsx_shub_settings shub_settings; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int ,int ) ;
 struct st_lsm6dsx_sensor* FUNC_2 (int ) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (struct st_lsm6dsx_sensor*,int) ;
 int FUNC_5 (struct st_lsm6dsx_hw*,int ,int*,int) ;
 int FUNC_6 (struct st_lsm6dsx_hw*) ;
 int FUNC_7 (struct st_lsm6dsx_hw*,int,int*,int) ;

__attribute__((used)) static int
FUNC_8(struct st_lsm6dsx_hw *VAR_2, u8 *VAR_3,
     const struct st_lsm6dsx_ext_dev_settings *VAR_4)
{
 const struct st_lsm6dsx_shub_settings *VAR_5;
 struct st_lsm6dsx_sensor *VAR_6;
 u8 VAR_7[3], VAR_8, VAR_9;
 bool VAR_10 = 0;
 int VAR_11, VAR_12;

 VAR_5 = &VAR_2->settings->shub_settings;
 VAR_9 = FUNC_1(0, VAR_5->slv0_addr);
 VAR_6 = FUNC_2(VAR_2->iio_devs[VAR_1]);

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_4->i2c_addr); VAR_11++) {
  if (!VAR_4->i2c_addr[VAR_11])
   continue;


  VAR_7[0] = (VAR_4->i2c_addr[VAR_11] << 1) | 0x1;
  VAR_7[1] = VAR_4->wai.addr;
  VAR_7[2] = 0x1;

  VAR_12 = FUNC_7(VAR_2, VAR_9, VAR_7,
      sizeof(VAR_7));
  if (VAR_12 < 0)
   return VAR_12;

  VAR_12 = FUNC_4(VAR_6, 1);
  if (VAR_12 < 0)
   return VAR_12;

  FUNC_6(VAR_2);

  VAR_12 = FUNC_5(VAR_2,
            VAR_5->shub_out,
            &VAR_8, sizeof(VAR_8));

  FUNC_4(VAR_6, 0);

  if (VAR_12 < 0)
   return VAR_12;

  if (VAR_8 != VAR_4->wai.val)
   continue;

  *VAR_3 = VAR_4->i2c_addr[VAR_11];
  VAR_10 = 1;
  break;
 }


 FUNC_3(VAR_7, 0, sizeof(VAR_7));
 VAR_12 = FUNC_7(VAR_2, VAR_9, VAR_7,
     sizeof(VAR_7));
 if (VAR_12 < 0)
  return VAR_12;

 return VAR_10 ? 0 : -VAR_0;
}
