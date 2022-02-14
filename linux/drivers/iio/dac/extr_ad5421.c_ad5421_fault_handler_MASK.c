
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct ad5421_state {unsigned int fault_mask; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int FUNC_1 (struct iio_dev*,int ) ;
 int FUNC_2 (struct iio_dev*,int ,int ) ;
 int FUNC_3 (struct iio_dev*) ;
 struct ad5421_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*,int ,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_13, void *VAR_14)
{
 struct iio_dev *VAR_15 = VAR_14;
 struct ad5421_state *VAR_16 = FUNC_4(VAR_15);
 unsigned int VAR_17;
 unsigned int VAR_18 = 0;
 unsigned int VAR_19;

 VAR_17 = FUNC_1(VAR_15, VAR_4);
 if (!VAR_17)
  return VAR_12;






 FUNC_2(VAR_15, 0, 0);
 do {


  if (VAR_17 == 0xffff)
   VAR_17 = 0;


  VAR_19 = (VAR_18 ^ VAR_17) & VAR_17;
  VAR_19 &= VAR_16->fault_mask;

  if (VAR_19 & VAR_0) {
   FUNC_5(VAR_15,
    FUNC_0(VAR_5,
     0,
     VAR_9,
     VAR_7),
   FUNC_3(VAR_15));
  }

  if (VAR_19 & VAR_3) {
   FUNC_5(VAR_15,
    FUNC_0(VAR_5,
     0,
     VAR_9,
     VAR_6),
    FUNC_3(VAR_15));
  }

  if (VAR_19 & VAR_1) {
   FUNC_5(VAR_15,
    FUNC_0(VAR_10,
     0,
     VAR_8,
     VAR_7),
    FUNC_3(VAR_15));
  }

  VAR_18 = VAR_17;
  VAR_17 = FUNC_1(VAR_15, VAR_4);


  if (VAR_17 & VAR_2)
   FUNC_6(1000);

 } while (VAR_17 & VAR_2);


 return VAR_11;
}
