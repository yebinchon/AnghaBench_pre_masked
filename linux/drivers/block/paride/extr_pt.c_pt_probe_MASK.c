
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_unit {int drive; } ;


 int FUNC_0 (struct pt_unit*) ;
 int FUNC_1 (struct pt_unit*) ;

__attribute__((used)) static int FUNC_2(struct pt_unit *VAR_0)
{
 if (VAR_0->drive == -1) {
  for (VAR_0->drive = 0; VAR_0->drive <= 1; VAR_0->drive++)
   if (!FUNC_1(VAR_0))
    return FUNC_0(VAR_0);
 } else {
  if (!FUNC_1(VAR_0))
   return FUNC_0(VAR_0);
 }
 return -1;
}
