
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcd_unit {int drive; int pi; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pcd_unit*,int,int,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*,int ,char*) ;
 int FUNC_5 (struct pcd_unit*,int) ;
 int FUNC_6 (struct pcd_unit*,int,int) ;

__attribute__((used)) static int FUNC_7(struct pcd_unit *VAR_2, char *VAR_3, int VAR_4, char *VAR_5)
{
 FUNC_1(VAR_2->pi);

 FUNC_6(VAR_2, 6, 0xa0 + 0x10 * VAR_2->drive);

 if (FUNC_0(VAR_2, VAR_0 | VAR_1, 0, VAR_5, "before command")) {
  FUNC_2(VAR_2->pi);
  return -1;
 }

 FUNC_6(VAR_2, 4, VAR_4 % 256);
 FUNC_6(VAR_2, 5, VAR_4 / 256);
 FUNC_6(VAR_2, 7, 0xa0);

 if (FUNC_0(VAR_2, VAR_0, VAR_1, VAR_5, "command DRQ")) {
  FUNC_2(VAR_2->pi);
  return -1;
 }

 if (FUNC_5(VAR_2, 2) != 1) {
  FUNC_4("%s: %s: command phase error\n", VAR_2->name, VAR_5);
  FUNC_2(VAR_2->pi);
  return -1;
 }

 FUNC_3(VAR_2->pi, VAR_3, 12);

 return 0;
}
