
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_unit {int hw_cap; int hw_gcmd; int unit; } ;


 int FUNC_0 (struct dmar_unit*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct dmar_unit*,int ) ;
 int FUNC_4 (struct dmar_unit*,int ,int) ;

int
FUNC_5(struct dmar_unit *VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_5);




 FUNC_2((VAR_5->hw_cap & VAR_0) != 0,
     ("dmar%d: no RWBF", VAR_5->unit));

 FUNC_4(VAR_5, VAR_1, VAR_5->hw_gcmd | VAR_2);
 FUNC_1(((FUNC_3(VAR_5, VAR_3) & VAR_4)
     != 0));
 return (VAR_6);
}
