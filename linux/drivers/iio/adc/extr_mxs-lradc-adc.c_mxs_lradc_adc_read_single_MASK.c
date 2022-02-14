
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_lradc_adc {scalar_t__ base; int completion; int is_divided; struct mxs_lradc* lradc; } ;
struct mxs_lradc {scalar_t__ soc; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*) ;
 struct mxs_lradc_adc* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int,int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct iio_dev *VAR_12, int VAR_13,
         int *VAR_14)
{
 struct mxs_lradc_adc *VAR_15 = FUNC_6(VAR_12);
 struct mxs_lradc *VAR_16 = VAR_15->lradc;
 int VAR_17;







 VAR_17 = FUNC_4(VAR_12);
 if (VAR_17)
  return VAR_17;

 FUNC_8(&VAR_15->completion);






 if (VAR_16->soc == VAR_3)
  FUNC_11(FUNC_2(0),
         VAR_15->base + VAR_6 + VAR_10);
 FUNC_11(0x1, VAR_15->base + VAR_5 + VAR_10);


 if (FUNC_9(VAR_13, &VAR_15->is_divided))
  FUNC_11(1 << VAR_8,
         VAR_15->base + VAR_7 + VAR_11);
 else
  FUNC_11(1 << VAR_8,
         VAR_15->base + VAR_7 + VAR_10);


 FUNC_11(FUNC_3(0),
        VAR_15->base + VAR_9 + VAR_10);
 FUNC_11(VAR_13, VAR_15->base + VAR_9 + VAR_11);

 FUNC_11(0, VAR_15->base + FUNC_1(0));


 FUNC_11(FUNC_2(0),
        VAR_15->base + VAR_6 + VAR_11);
 FUNC_11(FUNC_0(0), VAR_15->base + VAR_5 + VAR_11);


 VAR_17 = FUNC_10(&VAR_15->completion, VAR_1);
 if (!VAR_17)
  VAR_17 = -VAR_0;
 if (VAR_17 < 0)
  goto err;


 *VAR_14 = FUNC_7(VAR_15->base + FUNC_1(0)) & VAR_4;
 VAR_17 = VAR_2;

err:
 FUNC_11(FUNC_2(0),
        VAR_15->base + VAR_6 + VAR_10);

 FUNC_5(VAR_12);

 return VAR_17;
}
