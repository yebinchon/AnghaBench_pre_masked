
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acc_t {scalar_t__ accchar; int** map; } ;
typedef int FILE ;


 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(FILE *VAR_3, int VAR_4, struct acc_t *VAR_5)
{
 int VAR_6;
 int VAR_7;

 if (VAR_5->accchar == 0)
  return;


 FUNC_0(VAR_3, "  %-6s", VAR_1[VAR_4]);
 if (FUNC_1(VAR_5->accchar) && FUNC_2(VAR_5->accchar))
  FUNC_0(VAR_3, "'%c'  ", VAR_5->accchar);
 else if (VAR_2)
  FUNC_0(VAR_3, "0x%02x ", VAR_5->accchar);
 else
  FUNC_0(VAR_3, "%03d  ", VAR_5->accchar);

 for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7) {
  VAR_6 = VAR_5->map[VAR_7][0];
  if (VAR_6 == 0)
   break;
  if ((VAR_7 > 0) && ((VAR_7 % 4) == 0))
   FUNC_0(VAR_3, "\n             ");
  if (FUNC_1(VAR_6) && FUNC_2(VAR_6))
   FUNC_0(VAR_3, "( '%c' ", VAR_6);
  else if (VAR_2)
   FUNC_0(VAR_3, "(0x%02x ", VAR_6);
  else
   FUNC_0(VAR_3, "( %03d ", VAR_6);
  VAR_6 = VAR_5->map[VAR_7][1];
  if (FUNC_1(VAR_6) && FUNC_2(VAR_6))
   FUNC_0(VAR_3, "'%c' ) ", VAR_6);
  else if (VAR_2)
   FUNC_0(VAR_3, "0x%02x) ", VAR_6);
  else
   FUNC_0(VAR_3, "%03d ) ", VAR_6);
 }
 FUNC_0(VAR_3, "\n");
}
