
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct iio_dev {int dummy; } ;
struct gp2ap020a00f_data {scalar_t__ cur_opmode; unsigned int* thresh_val; int work; int flags; int data_ready_queue; int regmap; } ;
typedef int irqreturn_t ;
typedef int __le16 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_2 (struct gp2ap020a00f_data*,unsigned int) ;
 int FUNC_3 (struct gp2ap020a00f_data*,unsigned int*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct gp2ap020a00f_data* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct iio_dev*,int ,int ) ;
 int FUNC_7 (int *) ;
 unsigned int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,unsigned int*,int) ;
 int FUNC_10 (int ,int ,unsigned int*) ;
 int FUNC_11 (int ,int ,unsigned int) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_15(int VAR_24, void *VAR_25)
{
 struct iio_dev *VAR_26 = VAR_25;
 struct gp2ap020a00f_data *VAR_27 = FUNC_5(VAR_26);
 u8 VAR_28, VAR_29[2];
 unsigned int VAR_30, VAR_31;
 int VAR_32, VAR_33;


 VAR_33 = FUNC_10(VAR_27->regmap, VAR_13,
       &VAR_31);
 if (VAR_33 < 0)
  goto done;

 VAR_28 = VAR_31 & (VAR_1 | VAR_7
     | VAR_14);

 VAR_31 &= (~VAR_1 & ~VAR_7
     & ~VAR_14);


 if (VAR_27->cur_opmode != VAR_9) {
  VAR_33 = FUNC_11(VAR_27->regmap, VAR_13,
        VAR_31);
  if (VAR_33 < 0)
   goto done;
 }

 if (VAR_28 & VAR_1) {



  VAR_33 = FUNC_9(VAR_27->regmap, VAR_0,
       VAR_29, 2);
  if (VAR_33 < 0)
   goto done;

  VAR_30 = FUNC_8((__le16 *)VAR_29);

  if (FUNC_2(VAR_27, VAR_30))
   goto done;

  FUNC_3(VAR_27, &VAR_30);





  if (FUNC_13(VAR_5, &VAR_27->flags)) {
   VAR_32 =
       FUNC_0(VAR_16);
   if (VAR_30 > VAR_27->thresh_val[VAR_32])
    FUNC_6(VAR_26,
           FUNC_1(
         VAR_21,
         VAR_15,
         VAR_22,
         VAR_20,
         VAR_19),
           FUNC_4(VAR_26));
  }

  if (FUNC_13(VAR_3, &VAR_27->flags)) {
   VAR_32 =
       FUNC_0(VAR_17);
   if (VAR_30 < VAR_27->thresh_val[VAR_32])
    FUNC_6(VAR_26,
           FUNC_1(
         VAR_21,
         VAR_15,
         VAR_22,
         VAR_20,
         VAR_18),
           FUNC_4(VAR_26));
  }
 }

 if (VAR_27->cur_opmode == VAR_10 ||
     VAR_27->cur_opmode == VAR_11 ||
     VAR_27->cur_opmode == VAR_12) {
  FUNC_12(VAR_6, &VAR_27->flags);
  FUNC_14(&VAR_27->data_ready_queue);
  goto done;
 }

 if (FUNC_13(VAR_2, &VAR_27->flags) ||
     FUNC_13(VAR_4, &VAR_27->flags) ||
     FUNC_13(VAR_8, &VAR_27->flags))

  FUNC_7(&VAR_27->work);

done:
 return VAR_23;
}
