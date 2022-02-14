
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int,char*,...) ;

__attribute__((used)) static void FUNC_7(int VAR_0, u16 VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);

 FUNC_6(2, "\tMTR%d=0x%x:  DIMMs are %sPresent\n",
   VAR_0, VAR_1, VAR_2 ? "" : "NOT ");
 if (!VAR_2)
  return;

 FUNC_6(2, "\t\tWIDTH: x%d\n", FUNC_5(VAR_1));
 FUNC_6(2, "\t\tNUMBANK: %d bank(s)\n", FUNC_4(VAR_1));
 FUNC_6(2, "\t\tNUMRANK: %s\n",
   FUNC_2(VAR_1) ? "double" : "single");
 FUNC_6(2, "\t\tNUMROW: %s\n",
   FUNC_3(VAR_1) == 0 ? "8,192 - 13 rows" :
   FUNC_3(VAR_1) == 1 ? "16,384 - 14 rows" :
   FUNC_3(VAR_1) == 2 ? "32,768 - 15 rows" :
   "reserved");
 FUNC_6(2, "\t\tNUMCOL: %s\n",
   FUNC_1(VAR_1) == 0 ? "1,024 - 10 columns" :
   FUNC_1(VAR_1) == 1 ? "2,048 - 11 columns" :
   FUNC_1(VAR_1) == 2 ? "4,096 - 12 columns" :
   "reserved");
}
