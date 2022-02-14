
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_unit {int qi_enabled; } ;


 int FUNC_0 (struct dmar_unit*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct dmar_unit*,scalar_t__) ;
 int FUNC_4 (struct dmar_unit*,scalar_t__,int) ;

int
FUNC_5(struct dmar_unit *VAR_4)
{
 int VAR_5;





 FUNC_0(VAR_4);
 FUNC_2(!VAR_4->qi_enabled, ("QI enabled"));







 FUNC_4(VAR_4, VAR_3, VAR_1 | VAR_0);
 FUNC_1(((FUNC_3(VAR_4, VAR_3 + 4) & VAR_2)
     == 0));
 return (VAR_5);
}
