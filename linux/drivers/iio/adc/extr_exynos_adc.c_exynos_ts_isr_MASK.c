
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct iio_dev {int dummy; } ;
struct exynos_adc {int regs; TYPE_1__* input; int dev; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {scalar_t__ users; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct iio_dev* FUNC_1 (int ) ;
 int FUNC_2 (struct iio_dev*,int*,int*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_8, void *VAR_9)
{
 struct exynos_adc *VAR_10 = VAR_9;
 struct iio_dev *VAR_11 = FUNC_1(VAR_10->dev);
 u32 VAR_12, VAR_13;
 bool VAR_14;
 int VAR_15;

 while (VAR_10->input->users) {
  VAR_15 = FUNC_2(VAR_11, &VAR_12, &VAR_13);
  if (VAR_15 == -VAR_6)
   break;

  VAR_14 = VAR_12 & VAR_13 & VAR_3;
  if (!VAR_14) {
   FUNC_4(VAR_10->input, VAR_5, 0);
   FUNC_5(VAR_10->input);
   break;
  }

  FUNC_3(VAR_10->input, VAR_0, VAR_12 & VAR_2);
  FUNC_3(VAR_10->input, VAR_1, VAR_13 & VAR_4);
  FUNC_4(VAR_10->input, VAR_5, 1);
  FUNC_5(VAR_10->input);

  FUNC_6(1000, 1100);
 };

 FUNC_7(0, FUNC_0(VAR_10->regs));

 return VAR_7;
}
