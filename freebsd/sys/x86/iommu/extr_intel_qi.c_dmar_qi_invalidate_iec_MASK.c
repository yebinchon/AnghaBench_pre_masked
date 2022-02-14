
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct dmar_unit {scalar_t__ irte_cnt; } ;
struct dmar_qi_genseq {int dummy; } ;


 int FUNC_0 (struct dmar_unit*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (struct dmar_unit*) ;
 int FUNC_5 (struct dmar_unit*,int,int ) ;
 int FUNC_6 (struct dmar_unit*,struct dmar_qi_genseq*,int) ;
 int FUNC_7 (struct dmar_unit*,int) ;
 int FUNC_8 (struct dmar_unit*,struct dmar_qi_genseq*,int) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

void
FUNC_10(struct dmar_unit *VAR_2, u_int VAR_3, u_int VAR_4)
{
 struct dmar_qi_genseq VAR_5;
 u_int VAR_6, VAR_7;

 FUNC_0(VAR_2);
 FUNC_3(VAR_3 < VAR_2->irte_cnt && VAR_3 < VAR_3 + VAR_4 &&
     VAR_3 + VAR_4 <= VAR_2->irte_cnt,
     ("inv iec overflow %d %d %d", VAR_2->irte_cnt, VAR_3, VAR_4));
 for (; VAR_4 > 0; VAR_4 -= VAR_6, VAR_3 += VAR_6) {
  VAR_7 = FUNC_9(VAR_3 | VAR_4) - 1;
  VAR_6 = 1 << VAR_7;
  FUNC_7(VAR_2, 1);
  FUNC_5(VAR_2, VAR_1 |
      VAR_0 | FUNC_1(VAR_3) |
      FUNC_2(VAR_7), 0);
 }
 FUNC_7(VAR_2, 1);
 FUNC_6(VAR_2, &VAR_5, 1);
 FUNC_4(VAR_2);
 FUNC_8(VAR_2, &VAR_5, 1);
}
