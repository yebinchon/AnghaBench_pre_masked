
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct replicator_drvdata {scalar_t__ base; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct replicator_drvdata *VAR_2,
           int VAR_3, int VAR_4)
{
 u32 VAR_5;

 switch (VAR_4) {
 case 0:
  VAR_5 = VAR_0;
  break;
 case 1:
  VAR_5 = VAR_1;
  break;
 default:
  FUNC_2(1);
  return;
 }

 FUNC_1(VAR_2->base);


 FUNC_5(0xff, VAR_2->base + VAR_5);

 if ((FUNC_4(VAR_2->base + VAR_0) == 0xff) &&
     (FUNC_4(VAR_2->base + VAR_1) == 0xff))
  FUNC_3(VAR_2->base);
 FUNC_0(VAR_2->base);
}
