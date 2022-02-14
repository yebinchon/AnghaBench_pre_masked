
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct checkout_index_entry {int member_0; int member_2; char* member_3; int member_1; } ;
struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct checkout_index_entry*,int) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (char*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int ,int ,TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int) ;

void FUNC_10(void)
{
 git_checkout_options VAR_12 = VAR_8;

 struct checkout_index_entry VAR_13[] = {
  { 0100644, VAR_0, 1, "automergeable.txt" },
  { 0100644, VAR_2, 2, "automergeable.txt" },
  { 0100644, VAR_3, 3, "automergeable.txt" },

  { 0100644, VAR_4, 1, "modify-delete" },
  { 0100644, VAR_7, 3, "modify-delete" },

  { 0100644, VAR_4, 1, "directory_file-one" },
  { 0100644, VAR_6, 2, "directory_file-one" },
  { 0100644, VAR_7, 0, "directory_file-one/file" },

  { 0100644, VAR_4, 1, "directory_file-two" },
  { 0100644, VAR_6, 0, "directory_file-two/file" },
  { 0100644, VAR_7, 3, "directory_file-two" },
 };

 VAR_12.checkout_strategy |= VAR_9;

 FUNC_3(VAR_13, 3);
 FUNC_1(FUNC_7(VAR_10));

 FUNC_1(FUNC_9("merge-resolve/directory_file-two", 0777));
 FUNC_2("merge-resolve/directory_file-two/file", VAR_5);

 FUNC_1(FUNC_6(VAR_11, VAR_10, &VAR_12));

 FUNC_5("automergeable.txt", VAR_1);
 FUNC_4("directory_file-two/file", 0100644, VAR_6);

 FUNC_0(!FUNC_8("merge-resolve/modify-delete"));
 FUNC_0(!FUNC_8("merge-resolve/test-one.txt"));
 FUNC_0(!FUNC_8("merge-resolve/test-one-side-one.txt"));
 FUNC_0(!FUNC_8("merge-resolve/test-one-side-two.txt"));
 FUNC_0(!FUNC_8("merge-resolve/test-one.txt~ours"));
 FUNC_0(!FUNC_8("merge-resolve/test-one.txt~theirs"));
 FUNC_0(!FUNC_8("merge-resolve/directory_file-one/file"));
 FUNC_0(!FUNC_8("merge-resolve/directory_file-one~ours"));
 FUNC_0(!FUNC_8("merge-resolve/directory_file-two~theirs"));
}
