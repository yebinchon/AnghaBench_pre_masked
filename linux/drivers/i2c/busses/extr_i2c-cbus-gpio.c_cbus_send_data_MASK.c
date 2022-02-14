
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbus_host {int dummy; } ;


 int FUNC_0 (struct cbus_host*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct cbus_host *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
 int VAR_3;

 for (VAR_3 = VAR_2; VAR_3 > 0; VAR_3--)
  FUNC_0(VAR_0, VAR_1 & (1 << (VAR_3 - 1)));
}
