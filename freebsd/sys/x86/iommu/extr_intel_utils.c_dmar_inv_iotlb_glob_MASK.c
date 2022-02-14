
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_unit {int hw_ecap; int qi_enabled; } ;


 int FUNC_0 (struct dmar_unit*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (struct dmar_unit*,scalar_t__) ;
 int FUNC_5 (struct dmar_unit*,scalar_t__,int) ;

int
FUNC_6(struct dmar_unit *VAR_6)
{
 int VAR_7, VAR_8;

 FUNC_0(VAR_6);
 FUNC_3(!VAR_6->qi_enabled, ("QI enabled"));

 VAR_8 = 16 * FUNC_1(VAR_6->hw_ecap);

 FUNC_5(VAR_6, VAR_8 + VAR_5, VAR_3 |
     VAR_2 | VAR_0 | VAR_1);
 FUNC_2(((FUNC_4(VAR_6, VAR_8 + VAR_5 + 4) &
     VAR_4) == 0));
 return (VAR_7);
}
