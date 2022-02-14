
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct v4l2_pix_format {int width; int height; int bytesperline; int sizeimage; int colorspace; int field; int pixelformat; } ;
struct rmi_driver_data {scalar_t__ num_tx_electrodes; scalar_t__ num_rx_electrodes; } ;
struct rmi_device {int dev; } ;
struct f54_data {unsigned int input; struct v4l2_pix_format format; void* num_tx_electrodes; void* num_rx_electrodes; TYPE_1__* fn; } ;
typedef enum rmi_f54_report_type { ____Placeholder_rmi_f54_report_type } rmi_f54_report_type ;
struct TYPE_2__ {struct rmi_device* rmi_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rmi_driver_data* FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct f54_data*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct f54_data *VAR_4, unsigned int VAR_5)
{
 struct rmi_device *VAR_6 = VAR_4->fn->rmi_dev;
 struct rmi_driver_data *VAR_7 = FUNC_0(&VAR_6->dev);
 u8 VAR_8 = VAR_7->num_rx_electrodes ? : VAR_4->num_rx_electrodes;
 u8 VAR_9 = VAR_7->num_tx_electrodes ? : VAR_4->num_tx_electrodes;
 struct v4l2_pix_format *VAR_10 = &VAR_4->format;
 enum rmi_f54_report_type VAR_11;
 int VAR_12;

 VAR_11 = FUNC_2(VAR_4, VAR_5);
 if (VAR_11 == VAR_1)
  return -VAR_0;

 VAR_12 = FUNC_1(VAR_11, &VAR_10->pixelformat);
 if (VAR_12)
  return VAR_12;

 VAR_4->input = VAR_5;

 VAR_10->width = VAR_8;
 VAR_10->height = VAR_9;
 VAR_10->field = VAR_3;
 VAR_10->colorspace = VAR_2;
 VAR_10->bytesperline = VAR_10->width * sizeof(u16);
 VAR_10->sizeimage = VAR_10->width * VAR_10->height * sizeof(u16);

 return 0;
}
