
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bcm_kona_i2c_dev {int done; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_8, void *VAR_9)
{
 struct bcm_kona_i2c_dev *VAR_10 = VAR_9;
 uint32_t VAR_11 = FUNC_1(VAR_10->base + VAR_3);

 if ((VAR_11 & ~VAR_4) == 0)
  return VAR_1;


 if (VAR_11 & VAR_2)
  FUNC_2(VAR_6 | VAR_5,
         VAR_10->base + VAR_7);

 FUNC_2(VAR_11 & ~VAR_4, VAR_10->base + VAR_3);
 FUNC_0(&VAR_10->done);

 return VAR_0;
}
