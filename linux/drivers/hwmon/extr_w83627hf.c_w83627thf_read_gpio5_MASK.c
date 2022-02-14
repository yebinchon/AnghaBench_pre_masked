
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
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (struct w83627hf_sio_data*) ;
 int FUNC_5 (struct w83627hf_sio_data*) ;
 int FUNC_6 (struct w83627hf_sio_data*,int ) ;
 int FUNC_7 (struct w83627hf_sio_data*,int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct w83627hf_sio_data *VAR_5 = FUNC_1(&VAR_4->dev);
 int VAR_6 = 0xff, VAR_7;

 if (FUNC_4(VAR_5)) {





  FUNC_3(&VAR_4->dev,
    "Can not read VID data: Failed to enable SuperIO access\n");
  return VAR_6;
 }

 FUNC_7(VAR_5, VAR_0);

 VAR_6 = 0xff;


 if (!(FUNC_6(VAR_5, VAR_2) & (1<<3))) {
  FUNC_0(&VAR_4->dev, "GPIO5 disabled, no VID function\n");
  goto exit;
 }





 VAR_7 = FUNC_6(VAR_5, VAR_3) & 0x3f;
 if ((VAR_7 & 0x1f) != 0x1f) {
  FUNC_0(&VAR_4->dev, "GPIO5 not configured for VID "
   "function\n");
  goto exit;
 }

 FUNC_2(&VAR_4->dev, "Reading VID from GPIO5\n");
 VAR_6 = FUNC_6(VAR_5, VAR_1) & VAR_7;

exit:
 FUNC_5(VAR_5);
 return VAR_6;
}
