
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct athregrec {int reg; int val; } ;


 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct athregrec *VAR_0)
{
        FUNC_0("read\t%.8x = %.8x\n", VAR_0->reg, VAR_0->val);
}
