
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg {int pi; int name; } ;
typedef int got ;


 int FUNC_0 (struct pg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct pg*,int) ;
 int FUNC_7 (struct pg*) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (struct pg*,int,int) ;

__attribute__((used)) static int FUNC_9(struct pg *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 int VAR_8[5] = { 1, 1, 1, 0x14, 0xeb };
 int VAR_9[5];

 FUNC_3(VAR_4->pi);
 FUNC_8(VAR_4, 6, FUNC_0(VAR_4));
 FUNC_8(VAR_4, 7, 8);

 FUNC_2(20 * VAR_0 / 1000);

 VAR_6 = 0;
 while ((VAR_6++ < VAR_1) && (FUNC_7(VAR_4) & VAR_2))
  FUNC_2(1);

 for (VAR_5 = 0; VAR_5 < 5; VAR_5++)
  VAR_9[VAR_5] = FUNC_6(VAR_4, VAR_5 + 1);

 VAR_7 = FUNC_1(VAR_8, VAR_9, sizeof(VAR_9)) ? -1 : 0;

 if (VAR_3) {
  FUNC_5("%s: Reset (%d) signature = ", VAR_4->name, VAR_6);
  for (VAR_5 = 0; VAR_5 < 5; VAR_5++)
   FUNC_5("%3x", VAR_9[VAR_5]);
  if (VAR_7)
   FUNC_5(" (incorrect)");
  FUNC_5("\n");
 }

 FUNC_4(VAR_4->pi);
 return VAR_7;
}
