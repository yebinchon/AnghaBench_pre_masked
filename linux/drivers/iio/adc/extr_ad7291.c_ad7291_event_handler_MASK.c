
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iio_dev {int dummy; } ;
struct ad7291_chip_info {int command; } ;
typedef int s64 ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,int,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_3 (struct ad7291_chip_info*,int ,int*) ;
 int FUNC_4 (struct ad7291_chip_info*,int ,int) ;
 int FUNC_5 (struct iio_dev*) ;
 struct ad7291_chip_info* FUNC_6 (void*) ;
 int FUNC_7 (struct iio_dev*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_15, void *VAR_16)
{
 struct iio_dev *VAR_17 = VAR_16;
 struct ad7291_chip_info *VAR_18 = FUNC_6(VAR_16);
 u16 VAR_19, VAR_20;
 u16 VAR_21;
 int VAR_22;
 s64 VAR_23 = FUNC_5(VAR_17);

 if (FUNC_3(VAR_18, VAR_2, &VAR_19))
  return VAR_14;

 if (FUNC_3(VAR_18, VAR_7, &VAR_20))
  return VAR_14;

 if (!(VAR_19 || VAR_20))
  return VAR_14;

 VAR_21 = VAR_18->command | VAR_0;
 FUNC_4(VAR_18, VAR_1, VAR_21);

 VAR_21 = VAR_18->command & ~VAR_0;
 FUNC_4(VAR_18, VAR_1, VAR_21);


 if ((VAR_19 & VAR_6) || (VAR_19 & VAR_4))
  FUNC_7(VAR_17,
          FUNC_2(VAR_12,
          0,
          VAR_11,
          VAR_9),
          VAR_23);
 if ((VAR_19 & VAR_5) || (VAR_19 & VAR_3))
  FUNC_7(VAR_17,
          FUNC_2(VAR_12,
          0,
          VAR_11,
          VAR_10),
          VAR_23);

 for (VAR_22 = 0; VAR_22 < VAR_8; VAR_22++) {
  if (VAR_20 & FUNC_1(VAR_22))
   FUNC_7(VAR_17,
           FUNC_2(VAR_13,
           VAR_22,
           VAR_11,
           VAR_9),
           VAR_23);
  if (VAR_20 & FUNC_0(VAR_22))
   FUNC_7(VAR_17,
           FUNC_2(VAR_13,
           VAR_22,
           VAR_11,
           VAR_10),
           VAR_23);
 }

 return VAR_14;
}
