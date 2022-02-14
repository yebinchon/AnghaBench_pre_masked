
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_index ;
struct TYPE_8__ {int flags; int id_abbrev; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;
struct TYPE_9__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,TYPE_1__*) ;
 int FUNC_7 (int *,int ,int ,TYPE_2__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ) ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_10(void)
{
 git_index *VAR_8;
 git_diff *VAR_9;
 git_buf VAR_10 = VAR_0;
 git_diff_options VAR_11 = VAR_3;
 const char *VAR_12 =
  "diff --git a/untimely.txt b/untimely.txt\n" "index 9a69d960ae94b060f56c2a8702545e2bb1abb935..1111d4f11f4b35bf6759e0fb714fe09731ef0840 100644\n" "GIT binary patch\n" "delta 32\n" "nc%1vf+QYWt3zLL@hC)e3Vu?a>QDRl4f_G*?PG(-ZA}<#J$+QbW\n" "\n" "delta 7\n" "Oc%18D`@*{63ljhg(E~C7\n" "\n";
 VAR_11.flags = VAR_4 | VAR_1;
 VAR_11.id_abbrev = VAR_5;

 VAR_7 = FUNC_3("renames");
 FUNC_2(FUNC_9(&VAR_8, VAR_7));

 FUNC_1("renames/untimely.txt", "Oh that crazy Kipling!\r\n");

 FUNC_2(FUNC_6(&VAR_9, VAR_7, VAR_8, &VAR_11));

 FUNC_2(FUNC_7(VAR_9, VAR_2, VAR_6, &VAR_10));

 FUNC_0(VAR_12, VAR_10.ptr);

 FUNC_4(&VAR_10);
 FUNC_5(VAR_9);
 FUNC_8(VAR_8);
}
