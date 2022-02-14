
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mx25_gcq_priv {int regs; int completed; } ;
struct iio_chan_spec {int channel; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 long FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_9,
      struct iio_chan_spec const *VAR_10,
      struct mx25_gcq_priv *VAR_11,
      int *VAR_12)
{
 long VAR_13;
 u32 VAR_14;


 FUNC_5(VAR_11->regs, VAR_5,
       FUNC_1(0, VAR_10->channel));

 FUNC_4(VAR_11->regs, VAR_6, VAR_7, 0);


 FUNC_4(VAR_11->regs, VAR_2, VAR_3,
      VAR_3);

 VAR_13 = FUNC_6(
  &VAR_11->completed, VAR_8);
 if (VAR_13 < 0) {
  FUNC_2(VAR_9, "ADC wait for measurement failed\n");
  return VAR_13;
 } else if (VAR_13 == 0) {
  FUNC_2(VAR_9, "ADC timed out\n");
  return -VAR_0;
 }

 FUNC_3(VAR_11->regs, VAR_4, &VAR_14);

 *VAR_12 = FUNC_0(VAR_14);

 return VAR_1;
}
