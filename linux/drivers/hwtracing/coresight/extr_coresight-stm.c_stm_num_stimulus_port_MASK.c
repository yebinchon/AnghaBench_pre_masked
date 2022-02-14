
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm_drvdata {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct stm_drvdata *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2->base + VAR_0);




 VAR_3 &= 0x1ffff;
 if (!VAR_3)
  VAR_3 = VAR_1;
 return VAR_3;
}
