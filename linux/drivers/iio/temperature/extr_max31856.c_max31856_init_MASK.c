
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max31856_data {int thermocouple_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct max31856_data*,int ,int *,int) ;
 int FUNC_1 (struct max31856_data*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct max31856_data *VAR_7)
{
 int VAR_8;
 u8 VAR_9, VAR_10;





 VAR_8 = FUNC_0(VAR_7, VAR_4, &VAR_9, 1);
 if (VAR_8)
  return VAR_8;

 VAR_9 &= ~VAR_1;
 VAR_8 = FUNC_1(VAR_7, VAR_4, VAR_9);
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_0(VAR_7, VAR_5, &VAR_10, 1);
 if (VAR_8)
  return VAR_8;

 VAR_10 &= ~VAR_6;
 VAR_10 |= VAR_7->thermocouple_type;
 VAR_8 = FUNC_1(VAR_7, VAR_5, VAR_10);
 if (VAR_8)
  return VAR_8;






 VAR_9 &= ~VAR_3;
 VAR_9 |= VAR_2;


 VAR_9 &= ~VAR_0;
 VAR_9 |= VAR_1;

 return FUNC_1(VAR_7, VAR_4, VAR_9);
}
