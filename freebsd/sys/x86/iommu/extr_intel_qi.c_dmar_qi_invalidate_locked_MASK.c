
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_unit {int dummy; } ;
struct dmar_qi_genseq {int dummy; } ;
struct dmar_domain {int domain; struct dmar_unit* dmar; } ;
typedef int dmar_gaddr_t ;


 int FUNC_0 (struct dmar_unit*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct dmar_unit*,int,int,int*) ;
 int FUNC_3 (struct dmar_unit*) ;
 int FUNC_4 (struct dmar_unit*,int,int) ;
 int FUNC_5 (struct dmar_unit*,struct dmar_qi_genseq*,int) ;
 int FUNC_6 (struct dmar_unit*,int) ;

void
FUNC_7(struct dmar_domain *VAR_4, dmar_gaddr_t VAR_5,
    dmar_gaddr_t VAR_6, struct dmar_qi_genseq *VAR_7, bool VAR_8)
{
 struct dmar_unit *VAR_9;
 dmar_gaddr_t VAR_10;
 int VAR_11;

 VAR_9 = VAR_4->dmar;
 FUNC_0(VAR_9);
 for (; VAR_6 > 0; VAR_5 += VAR_10, VAR_6 -= VAR_10) {
  VAR_11 = FUNC_2(VAR_9, VAR_5, VAR_6, &VAR_10);
  FUNC_6(VAR_9, 1);
  FUNC_4(VAR_9, VAR_2 |
      VAR_3 | VAR_1 |
      VAR_0 |
      FUNC_1(VAR_4->domain),
      VAR_5 | VAR_11);
 }
 FUNC_5(VAR_9, VAR_7, VAR_8);
 FUNC_3(VAR_9);
}
