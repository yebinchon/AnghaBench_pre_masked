
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbus_host {int clk; int dat; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct cbus_host *VAR_0, unsigned VAR_1)
{
 FUNC_0(VAR_0->dat, VAR_1 ? 1 : 0);
 FUNC_0(VAR_0->clk, 1);
 FUNC_0(VAR_0->clk, 0);
}
