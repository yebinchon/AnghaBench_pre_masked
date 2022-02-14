
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct dmar_unit {int irte_cnt; int hw_gcmd; scalar_t__ irt_phys; } ;


 int FUNC_0 (struct dmar_unit*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct dmar_unit*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (struct dmar_unit*,int ) ;
 int FUNC_5 (struct dmar_unit*,int ,int) ;
 int FUNC_6 (struct dmar_unit*,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;

int
FUNC_9(struct dmar_unit *VAR_7)
{
 uint64_t VAR_8, VAR_9;
 int VAR_10;

 FUNC_0(VAR_7);
 VAR_8 = VAR_7->irt_phys;
 if (FUNC_2(VAR_7))
  VAR_8 |= VAR_4;
 VAR_9 = FUNC_7(VAR_7->irte_cnt) - 2;
 FUNC_3(VAR_7->irte_cnt >= 2 && VAR_9 <= VAR_6 &&
     FUNC_8(VAR_7->irte_cnt),
     ("IRTA_REG_S overflow %x", VAR_7->irte_cnt));
 VAR_8 |= VAR_9;
 FUNC_6(VAR_7, VAR_5, VAR_8);
 FUNC_5(VAR_7, VAR_0, VAR_7->hw_gcmd | VAR_1);
 FUNC_1(((FUNC_4(VAR_7, VAR_3) & VAR_2)
     != 0));
 return (VAR_10);
}
