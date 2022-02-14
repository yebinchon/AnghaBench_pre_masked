
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbus_host {int dummy; } ;


 int FUNC_0 (struct cbus_host*) ;

__attribute__((used)) static int FUNC_1(struct cbus_host *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 16; VAR_2 > 0; VAR_2--) {
  int VAR_3 = FUNC_0(VAR_0);

  if (VAR_3 < 0)
   return VAR_3;

  if (VAR_3)
   VAR_1 |= 1 << (VAR_2 - 1);
 }
 return VAR_1;
}
