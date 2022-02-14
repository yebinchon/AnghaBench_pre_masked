
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcd_unit {int drive; int pi; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct pcd_unit*,int) ;
 int FUNC_5 (struct pcd_unit*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (struct pcd_unit*,int,int) ;

__attribute__((used)) static int FUNC_7(struct pcd_unit *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 int VAR_8[5] = { 1, 1, 1, 0x14, 0xeb };

 FUNC_1(VAR_4->pi);
 FUNC_6(VAR_4, 6, 0xa0 + 0x10 * VAR_4->drive);
 FUNC_6(VAR_4, 7, 8);

 FUNC_0(20 * VAR_0 / 1000);

 VAR_6 = 0;
 while ((VAR_6++ < VAR_2) && (FUNC_5(VAR_4) & VAR_1))
  FUNC_0(VAR_0 / 10);

 VAR_7 = 1;
 for (VAR_5 = 0; VAR_5 < 5; VAR_5++)
  VAR_7 &= (FUNC_4(VAR_4, VAR_5 + 1) == VAR_8[VAR_5]);

 if (VAR_3) {
  FUNC_3("%s: Reset (%d) signature = ", VAR_4->name, VAR_6);
  for (VAR_5 = 0; VAR_5 < 5; VAR_5++)
   FUNC_3("%3x", FUNC_4(VAR_4, VAR_5 + 1));
  if (!VAR_7)
   FUNC_3(" (incorrect)");
  FUNC_3("\n");
 }

 FUNC_2(VAR_4->pi);
 return VAR_7 - 1;
}
