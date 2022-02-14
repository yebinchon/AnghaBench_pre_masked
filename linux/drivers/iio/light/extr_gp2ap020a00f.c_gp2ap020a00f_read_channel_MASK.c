
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_chan_spec {int scan_index; int address; } ;
struct gp2ap020a00f_data {TYPE_1__* client; } ;
typedef enum gp2ap020a00f_cmd { ____Placeholder_gp2ap020a00f_cmd } gp2ap020a00f_cmd ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct gp2ap020a00f_data*,int) ;
 int FUNC_2 (struct gp2ap020a00f_data*,int*) ;
 int FUNC_3 (struct gp2ap020a00f_data*,int ,int*) ;
 int FUNC_4 (struct gp2ap020a00f_data*,int ) ;

__attribute__((used)) static int FUNC_5(struct gp2ap020a00f_data *VAR_5,
    struct iio_chan_spec const *VAR_6, int *VAR_7)
{
 enum gp2ap020a00f_cmd VAR_8;
 int VAR_9;

 switch (VAR_6->scan_index) {
 case 130:
  VAR_8 = VAR_1;
  break;
 case 129:
  VAR_8 = VAR_2;
  break;
 case 128:
  VAR_8 = VAR_3;
  break;
 default:
  return -VAR_0;
 }

 VAR_9 = FUNC_1(VAR_5, VAR_8);
 if (VAR_9 < 0) {
  FUNC_0(&VAR_5->client->dev,
   "gp2ap020a00f_exec_cmd failed\n");
  goto error_ret;
 }

 VAR_9 = FUNC_3(VAR_5, VAR_6->address, VAR_7);
 if (VAR_9 < 0)
  FUNC_0(&VAR_5->client->dev,
   "gp2ap020a00f_read_output failed\n");

 VAR_9 = FUNC_4(VAR_5,
     VAR_4);
 if (VAR_9 < 0)
  FUNC_0(&VAR_5->client->dev,
   "Failed to shut down the device.\n");

 if (VAR_8 == VAR_1 ||
     VAR_8 == VAR_2)
  FUNC_2(VAR_5, VAR_7);

error_ret:
 return VAR_9;
}
