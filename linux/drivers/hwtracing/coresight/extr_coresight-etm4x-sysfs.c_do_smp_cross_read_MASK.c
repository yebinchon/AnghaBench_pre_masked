
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etmv4_reg {int addr; int data; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct etmv4_reg *VAR_1 = VAR_0;

 VAR_1->data = FUNC_0(VAR_1->addr);
}
