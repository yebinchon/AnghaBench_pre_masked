
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repaper_epd {scalar_t__ discharge; int spi; scalar_t__ border; scalar_t__ panel_on; scalar_t__ reset; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct repaper_epd *VAR_0)
{

 FUNC_0(VAR_0->reset, 0);
 FUNC_0(VAR_0->panel_on, 0);
 if (VAR_0->border)
  FUNC_0(VAR_0->border, 0);


 FUNC_2(VAR_0->spi);


 FUNC_0(VAR_0->discharge, 1);
 FUNC_1(150);
 FUNC_0(VAR_0->discharge, 0);
}
