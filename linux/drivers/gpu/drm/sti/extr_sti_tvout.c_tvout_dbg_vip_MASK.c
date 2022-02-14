
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct seq_file*,char*,char*,char* const,...) ;
 int FUNC_1 (struct seq_file*,char) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_12, int VAR_13)
{
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 char *const VAR_19[] = {"Y_G", "Cb_B", "Cr_R"};
 char *const VAR_20[] = {"No", "EAV/SAV", "Limited range RGB/Y",
      "Limited range Cb/Cr", "decided by register"};
 char *const VAR_21[] = {"8-bit", "10-bit", "12-bit"};
 char *const VAR_22[] = {"Main (color matrix enabled)",
       "Main (color matrix by-passed)",
       "", "", "", "", "", "",
       "Aux (color matrix enabled)",
       "Aux (color matrix by-passed)",
       "", "", "", "", "", "Force value"};

 FUNC_1(VAR_12, '\t');
 VAR_18 = VAR_6 << VAR_7;
 VAR_14 = (VAR_13 & VAR_18) >> VAR_7;
 VAR_18 = VAR_6 << VAR_5;
 VAR_15 = (VAR_13 & VAR_18) >> VAR_5;
 VAR_18 = VAR_6 << VAR_2;
 VAR_16 = (VAR_13 & VAR_18) >> VAR_2;
 FUNC_0(VAR_12, "%-24s %s->%s %s->%s %s->%s\n", "Reorder:",
     VAR_19[VAR_14], VAR_19[VAR_4],
     VAR_19[VAR_15], VAR_19[VAR_8],
     VAR_19[VAR_16], VAR_19[VAR_3]);
 FUNC_2(VAR_12, "\t\t\t\t\t");
 VAR_18 = VAR_0 << VAR_1;
 VAR_17 = (VAR_13 & VAR_18) >> VAR_1;
 FUNC_0(VAR_12, "%-24s %s\n", "Clipping:", VAR_20[VAR_17]);
 FUNC_2(VAR_12, "\t\t\t\t\t");
 VAR_18 = VAR_9 << VAR_10;
 VAR_17 = (VAR_13 & VAR_18) >> VAR_10;
 FUNC_0(VAR_12, "%-24s input data rounded to %s per component\n",
     "Round:", VAR_21[VAR_17]);
 FUNC_2(VAR_12, "\t\t\t\t\t");
 VAR_17 = (VAR_13 & VAR_11);
 FUNC_0(VAR_12, "%-24s %s", "Input selection:", VAR_22[VAR_17]);
}
