
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx_rngc {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct imx_rngc *VAR_6)
{
 u32 VAR_7, VAR_8;


 VAR_7 = FUNC_0(VAR_6->base + VAR_3);
 VAR_7 |= VAR_4 | VAR_5;
 FUNC_1(VAR_7, VAR_6->base + VAR_3);






 VAR_8 = FUNC_0(VAR_6->base + VAR_2);
 VAR_8 |= VAR_1 | VAR_0;
 FUNC_1(VAR_8, VAR_6->base + VAR_2);
}
