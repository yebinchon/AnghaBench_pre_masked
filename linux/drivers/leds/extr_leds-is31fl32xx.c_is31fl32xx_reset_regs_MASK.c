
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct is31fl32xx_priv {struct is31fl32xx_chipdef* cdef; } ;
struct is31fl32xx_chipdef {scalar_t__ reset_reg; int (* reset_func ) (struct is31fl32xx_priv*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct is31fl32xx_priv*,scalar_t__,int ) ;
 int FUNC_1 (struct is31fl32xx_priv*) ;

__attribute__((used)) static int FUNC_2(struct is31fl32xx_priv *VAR_1)
{
 const struct is31fl32xx_chipdef *VAR_2 = VAR_1->cdef;
 int VAR_3;

 if (VAR_2->reset_reg != VAR_0) {
  VAR_3 = FUNC_0(VAR_1, VAR_2->reset_reg, 0);
  if (VAR_3)
   return VAR_3;
 }

 if (VAR_2->reset_func)
  return VAR_2->reset_func(VAR_1);

 return 0;
}
