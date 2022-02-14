
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edp_phy {scalar_t__ base; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 () ;

void FUNC_4(struct edp_phy *VAR_5, int VAR_6)
{
 FUNC_0("enable=%d", VAR_6);
 if (VAR_6) {

  FUNC_1(VAR_5->base + VAR_2,
   VAR_0 | VAR_1);

  FUNC_3();
  FUNC_2(500, 1000);
  FUNC_1(VAR_5->base + VAR_2, 0x000);
  FUNC_1(VAR_5->base + VAR_4, 0x3f);
  FUNC_1(VAR_5->base + VAR_3, 0x1);
 } else {
  FUNC_1(VAR_5->base + VAR_4, 0xc0);
 }
}
