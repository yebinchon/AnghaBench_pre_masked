
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_entry {int operation; int* args; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct log_entry* VAR_4 ;
 int FUNC_0 (char*,...) ;

void
FUNC_1(void)
{
 struct log_entry *VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;

 FUNC_0("LOG DUMP (%d total operations):\n", VAR_2);
 if (VAR_2 < VAR_0) {
  VAR_6 = 0;
  VAR_7 = VAR_2;
 } else {
  VAR_6 = VAR_3;
  VAR_7 = VAR_0;
 }

 VAR_9 = VAR_6 + 1 + (VAR_2/VAR_0)*VAR_0;
 for ( ; VAR_7 > 0; VAR_7--) {
  VAR_5 = &VAR_4[VAR_6];

  if (VAR_5->operation == 135 ||
      VAR_5->operation == 134) {
   switch (VAR_5->operation) {
   case 135:
    FUNC_0("\t\tCLOSE/OPEN\n");
    break;
   case 134:
    FUNC_0("\t\tMS_INVALIDATE\n");
    break;
   }
   VAR_6++;
   if (VAR_6 == VAR_0)
    VAR_6 = 0;
   continue;
  }

  FUNC_0("%d(%d mod 256): ", VAR_9, VAR_9%256);
  switch (VAR_5->operation) {
  case 133:
   FUNC_0("MAPREAD\t0x%x thru 0x%x\t(0x%x bytes)",
       VAR_5->args[0], VAR_5->args[0] + VAR_5->args[1] - 1,
       VAR_5->args[1]);
   if (VAR_1 >= VAR_5->args[0] && VAR_1 <
           VAR_5->args[0] + VAR_5->args[1])
    FUNC_0("\t***RRRR***");
   break;
  case 132:
   FUNC_0("MAPWRITE 0x%x thru 0x%x\t(0x%x bytes)",
       VAR_5->args[0], VAR_5->args[0] + VAR_5->args[1] - 1,
       VAR_5->args[1]);
   if (VAR_1 >= VAR_5->args[0] && VAR_1 <
           VAR_5->args[0] + VAR_5->args[1])
    FUNC_0("\t******WWWW");
   break;
  case 131:
   FUNC_0("READ\t0x%x thru 0x%x\t(0x%x bytes)",
       VAR_5->args[0], VAR_5->args[0] + VAR_5->args[1] - 1,
       VAR_5->args[1]);
   if (VAR_1 >= VAR_5->args[0] &&
       VAR_1 < VAR_5->args[0] + VAR_5->args[1])
    FUNC_0("\t***RRRR***");
   break;
  case 128:
   {
    int VAR_10 = VAR_5->args[0];
    int VAR_11 = VAR_5->args[1];
    int VAR_12 = VAR_5->args[2];

    FUNC_0("WRITE\t0x%x thru 0x%x\t(0x%x bytes)",
        VAR_10, VAR_10 + VAR_11 - 1,
        VAR_11);
    if (VAR_10 > VAR_12)
     FUNC_0(" HOLE");
    else if (VAR_10 + VAR_11 > VAR_12)
     FUNC_0(" EXTEND");
    if ((VAR_1 >= VAR_10 || VAR_1 >=VAR_12) &&
        VAR_1 < VAR_10 + VAR_11)
     FUNC_0("\t***WWWW");
   }
   break;
  case 129:
   VAR_8 = VAR_5->args[0] < VAR_5->args[1];
   FUNC_0("TRUNCATE %s\tfrom 0x%x to 0x%x",
       VAR_8 ? "DOWN" : "UP", VAR_5->args[1], VAR_5->args[0]);
   if (VAR_1 >= VAR_5->args[!VAR_8] &&
       VAR_1 < VAR_5->args[!!VAR_8])
    FUNC_0("\t******WWWW");
   break;
  case 130:
   FUNC_0("SKIPPED (no operation)");
   break;
  default:
   FUNC_0("BOGUS LOG ENTRY (operation code = %d)!",
       VAR_5->operation);
  }
  FUNC_0("\n");
  VAR_9++;
  VAR_6++;
  if (VAR_6 == VAR_0)
   VAR_6 = 0;
 }
}
