
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (char*,char* const) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (struct seq_file*,char) ;
 int FUNC_3 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_1, int VAR_2)
{
 int VAR_3;
 char *const VAR_4[] = {"no transmission",
          "single transmission",
          "once every field",
          "once every frame"};

 FUNC_2(VAR_1, '\t');
 VAR_3 = (VAR_2 & FUNC_1(VAR_0, 1));
 FUNC_0("Data island 1:", VAR_4[VAR_3]);
 FUNC_3(VAR_1, "\t\t\t\t\t");
 VAR_3 = (VAR_2 & FUNC_1(VAR_0, 2)) >> 4;
 FUNC_0("Data island 2:", VAR_4[VAR_3]);
 FUNC_3(VAR_1, "\t\t\t\t\t");
 VAR_3 = (VAR_2 & FUNC_1(VAR_0, 3)) >> 8;
 FUNC_0("Data island 3:", VAR_4[VAR_3]);
 FUNC_3(VAR_1, "\t\t\t\t\t");
 VAR_3 = (VAR_2 & FUNC_1(VAR_0, 4)) >> 12;
 FUNC_0("Data island 4:", VAR_4[VAR_3]);
 FUNC_3(VAR_1, "\t\t\t\t\t");
 VAR_3 = (VAR_2 & FUNC_1(VAR_0, 5)) >> 16;
 FUNC_0("Data island 5:", VAR_4[VAR_3]);
 FUNC_3(VAR_1, "\t\t\t\t\t");
 VAR_3 = (VAR_2 & FUNC_1(VAR_0, 6)) >> 20;
 FUNC_0("Data island 6:", VAR_4[VAR_3]);
}
