
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct omap3_l3 {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int ,int ,char*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(struct omap3_l3 *VAR_2,
     u64 VAR_3, int VAR_4)
{
 u8 VAR_5 = FUNC_3(VAR_3);
 u8 VAR_6 = FUNC_4(VAR_3);
 u8 VAR_7 = VAR_3 & VAR_1;
 u32 VAR_8 = FUNC_2(VAR_4);

 FUNC_6("%s seen by %s %s at address %x\n",
   FUNC_1(VAR_5),
   FUNC_5(VAR_6),
   VAR_7 ? "Multiple Errors" : "", VAR_8);
 FUNC_0(1);

 return VAR_0;
}
