
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sysmmu_iova_t ;
struct sysmmu_drvdata {scalar_t__ sfrbase; int version; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sysmmu_drvdata *VAR_7,
    sysmmu_iova_t VAR_8, unsigned int VAR_9)
{
 unsigned int VAR_10;

 if (FUNC_0(VAR_7->version) < 5) {
  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
   FUNC_1((VAR_8 & VAR_5) | 1,
         VAR_7->sfrbase + VAR_0);
   VAR_8 += VAR_6;
  }
 } else {
  if (VAR_9 == 1) {
   FUNC_1((VAR_8 & VAR_5) | 1,
         VAR_7->sfrbase + VAR_2);
  } else {
   FUNC_1((VAR_8 & VAR_5),
         VAR_7->sfrbase + VAR_4);
   FUNC_1((VAR_8 & VAR_5) + (VAR_9 - 1) * VAR_6,
         VAR_7->sfrbase + VAR_1);
   FUNC_1(1, VAR_7->sfrbase + VAR_3);
  }
 }
}
