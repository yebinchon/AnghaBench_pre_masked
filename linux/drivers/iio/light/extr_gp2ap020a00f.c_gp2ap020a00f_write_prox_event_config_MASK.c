
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct gp2ap020a00f_data {scalar_t__* thresh_val; TYPE_1__* client; } ;
typedef enum gp2ap020a00f_cmd { ____Placeholder_gp2ap020a00f_cmd } gp2ap020a00f_cmd ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,struct iio_dev*) ;
 int FUNC_1 (struct gp2ap020a00f_data*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 struct gp2ap020a00f_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int *,int *,int,char*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_12,
      int VAR_13)
{
 struct gp2ap020a00f_data *VAR_14 = FUNC_2(VAR_12);
 enum gp2ap020a00f_cmd VAR_15, VAR_16;
 int VAR_17;

 VAR_15 = VAR_13 ? VAR_2 :
         VAR_1;
 VAR_16 = VAR_13 ? VAR_4 :
        VAR_3;






 if (VAR_13) {
  if (VAR_14->thresh_val[VAR_6] == 0)
   return -VAR_0;

  if (VAR_14->thresh_val[VAR_5] == 0)
   return -VAR_0;
 }

 VAR_17 = FUNC_1(VAR_14, VAR_15);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_1(VAR_14, VAR_16);
 if (VAR_17 < 0)
  return VAR_17;

 FUNC_0(VAR_14->client->irq, VAR_12);

 if (VAR_13)
  VAR_17 = FUNC_3(VAR_14->client->irq, ((void*)0),
        &VAR_10,
        VAR_9 |
        VAR_8 |
        VAR_7,
        "gp2ap020a00f_prox_sensing",
        VAR_12);
 else {
  VAR_17 = FUNC_3(VAR_14->client->irq, ((void*)0),
        &VAR_11,
        VAR_8 |
        VAR_7,
        "gp2ap020a00f_thresh_event",
        VAR_12);
 }

 return VAR_17;
}
