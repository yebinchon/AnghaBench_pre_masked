
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcd_unit {int drive; } ;


 int FUNC_0 (struct pcd_unit*,char*) ;
 int FUNC_1 (struct pcd_unit*) ;

__attribute__((used)) static int FUNC_2(struct pcd_unit *VAR_0, int VAR_1, char *VAR_2)
{
 if (VAR_1 == -1) {
  for (VAR_0->drive = 0; VAR_0->drive <= 1; VAR_0->drive++)
   if (!FUNC_1(VAR_0) && !FUNC_0(VAR_0, VAR_2))
    return 0;
 } else {
  VAR_0->drive = VAR_1;
  if (!FUNC_1(VAR_0) && !FUNC_0(VAR_0, VAR_2))
   return 0;
 }
 return -1;
}
