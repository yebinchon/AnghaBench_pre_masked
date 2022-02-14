
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct armada_crtc {int * clk; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct armada_crtc *VAR_0)
{
 if (VAR_0->clk) {
  FUNC_0(VAR_0->clk);
  VAR_0->clk = ((void*)0);
 }
}
