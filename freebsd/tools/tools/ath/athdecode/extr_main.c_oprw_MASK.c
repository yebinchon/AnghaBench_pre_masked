
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dumpreg {char* name; char* bits; } ;
struct athregrec {int threadid; int reg; int val; scalar_t__ op; } ;
typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct dumpreg* FUNC_3 (int) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (char,int *) ;
 int FUNC_6 (char*,int,char*,...) ;

__attribute__((used)) static void
FUNC_7(FILE *VAR_5, int VAR_6, struct athregrec *VAR_7)
{
 const struct dumpreg *VAR_8;
 char VAR_9[64];
 const char* VAR_10;
 int VAR_11;

 FUNC_4(VAR_5, "\n%05d: [%d] ", VAR_6, VAR_7->threadid);
 VAR_8 = FUNC_3(VAR_7->reg);
 if (VAR_8 != ((void*)0) && VAR_8->name != ((void*)0)) {
  FUNC_6(VAR_9, sizeof (VAR_9), "AR_%s (0x%x)", VAR_8->name, VAR_7->reg);
  VAR_10 = VAR_8->bits;
 } else if (FUNC_0(0) <= VAR_7->reg && VAR_7->reg < FUNC_0(128)) {
  FUNC_6(VAR_9, sizeof (VAR_9), "AR_KEYTABLE%u(%u) (0x%x)",
   ((VAR_7->reg - VAR_0) >> 2) & 7,
   (VAR_7->reg - VAR_0) >> 5, VAR_7->reg);
  VAR_10 = ((void*)0);






 } else if (FUNC_2(0) <= VAR_7->reg && VAR_7->reg < FUNC_2(32)) {
  FUNC_6(VAR_9, sizeof (VAR_9), "AR_RATE_DURATION(0x%x) (0x%x)",
   (VAR_7->reg - VAR_3) >> 2, VAR_7->reg);
  VAR_10 = ((void*)0);
 } else if (VAR_1 <= VAR_7->reg) {
  FUNC_6(VAR_9, sizeof (VAR_9), "AR_PHY(%u) (0x%x)",
   (VAR_7->reg - VAR_1) >> 2, VAR_7->reg);
  VAR_10 = ((void*)0);
 } else {
  FUNC_6(VAR_9, sizeof (VAR_9), "0x%x", VAR_7->reg);
  VAR_10 = ((void*)0);
 }
 FUNC_4(VAR_5, "%-30s %s 0x%x", VAR_9, VAR_7->op ? "<=" : "=>", VAR_7->val);
 if (VAR_10) {
  const char *VAR_12 = VAR_10;
  int VAR_13, VAR_14;

  for (VAR_13 = 0, VAR_12++; *VAR_12;) {
   VAR_14 = *VAR_12++;
   if (VAR_7->val & (1 << (VAR_14 - 1))) {
    FUNC_5(VAR_13 ? ',' : '<', VAR_5);
    for (; (VAR_14 = *VAR_12) > ' '; ++VAR_12)
     FUNC_5(VAR_14, VAR_5);
    VAR_13 = 1;
   } else
    for (; *VAR_12 > ' '; ++VAR_12)
     continue;
  }
  if (VAR_13)
   FUNC_5('>', VAR_5);
 }
}
