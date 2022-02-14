
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sca3000_state {int* rx; int lock; } ;
struct iio_dev {int dummy; } ;
typedef int s64 ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct iio_dev*) ;
 struct sca3000_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sca3000_state*,int ,int) ;
 int FUNC_7 (int,struct iio_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_14, void *VAR_15)
{
 struct iio_dev *VAR_16 = VAR_15;
 struct sca3000_state *VAR_17 = FUNC_2(VAR_16);
 int VAR_18, VAR_19;
 s64 VAR_20 = FUNC_1(VAR_16);





 FUNC_4(&VAR_17->lock);
 VAR_18 = FUNC_6(VAR_17, VAR_13, 1);
 VAR_19 = VAR_17->rx[0];
 FUNC_5(&VAR_17->lock);
 if (VAR_18)
  goto done;

 FUNC_7(VAR_19, VAR_16);

 if (VAR_19 & VAR_9)
  FUNC_3(VAR_16,
          FUNC_0(VAR_0,
        0,
        VAR_5,
        VAR_3,
        VAR_1),
          VAR_20);

 if (VAR_19 & VAR_11)
  FUNC_3(VAR_16,
          FUNC_0(VAR_0,
        0,
        VAR_6,
        VAR_3,
        VAR_2),
          VAR_20);

 if (VAR_19 & VAR_10)
  FUNC_3(VAR_16,
          FUNC_0(VAR_0,
        0,
        VAR_4,
        VAR_3,
        VAR_2),
          VAR_20);

 if (VAR_19 & VAR_12)
  FUNC_3(VAR_16,
          FUNC_0(VAR_0,
        0,
        VAR_7,
        VAR_3,
        VAR_2),
          VAR_20);

done:
 return VAR_8;
}
