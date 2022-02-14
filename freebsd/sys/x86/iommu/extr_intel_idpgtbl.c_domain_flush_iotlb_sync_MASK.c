
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;
struct dmar_unit {int hw_cap; int unit; int hw_ecap; int qi_enabled; } ;
struct dmar_domain {int domain; struct dmar_unit* dmar; } ;
typedef int dmar_gaddr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct dmar_unit*) ;
 int FUNC_3 (struct dmar_unit*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (struct dmar_unit*,int,int,int*) ;
 int FUNC_6 (struct dmar_unit*,int,int) ;
 int FUNC_7 (struct dmar_unit*,int,int) ;

void
FUNC_8(struct dmar_domain *VAR_6, dmar_gaddr_t VAR_7,
    dmar_gaddr_t VAR_8)
{
 struct dmar_unit *VAR_9;
 dmar_gaddr_t VAR_10;
 uint64_t VAR_11;
 int VAR_12, VAR_13;

 VAR_9 = VAR_6->dmar;
 FUNC_4(!VAR_9->qi_enabled, ("dmar%d: sync iotlb flush call",
     VAR_9->unit));
 VAR_13 = FUNC_0(VAR_9->hw_ecap) * 16;
 FUNC_2(VAR_9);
 if ((VAR_9->hw_cap & VAR_0) == 0 || VAR_8 > 2 * 1024 * 1024) {
  VAR_11 = FUNC_7(VAR_9, VAR_4 |
      FUNC_1(VAR_6->domain), VAR_13);
  FUNC_4((VAR_11 & VAR_2) !=
      VAR_1,
      ("dmar%d: invalidation failed %jx", VAR_9->unit,
      (uintmax_t)VAR_11));
 } else {
  for (; VAR_8 > 0; VAR_7 += VAR_10, VAR_8 -= VAR_10) {
   VAR_12 = FUNC_5(VAR_9, VAR_7, VAR_8, &VAR_10);
   FUNC_6(VAR_9, VAR_13, VAR_7 | VAR_12);
   VAR_11 = FUNC_7(VAR_9,
       VAR_5 |
       FUNC_1(VAR_6->domain), VAR_13);
   FUNC_4((VAR_11 & VAR_2) !=
       VAR_1,
       ("dmar%d: PSI invalidation failed "
       "iotlbr 0x%jx base 0x%jx size 0x%jx am %d",
       VAR_9->unit, (uintmax_t)VAR_11,
       (uintmax_t)VAR_7, (uintmax_t)VAR_8, VAR_12));




   if ((VAR_11 & VAR_2) !=
       VAR_3)
    break;
  }
 }
 FUNC_3(VAR_9);
}
