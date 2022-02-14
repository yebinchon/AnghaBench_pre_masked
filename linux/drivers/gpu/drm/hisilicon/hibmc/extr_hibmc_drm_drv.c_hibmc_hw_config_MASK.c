
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hibmc_drm_private {scalar_t__ mmio; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_1 ;
 unsigned int FUNC_1 (int) ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_2 (int) ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct hibmc_drm_private*,unsigned int) ;
 int FUNC_4 (struct hibmc_drm_private*,int ) ;
 unsigned int FUNC_5 (scalar_t__) ;
 int FUNC_6 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct hibmc_drm_private *VAR_6)
{
 unsigned int VAR_7;


 FUNC_4(VAR_6, VAR_5);


 VAR_7 = FUNC_5(VAR_6->mmio + VAR_0);
 VAR_7 &= ~VAR_1;
 VAR_7 &= ~VAR_2;
 VAR_7 |= FUNC_0(1);
 VAR_7 |= FUNC_1(1);

 FUNC_3(VAR_6, VAR_7);







 VAR_7 = FUNC_5(VAR_6->mmio + VAR_3);
 VAR_7 &= ~VAR_4;
 VAR_7 |= FUNC_2(0);
 FUNC_6(VAR_7, VAR_6->mmio + VAR_3);

 VAR_7 &= ~VAR_4;
 VAR_7 |= FUNC_2(1);

 FUNC_6(VAR_7, VAR_6->mmio + VAR_3);
}
