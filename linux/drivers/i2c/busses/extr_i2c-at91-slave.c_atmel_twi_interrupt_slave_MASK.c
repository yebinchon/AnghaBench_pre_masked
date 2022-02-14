
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct at91_twi_dev {int slave; scalar_t__ base; } ;
typedef int irqreturn_t ;


 unsigned int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int const VAR_5 ;
 int VAR_6 ;
 unsigned int const VAR_7 ;
 unsigned int const VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned int const VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int const FUNC_0 (struct at91_twi_dev*,int ) ;
 int FUNC_1 (struct at91_twi_dev*,int ,unsigned int const) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_18, void *VAR_19)
{
 struct at91_twi_dev *VAR_20 = VAR_19;
 const unsigned VAR_21 = FUNC_0(VAR_20, VAR_6);
 const unsigned VAR_22 = VAR_21 & FUNC_0(VAR_20, VAR_3);
 u8 VAR_23;

 if (!VAR_22)
  return VAR_17;


 if (VAR_22 & VAR_7) {
  if (VAR_21 & VAR_8) {
   FUNC_2(VAR_20->slave,
     VAR_12, &VAR_23);
   FUNC_4(VAR_23, VAR_20->base + VAR_9);
   FUNC_1(VAR_20, VAR_2,
           VAR_10 | VAR_0);
  } else {
   FUNC_2(VAR_20->slave,
     VAR_15, &VAR_23);
   FUNC_1(VAR_20, VAR_2,
           VAR_5 | VAR_0);
  }
  FUNC_1(VAR_20, VAR_1, VAR_7);
 }


 if (VAR_22 & VAR_10) {
  FUNC_2(VAR_20->slave, VAR_11, &VAR_23);
  FUNC_4(VAR_23, VAR_20->base + VAR_9);
 }


 if (VAR_22 & VAR_5) {
  VAR_23 = FUNC_3(VAR_20->base + VAR_4);
  FUNC_2(VAR_20->slave, VAR_14, &VAR_23);
 }


 if (VAR_22 & VAR_0) {
  FUNC_1(VAR_20, VAR_1,
          VAR_10 | VAR_5 | VAR_0);
  FUNC_1(VAR_20, VAR_2, VAR_7);
  FUNC_2(VAR_20->slave, VAR_13, &VAR_23);
 }

 return VAR_16;
}
