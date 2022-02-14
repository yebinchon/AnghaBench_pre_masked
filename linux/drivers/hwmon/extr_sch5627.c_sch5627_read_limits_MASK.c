
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sch5627_data {int* temp_max; int* temp_crit; int* fan_min; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sch5627_data *VAR_5)
{
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {




  VAR_7 = FUNC_0(VAR_5->addr,
            VAR_3[VAR_6]);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_5->temp_max[VAR_6] = VAR_7;

  VAR_7 = FUNC_0(VAR_5->addr,
            VAR_4[VAR_6]);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_5->temp_crit[VAR_6] = VAR_7;
 }
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_7 = FUNC_1(VAR_5->addr,
       VAR_2[VAR_6]);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_5->fan_min[VAR_6] = VAR_7;
 }

 return 0;
}
