
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct funnel_drvdata {scalar_t__ base; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct funnel_drvdata *VAR_2,
          int VAR_3)
{
 u32 VAR_4;

 FUNC_1(VAR_2->base);

 VAR_4 = FUNC_3(VAR_2->base + VAR_1);
 VAR_4 &= ~(1 << VAR_3);
 FUNC_4(VAR_4, VAR_2->base + VAR_1);


 if (!(VAR_4 & VAR_0))
  FUNC_2(VAR_2->base);

 FUNC_0(VAR_2->base);
}
