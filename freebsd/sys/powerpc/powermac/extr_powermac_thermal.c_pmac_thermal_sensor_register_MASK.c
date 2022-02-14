
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmac_therm {int dummy; } ;
struct pmac_sens_le {scalar_t__ critical_count; scalar_t__ last_val; struct pmac_therm* sensor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct pmac_sens_le*,int ) ;
 int VAR_3 ;
 struct pmac_sens_le* FUNC_1 (int,int ,int) ;
 int VAR_4 ;

void
FUNC_2(struct pmac_therm *VAR_5)
{
 struct pmac_sens_le *VAR_6;

 VAR_6 = FUNC_1(sizeof(struct pmac_sens_le), VAR_0,
     VAR_2 | VAR_1);
 VAR_6->sensor = VAR_5;
 VAR_6->last_val = 0;
 VAR_6->critical_count = 0;

 FUNC_0(&VAR_4, VAR_6, VAR_3);
}
