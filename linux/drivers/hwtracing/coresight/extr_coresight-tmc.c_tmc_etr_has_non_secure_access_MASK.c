
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tmc_drvdata {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline bool FUNC_1(struct tmc_drvdata *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2->base + VAR_0);

 return (VAR_3 & VAR_1) == 0x3;
}
