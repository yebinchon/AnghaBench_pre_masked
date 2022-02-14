
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl4030_madc_request {int result_pending; size_t method; scalar_t__ active; int raw; int rbuf; int channels; } ;
struct twl4030_madc_data {int lock; struct twl4030_madc_request* requests; int dev; int imr; int isr; } ;
struct twl4030_madc_conversion_method {int rbase; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct twl4030_madc_conversion_method* VAR_3 ;
 int FUNC_4 (struct twl4030_madc_data*,int) ;
 int FUNC_5 (struct twl4030_madc_data*,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_4, void *VAR_5)
{
 struct twl4030_madc_data *VAR_6 = VAR_5;
 const struct twl4030_madc_conversion_method *VAR_7;
 u8 VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12;
 struct twl4030_madc_request *VAR_13;

 FUNC_2(&VAR_6->lock);
 VAR_12 = FUNC_6(VAR_2, &VAR_8, VAR_6->isr);
 if (VAR_12) {
  FUNC_1(VAR_6->dev, "unable to read isr register 0x%X\n",
   VAR_6->isr);
  goto err_i2c;
 }
 VAR_12 = FUNC_6(VAR_2, &VAR_9, VAR_6->imr);
 if (VAR_12) {
  FUNC_1(VAR_6->dev, "unable to read imr register 0x%X\n",
   VAR_6->imr);
  goto err_i2c;
 }
 VAR_8 &= ~VAR_9;
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  if (!(VAR_8 & (1 << VAR_10)))
   continue;
  VAR_12 = FUNC_4(VAR_6, VAR_10);
  if (VAR_12 < 0)
   FUNC_0(VAR_6->dev, "Disable interrupt failed %d\n", VAR_10);
  VAR_6->requests[VAR_10].result_pending = 1;
 }
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  VAR_13 = &VAR_6->requests[VAR_10];

  if (!VAR_13->result_pending)
   continue;
  VAR_7 = &VAR_3[VAR_13->method];

  VAR_11 = FUNC_5(VAR_6, VAR_7->rbase,
       VAR_13->channels, VAR_13->rbuf, VAR_13->raw);

  VAR_13->result_pending = 0;
  VAR_13->active = 0;
 }
 FUNC_3(&VAR_6->lock);

 return VAR_0;

err_i2c:




 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  VAR_13 = &VAR_6->requests[VAR_10];
  if (VAR_13->active == 0)
   continue;
  VAR_7 = &VAR_3[VAR_13->method];

  VAR_11 = FUNC_5(VAR_6, VAR_7->rbase,
       VAR_13->channels, VAR_13->rbuf, VAR_13->raw);

  VAR_13->result_pending = 0;
  VAR_13->active = 0;
 }
 FUNC_3(&VAR_6->lock);

 return VAR_0;
}
