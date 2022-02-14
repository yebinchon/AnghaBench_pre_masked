
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isl29018_chip {int vcc_reg; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct isl29018_chip *VAR_1 = VAR_0;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->vcc_reg);
 if (VAR_2)
  FUNC_0("failed to disable isl29018's VCC regulator!\n");
}
