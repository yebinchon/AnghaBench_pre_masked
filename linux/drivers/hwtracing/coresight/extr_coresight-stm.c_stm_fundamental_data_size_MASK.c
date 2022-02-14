
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm_drvdata {scalar_t__ base; } ;


 scalar_t__ FUNC_0 (int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_3(struct stm_drvdata *VAR_2)
{
 u32 VAR_3;

 if (!FUNC_1(VAR_0))
  return 4;

 VAR_3 = FUNC_2(VAR_2->base + VAR_1);






 return FUNC_0(VAR_3, 12, 15) ? 8 : 4;
}
