
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dmar_unit {int unit; } ;


 int FUNC_0 (struct dmar_unit*) ;
 int FUNC_1 (struct dmar_unit*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct dmar_unit*,int ) ;
 int FUNC_4 (struct dmar_unit*,int ,int) ;

void
FUNC_5(struct dmar_unit *VAR_2)
{
 uint32_t VAR_3;

 FUNC_0(VAR_2);
 FUNC_2(FUNC_1(VAR_2), ("dmar%d: QI is not supported", VAR_2->unit));
 VAR_3 = FUNC_3(VAR_2, VAR_1);
 FUNC_4(VAR_2, VAR_1, VAR_3 | VAR_0);
}
