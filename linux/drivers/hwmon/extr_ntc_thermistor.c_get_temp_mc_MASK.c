
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntc_data {TYPE_1__* comp; } ;
struct TYPE_2__ {int temp_c; scalar_t__ ohm; } ;


 int FUNC_0 (struct ntc_data*,unsigned int,int*,int*) ;

__attribute__((used)) static int FUNC_1(struct ntc_data *VAR_0, unsigned int VAR_1)
{
 int VAR_2, VAR_3;
 int VAR_4;

 FUNC_0(VAR_0, VAR_1, &VAR_2, &VAR_3);
 if (VAR_2 == VAR_3) {

  VAR_4 = VAR_0->comp[VAR_2].temp_c * 1000;
 } else {
  VAR_4 = VAR_0->comp[VAR_2].temp_c * 1000 +
   ((VAR_0->comp[VAR_3].temp_c - VAR_0->comp[VAR_2].temp_c) *
    1000 * ((int)VAR_1 - (int)VAR_0->comp[VAR_2].ohm)) /
   ((int)VAR_0->comp[VAR_3].ohm - (int)VAR_0->comp[VAR_2].ohm);
 }
 return VAR_4;
}
