
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct replicator_drvdata {scalar_t__ base; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct replicator_drvdata *VAR_3,
         int VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 u32 VAR_7;

 switch (VAR_5) {
 case 0:
  VAR_7 = VAR_1;
  break;
 case 1:
  VAR_7 = VAR_2;
  break;
 default:
  FUNC_2(1);
  return -VAR_0;
 }

 FUNC_1(VAR_3->base);

 if ((FUNC_4(VAR_3->base + VAR_1) == 0xff) &&
     (FUNC_4(VAR_3->base + VAR_2) == 0xff))
  VAR_6 = FUNC_3(VAR_3->base);


 if (!VAR_6)
  FUNC_5(0x00, VAR_3->base + VAR_7);
 FUNC_0(VAR_3->base);

 return VAR_6;
}
