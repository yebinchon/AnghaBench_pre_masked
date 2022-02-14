
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbus_host {int clk; int dat; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct cbus_host *VAR_0)
{
 int VAR_1;

 FUNC_1(VAR_0->clk, 1);
 VAR_1 = FUNC_0(VAR_0->dat);
 FUNC_1(VAR_0->clk, 0);
 return VAR_1;
}
