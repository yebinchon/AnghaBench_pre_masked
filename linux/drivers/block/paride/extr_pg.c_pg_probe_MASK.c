
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg {int drive; } ;


 int FUNC_0 (struct pg*,int) ;
 int FUNC_1 (struct pg*) ;

__attribute__((used)) static int FUNC_2(struct pg *VAR_0)
{
 if (VAR_0->drive == -1) {
  for (VAR_0->drive = 0; VAR_0->drive <= 1; VAR_0->drive++)
   if (!FUNC_1(VAR_0))
    return FUNC_0(VAR_0, 1);
 } else {
  if (!FUNC_1(VAR_0))
   return FUNC_0(VAR_0, 1);
 }
 return -1;
}
