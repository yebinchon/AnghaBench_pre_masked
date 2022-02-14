
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_timer {scalar_t__ base; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct imx_timer *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_0(VAR_2->base + VAR_1);
 FUNC_1(VAR_3 & ~VAR_0, VAR_2->base + VAR_1);
}
