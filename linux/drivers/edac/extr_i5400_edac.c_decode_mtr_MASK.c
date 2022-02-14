
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int,char*,...) ;

__attribute__((used)) static void FUNC_8(int VAR_0, u16 VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1);

 FUNC_7(2, "\tMTR%d=0x%x:  DIMMs are %sPresent\n",
   VAR_0, VAR_1, VAR_2 ? "" : "NOT ");
 if (!VAR_2)
  return;

 FUNC_7(2, "\t\tWIDTH: x%d\n", FUNC_6(VAR_1));

 FUNC_7(2, "\t\tELECTRICAL THROTTLING is %s\n",
   FUNC_0(VAR_1) ? "enabled" : "disabled");

 FUNC_7(2, "\t\tNUMBANK: %d bank(s)\n", FUNC_5(VAR_1));
 FUNC_7(2, "\t\tNUMRANK: %s\n",
   FUNC_3(VAR_1) ? "double" : "single");
 FUNC_7(2, "\t\tNUMROW: %s\n",
   FUNC_4(VAR_1) == 0 ? "8,192 - 13 rows" :
   FUNC_4(VAR_1) == 1 ? "16,384 - 14 rows" :
   FUNC_4(VAR_1) == 2 ? "32,768 - 15 rows" :
   "65,536 - 16 rows");
 FUNC_7(2, "\t\tNUMCOL: %s\n",
   FUNC_2(VAR_1) == 0 ? "1,024 - 10 columns" :
   FUNC_2(VAR_1) == 1 ? "2,048 - 11 columns" :
   FUNC_2(VAR_1) == 2 ? "4,096 - 12 columns" :
   "reserved");
}
