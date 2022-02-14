
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ptr; } ;
struct diff_data {TYPE_3__ new_binary_base85; TYPE_3__ old_binary_base85; int new_path; int old_path; int new_binary_inflatedlen; int new_binary_type; int new_id; int old_binary_inflatedlen; int old_binary_type; int old_id; int member_0; } ;
typedef int git_oid ;
typedef int git_index ;
struct TYPE_5__ {int flags; int id_abbrev; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_blob ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int VAR_6 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int *) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int *,char*,int *,char*,TYPE_1__*,int ,int ,int ,int ,struct diff_data*) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int **,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_15(void)
{
 git_index *VAR_10;
 git_diff_options VAR_11 = VAR_2;
 git_blob *VAR_12, *VAR_13;
 git_oid VAR_14, VAR_15;
 struct diff_data VAR_16 = {0};

 VAR_11.flags = VAR_3 | VAR_1;
 VAR_11.id_abbrev = VAR_4;

 VAR_9 = FUNC_5("renames");
 FUNC_4(FUNC_14(&VAR_10, VAR_9));

 FUNC_3("renames/untimely.txt", "Oh that crazy Kipling!\r\n");
 FUNC_4(FUNC_11(VAR_10, "untimely.txt"));
 FUNC_4(FUNC_12(VAR_10));

 FUNC_13(&VAR_14, "9a69d960ae94b060f56c2a8702545e2bb1abb935");
 FUNC_13(&VAR_15, "1111d4f11f4b35bf6759e0fb714fe09731ef0840");

 FUNC_4(FUNC_8(&VAR_12, VAR_9, &VAR_14));
 FUNC_4(FUNC_8(&VAR_13, VAR_9, &VAR_15));

 FUNC_4(FUNC_10(VAR_12,
  "untimely.txt", VAR_13, "untimely.txt", &VAR_11,
  VAR_6, VAR_5, VAR_7, VAR_8, &VAR_16));

 FUNC_2("untimely.txt", VAR_16.old_path);
 FUNC_1(&VAR_14, &VAR_16.old_id);
 FUNC_0(VAR_0, VAR_16.old_binary_type);
 FUNC_0(7, VAR_16.old_binary_inflatedlen);
 FUNC_2("c%18D`@*{63ljhg(E~C7",
  VAR_16.old_binary_base85.ptr);

 FUNC_2("untimely.txt", VAR_16.new_path);
 FUNC_1(&VAR_15, &VAR_16.new_id);
 FUNC_0(VAR_0, VAR_16.new_binary_type);
 FUNC_0(32, VAR_16.new_binary_inflatedlen);
 FUNC_2("c%1vf+QYWt3zLL@hC)e3Vu?a>QDRl4f_G*?PG(-ZA}<#J$+QbW",
  VAR_16.new_binary_base85.ptr);

 FUNC_7(VAR_12);
 FUNC_7(VAR_13);

 FUNC_6(VAR_16.old_path);
 FUNC_6(VAR_16.new_path);

 FUNC_9(&VAR_16.old_binary_base85);
 FUNC_9(&VAR_16.new_binary_base85);
}
