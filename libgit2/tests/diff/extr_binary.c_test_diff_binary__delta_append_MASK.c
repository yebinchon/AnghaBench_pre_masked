
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_index ;
struct TYPE_4__ {int flags; int id_abbrev; } ;
typedef TYPE_1__ git_diff_options ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ) ;
 int VAR_4 ;
 int FUNC_7 (char*,int *,TYPE_1__*,char const*) ;

void FUNC_8(void)
{
 git_index *VAR_5;
 git_diff_options VAR_6 = VAR_1;
 const char *VAR_7 =
  "diff --git a/untimely.txt b/untimely.txt\n" "index 9a69d960ae94b060f56c2a8702545e2bb1abb935..1111d4f11f4b35bf6759e0fb714fe09731ef0840 100644\n" "GIT binary patch\n" "delta 32\n" "nc%1vf+QYWt3zLL@hC)e3Vu?a>QDRl4f_G*?PG(-ZA}<#J$+QbW\n" "\n" "delta 7\n" "Oc%18D`@*{63ljhg(E~C7\n" "\n";
 VAR_6.flags = VAR_2 | VAR_0;
 VAR_6.id_abbrev = VAR_3;

 VAR_4 = FUNC_2("renames");
 FUNC_1(FUNC_6(&VAR_5, VAR_4));

 FUNC_0("renames/untimely.txt", "Oh that crazy Kipling!\r\n");
 FUNC_1(FUNC_3(VAR_5, "untimely.txt"));
 FUNC_1(FUNC_5(VAR_5));

 FUNC_7(
  "19dd32dfb1520a64e5bbaae8dce6ef423dfa2f13",
  ((void*)0),
  &VAR_6,
  VAR_7);

 FUNC_4(VAR_5);
}
