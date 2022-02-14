
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sht15_data {int val_status; int val_humid; } ;


 int VAR_0 ;
 int FUNC_0 (struct sht15_data*) ;

__attribute__((used)) static inline int FUNC_1(struct sht15_data *VAR_1)
{
 int VAR_2;
 int VAR_3 = FUNC_0(VAR_1);
 int VAR_4, VAR_5;
 int VAR_6;
 const int VAR_7 = -4;

 if (VAR_1->val_status & VAR_0) {
  VAR_4 = 648000;
  VAR_5 = -7200;
  VAR_6 = 1280;
 } else {
  VAR_4 = 40500;
  VAR_5 = -28;
  VAR_6 = 80;
 }

 VAR_2 = VAR_7 * 1000
  + VAR_4 * VAR_1->val_humid / 1000
  + (VAR_1->val_humid * VAR_1->val_humid * VAR_5) / 10000;
 return (VAR_3 - 25000) * (10000 + VAR_6 * VAR_1->val_humid)
  / 1000000 + VAR_2;
}
