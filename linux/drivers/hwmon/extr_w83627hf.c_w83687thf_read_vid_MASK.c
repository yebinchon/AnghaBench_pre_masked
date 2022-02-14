
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83627hf_sio_data {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 struct w83627hf_sio_data* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (struct w83627hf_sio_data*) ;
 int FUNC_4 (struct w83627hf_sio_data*) ;
 int FUNC_5 (struct w83627hf_sio_data*,int ) ;
 int FUNC_6 (struct w83627hf_sio_data*,int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 struct w83627hf_sio_data *VAR_5 = FUNC_1(&VAR_4->dev);
 int VAR_6 = 0xff;

 if (FUNC_3(VAR_5)) {





  FUNC_2(&VAR_4->dev,
    "Can not read VID data: Failed to enable SuperIO access\n");
  return VAR_6;
 }

 FUNC_6(VAR_5, VAR_0);


 if (!(FUNC_5(VAR_5, VAR_3) & (1 << 2))) {
  FUNC_0(&VAR_4->dev, "VID disabled, no VID function\n");
  goto exit;
 }


 if (!(FUNC_5(VAR_5, VAR_1) & (1 << 4))) {
  FUNC_0(&VAR_4->dev, "VID configured as output, "
   "no VID function\n");
  goto exit;
 }

 VAR_6 = FUNC_5(VAR_5, VAR_2) & 0x3f;

exit:
 FUNC_4(VAR_5);
 return VAR_6;
}
