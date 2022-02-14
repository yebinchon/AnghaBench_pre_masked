
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct is31fl32xx_priv {struct is31fl32xx_chipdef* cdef; } ;
struct is31fl32xx_chipdef {scalar_t__ shutdown_reg; int (* sw_shutdown_func ) (struct is31fl32xx_priv*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct is31fl32xx_priv*,scalar_t__,int ) ;
 int FUNC_1 (struct is31fl32xx_priv*,int) ;

__attribute__((used)) static int FUNC_2(struct is31fl32xx_priv *VAR_3,
     bool VAR_4)
{
 const struct is31fl32xx_chipdef *VAR_5 = VAR_3->cdef;
 int VAR_6;

 if (VAR_5->shutdown_reg != VAR_0) {
  u8 VAR_7 = VAR_4 ? VAR_2 :
        VAR_1;
  VAR_6 = FUNC_0(VAR_3, VAR_5->shutdown_reg, VAR_7);
  if (VAR_6)
   return VAR_6;
 }

 if (VAR_5->sw_shutdown_func)
  return VAR_5->sw_shutdown_func(VAR_3, VAR_4);

 return 0;
}
