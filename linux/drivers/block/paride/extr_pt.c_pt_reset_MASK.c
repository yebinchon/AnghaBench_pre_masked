
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_unit {int name; struct pi_adapter* pi; } ;
struct pi_adapter {int dummy; } ;


 int FUNC_0 (struct pt_unit*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pi_adapter*) ;
 int FUNC_2 (struct pi_adapter*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct pi_adapter*,int) ;
 int FUNC_6 (struct pi_adapter*) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (struct pi_adapter*,int,int) ;

__attribute__((used)) static int FUNC_8(struct pt_unit *VAR_4)
{
 struct pi_adapter *VAR_5 = VAR_4->pi;
 int VAR_6, VAR_7, VAR_8;
 int VAR_9[5] = { 1, 1, 1, 0x14, 0xeb };

 FUNC_1(VAR_5);
 FUNC_7(VAR_5, 6, FUNC_0(VAR_4));
 FUNC_7(VAR_5, 7, 8);

 FUNC_4(20 * VAR_0 / 1000);

 VAR_7 = 0;
 while ((VAR_7++ < VAR_1) && (FUNC_6(VAR_5) & VAR_2))
  FUNC_4(VAR_0 / 10);

 VAR_8 = 1;
 for (VAR_6 = 0; VAR_6 < 5; VAR_6++)
  VAR_8 &= (FUNC_5(VAR_5, VAR_6 + 1) == VAR_9[VAR_6]);

 if (VAR_3) {
  FUNC_3("%s: Reset (%d) signature = ", VAR_4->name, VAR_7);
  for (VAR_6 = 0; VAR_6 < 5; VAR_6++)
   FUNC_3("%3x", FUNC_5(VAR_5, VAR_6 + 1));
  if (!VAR_8)
   FUNC_3(" (incorrect)");
  FUNC_3("\n");
 }

 FUNC_2(VAR_5);
 return VAR_8 - 1;
}
