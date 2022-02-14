
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmac_fan_le {struct pmac_fan* fan; } ;
struct pmac_fan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct pmac_fan_le*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct pmac_fan_le* FUNC_1 (int,int ,int) ;

void
FUNC_2(struct pmac_fan *VAR_5)
{
 struct pmac_fan_le *VAR_6;

 VAR_6 = FUNC_1(sizeof(struct pmac_fan_le), VAR_0,
     VAR_2 | VAR_1);
 VAR_6->fan = VAR_5;

 FUNC_0(&VAR_4, VAR_6, VAR_3);
}
