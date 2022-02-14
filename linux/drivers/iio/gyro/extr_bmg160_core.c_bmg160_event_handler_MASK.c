
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device {int dummy; } ;
struct bmg160_data {int regmap; int dready_trigger_on; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct bmg160_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int ,int ) ;
 struct device* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,unsigned int*) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_15, void *VAR_16)
{
 struct iio_dev *VAR_17 = VAR_16;
 struct bmg160_data *VAR_18 = FUNC_3(VAR_17);
 struct device *VAR_19 = FUNC_5(VAR_18->regmap);
 int VAR_20;
 int VAR_21;
 unsigned int VAR_22;

 VAR_20 = FUNC_6(VAR_18->regmap, VAR_6, &VAR_22);
 if (VAR_20 < 0) {
  FUNC_1(VAR_19, "Error reading reg_int_status2\n");
  goto ack_intr_status;
 }

 if (VAR_22 & 0x08)
  VAR_21 = VAR_9;
 else
  VAR_21 = VAR_8;

 if (VAR_22 & VAR_0)
  FUNC_4(VAR_17, FUNC_0(VAR_7,
            0,
            VAR_11,
            VAR_10,
            VAR_21),
          FUNC_2(VAR_17));
 if (VAR_22 & VAR_1)
  FUNC_4(VAR_17, FUNC_0(VAR_7,
            0,
            VAR_12,
            VAR_10,
            VAR_21),
          FUNC_2(VAR_17));
 if (VAR_22 & VAR_2)
  FUNC_4(VAR_17, FUNC_0(VAR_7,
            0,
            VAR_13,
            VAR_10,
            VAR_21),
          FUNC_2(VAR_17));

ack_intr_status:
 if (!VAR_18->dready_trigger_on) {
  VAR_20 = FUNC_7(VAR_18->regmap, VAR_5,
       VAR_3 |
       VAR_4);
  if (VAR_20 < 0)
   FUNC_1(VAR_19, "Error writing reg_rst_latch\n");
 }

 return VAR_14;
}
