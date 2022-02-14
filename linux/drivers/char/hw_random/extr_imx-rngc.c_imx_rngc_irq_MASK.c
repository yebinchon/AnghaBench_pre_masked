
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx_rngc {int rng_op_done; scalar_t__ base; void* err_reg; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct imx_rngc*) ;
 void* FUNC_2 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct imx_rngc *VAR_7 = (struct imx_rngc *)VAR_6;
 u32 VAR_8;





 VAR_8 = FUNC_2(VAR_7->base + VAR_2);
 VAR_7->err_reg = FUNC_2(VAR_7->base + VAR_1);

 FUNC_1(VAR_7);

 if (VAR_8 & (VAR_3 | VAR_4))
  FUNC_0(&VAR_7->rng_op_done);

 return VAR_0;
}
