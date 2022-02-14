
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis_ts_data {scalar_t__ attn_gpio; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sis_ts_data*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct sis_ts_data *VAR_3 = VAR_2;

 do {
  FUNC_1(VAR_3);
 } while (VAR_3->attn_gpio && FUNC_0(VAR_3->attn_gpio));

 return VAR_0;
}
