
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdc100x_data {int* adc_int_us; } ;
struct TYPE_2__ {int shift; int mask; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int** VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct hdc100x_data*,int,int) ;

__attribute__((used)) static int FUNC_2(struct hdc100x_data *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = VAR_2[VAR_4].shift;
 int VAR_7 = -VAR_0;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1[VAR_4]); VAR_8++) {
  if (VAR_5 && VAR_5 == VAR_1[VAR_4][VAR_8]) {
   VAR_7 = FUNC_1(VAR_3,
    VAR_2[VAR_4].mask << VAR_6,
    VAR_8 << VAR_6);
   if (!VAR_7)
    VAR_3->adc_int_us[VAR_4] = VAR_5;
   break;
  }
 }

 return VAR_7;
}
