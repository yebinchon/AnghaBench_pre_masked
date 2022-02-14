
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_patch ;
typedef int git_index ;
struct TYPE_9__ {int flags; int id_abbrev; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;
struct TYPE_10__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,TYPE_1__*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int *,int ) ;
 int FUNC_12 (TYPE_2__*,int *) ;
 int FUNC_13 (int **,int ) ;
 int VAR_5 ;
 int FUNC_14 (char*,int *,TYPE_1__*,char const*) ;

void FUNC_15(void)
{
 git_index *VAR_6;
 git_diff *VAR_7;
 git_patch *VAR_8;
 git_buf VAR_9 = VAR_0;
 git_diff_options VAR_10 = VAR_2;
 const char *VAR_11 =
  "diff --git a/untimely.txt b/untimely.txt\n" "index 9a69d960ae94b060f56c2a8702545e2bb1abb935..1111d4f11f4b35bf6759e0fb714fe09731ef0840 100644\n" "GIT binary patch\n" "delta 32\n" "nc%1vf+QYWt3zLL@hC)e3Vu?a>QDRl4f_G*?PG(-ZA}<#J$+QbW\n" "\n" "delta 7\n" "Oc%18D`@*{63ljhg(E~C7\n" "\n";
 VAR_10.flags = VAR_3 | VAR_1;
 VAR_10.id_abbrev = VAR_4;

 VAR_5 = FUNC_3("renames");
 FUNC_2(FUNC_13(&VAR_6, VAR_5));

 FUNC_1("renames/untimely.txt", "Oh that crazy Kipling!\r\n");

 FUNC_2(FUNC_6(&VAR_7, VAR_5, VAR_6, &VAR_10));

 FUNC_2(FUNC_11(&VAR_8, VAR_7, 0));
 FUNC_2(FUNC_12(&VAR_9, VAR_8));

 FUNC_0(VAR_11, VAR_9.ptr);

 FUNC_2(FUNC_7(VAR_6, "untimely.txt"));
 FUNC_2(FUNC_9(VAR_6));

 FUNC_14(
  "19dd32dfb1520a64e5bbaae8dce6ef423dfa2f13",
  ((void*)0),
  &VAR_10,
  VAR_11);

 FUNC_4(&VAR_9);
 FUNC_10(VAR_8);
 FUNC_5(VAR_7);
 FUNC_8(VAR_6);
}
