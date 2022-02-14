
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_reuc_entry {char* member_0; int member_1; int member_2; int member_3; char* member_4; char* member_5; char* member_6; } ;
struct merge_name_entry {char* member_0; char* member_1; char* member_2; } ;
struct merge_index_entry {int member_0; char* member_1; int member_2; char* member_3; } ;
typedef int git_merge_options ;
typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct merge_index_entry*,int) ;
 int FUNC_4 (int *,struct merge_name_entry*,int) ;
 int FUNC_5 (int *,struct merge_reuc_entry*,int) ;
 int FUNC_6 (int **,int ,int ,int ,int *) ;
 int VAR_2 ;

void FUNC_7(void)
{
 git_index *VAR_3;
 git_merge_options *VAR_4 = ((void*)0);

 struct merge_index_entry VAR_5[] = {
  { 0100644, "68c6c84b091926c7d90aa6a79b2bc3bb6adccd8e", 0, "0a-no-change.txt" },
  { 0100644, "f0ce2b8e4986084d9b308fb72709e414c23eb5e6", 0, "0b-duplicated-in-ours.txt" },
  { 0100644, "f0ce2b8e4986084d9b308fb72709e414c23eb5e6", 1, "0b-rewritten-in-ours.txt" },
  { 0100644, "e376fbdd06ebf021c92724da9f26f44212734e3e", 2, "0b-rewritten-in-ours.txt" },
  { 0100644, "b2d399ae15224e1d58066e3c8df70ce37de7a656", 3, "0b-rewritten-in-ours.txt" },
  { 0100644, "2f56120107d680129a5d9791b521cb1e73a2ed31", 0, "0c-duplicated-in-theirs.txt" },
  { 0100644, "2f56120107d680129a5d9791b521cb1e73a2ed31", 1, "0c-rewritten-in-theirs.txt" },
  { 0100644, "efc9121fdedaf08ba180b53ebfbcf71bd488ed09", 2, "0c-rewritten-in-theirs.txt" },
  { 0100644, "712ebba6669ea847d9829e4f1059d6c830c8b531", 3, "0c-rewritten-in-theirs.txt" },
  { 0100644, "0d872f8e871a30208305978ecbf9e66d864f1638", 0, "1a-newname-in-ours-edited-in-theirs.txt" },
  { 0100644, "d0d4594e16f2e19107e3fa7ea63e7aaaff305ffb", 0, "1a-newname-in-ours.txt" },
  { 0100644, "ed9523e62e453e50dd9be1606af19399b96e397a", 0, "1b-newname-in-theirs-edited-in-ours.txt" },
  { 0100644, "2b5f1f181ee3b58ea751f5dd5d8f9b445520a136", 0, "1b-newname-in-theirs.txt" },
  { 0100644, "178940b450f238a56c0d75b7955cb57b38191982", 0, "2-newname-in-both.txt" },
  { 0100644, "18cb316b1cefa0f8a6946f0e201a8e1a6f845ab9", 2, "3a-newname-in-ours-deleted-in-theirs.txt" },
  { 0100644, "18cb316b1cefa0f8a6946f0e201a8e1a6f845ab9", 1, "3a-renamed-in-ours-deleted-in-theirs.txt" },
  { 0100644, "36219b49367146cb2e6a1555b5a9ebd4d0328495", 3, "3b-newname-in-theirs-deleted-in-ours.txt" },
  { 0100644, "36219b49367146cb2e6a1555b5a9ebd4d0328495", 1, "3b-renamed-in-theirs-deleted-in-ours.txt" },
  { 0100644, "227792b52aaa0b238bea00ec7e509b02623f168c", 2, "4a-newname-in-ours-added-in-theirs.txt" },
  { 0100644, "8b5b53cb2aa9ceb1139f5312fcfa3cc3c5a47c9a", 3, "4a-newname-in-ours-added-in-theirs.txt" },
  { 0100644, "227792b52aaa0b238bea00ec7e509b02623f168c", 1, "4a-renamed-in-ours-added-in-theirs.txt" },
  { 0100644, "de872ee3618b894992e9d1e18ba2ebe256a112f9", 2, "4b-newname-in-theirs-added-in-ours.txt" },
  { 0100644, "98d52d07c0b0bbf2b46548f6aa521295c2cb55db", 3, "4b-newname-in-theirs-added-in-ours.txt" },
  { 0100644, "98d52d07c0b0bbf2b46548f6aa521295c2cb55db", 1, "4b-renamed-in-theirs-added-in-ours.txt" },
  { 0100644, "d3719a5ae8e4d92276b5313ce976f6ee5af2b436", 2, "5a-newname-in-ours-added-in-theirs.txt" },
  { 0100644, "98ba4205fcf31f5dd93c916d35fe3f3b3d0e6714", 3, "5a-newname-in-ours-added-in-theirs.txt" },
  { 0100644, "d3719a5ae8e4d92276b5313ce976f6ee5af2b436", 1, "5a-renamed-in-ours-added-in-theirs.txt" },
  { 0100644, "d3719a5ae8e4d92276b5313ce976f6ee5af2b436", 3, "5a-renamed-in-ours-added-in-theirs.txt" },
  { 0100644, "385c8a0f26ddf79e9041e15e17dc352ed2c4cced", 2, "5b-newname-in-theirs-added-in-ours.txt" },
  { 0100644, "63247125386de9ec90a27ad36169307bf8a11a38", 3, "5b-newname-in-theirs-added-in-ours.txt" },
  { 0100644, "63247125386de9ec90a27ad36169307bf8a11a38", 1, "5b-renamed-in-theirs-added-in-ours.txt" },
  { 0100644, "63247125386de9ec90a27ad36169307bf8a11a38", 2, "5b-renamed-in-theirs-added-in-ours.txt" },
  { 0100644, "d8fa77b6833082c1ea36b7828a582d4c43882450", 2, "6-both-renamed-1-to-2-ours.txt" },
  { 0100644, "d8fa77b6833082c1ea36b7828a582d4c43882450", 3, "6-both-renamed-1-to-2-theirs.txt" },
  { 0100644, "d8fa77b6833082c1ea36b7828a582d4c43882450", 1, "6-both-renamed-1-to-2.txt" },
  { 0100644, "b42712cfe99a1a500b2a51fe984e0b8a7702ba11", 1, "7-both-renamed-side-1.txt" },
  { 0100644, "b42712cfe99a1a500b2a51fe984e0b8a7702ba11", 3, "7-both-renamed-side-1.txt" },
  { 0100644, "b69fe837e4cecfd4c9a40cdca7c138468687df07", 1, "7-both-renamed-side-2.txt" },
  { 0100644, "b69fe837e4cecfd4c9a40cdca7c138468687df07", 2, "7-both-renamed-side-2.txt" },
  { 0100644, "b42712cfe99a1a500b2a51fe984e0b8a7702ba11", 2, "7-both-renamed.txt" },
  { 0100644, "b69fe837e4cecfd4c9a40cdca7c138468687df07", 3, "7-both-renamed.txt" },
 };

 struct merge_name_entry VAR_6[] = {
  {
   "3a-renamed-in-ours-deleted-in-theirs.txt",
   "3a-newname-in-ours-deleted-in-theirs.txt",
   ""
  },

  {
   "3b-renamed-in-theirs-deleted-in-ours.txt",
   "",
   "3b-newname-in-theirs-deleted-in-ours.txt",
  },

  {
   "4a-renamed-in-ours-added-in-theirs.txt",
   "4a-newname-in-ours-added-in-theirs.txt",
   "",
  },

  {
   "4b-renamed-in-theirs-added-in-ours.txt",
   "",
   "4b-newname-in-theirs-added-in-ours.txt",
  },

  {
   "5a-renamed-in-ours-added-in-theirs.txt",
   "5a-newname-in-ours-added-in-theirs.txt",
   "5a-renamed-in-ours-added-in-theirs.txt",
  },

  {
   "5b-renamed-in-theirs-added-in-ours.txt",
   "5b-renamed-in-theirs-added-in-ours.txt",
   "5b-newname-in-theirs-added-in-ours.txt",
  },

  {
   "6-both-renamed-1-to-2.txt",
   "6-both-renamed-1-to-2-ours.txt",
   "6-both-renamed-1-to-2-theirs.txt",
  },

  {
   "7-both-renamed-side-1.txt",
   "7-both-renamed.txt",
   "7-both-renamed-side-1.txt",
  },

  {
   "7-both-renamed-side-2.txt",
   "7-both-renamed-side-2.txt",
   "7-both-renamed.txt",
  },
 };

 struct merge_reuc_entry VAR_7[] = {
  { "1a-newname-in-ours-edited-in-theirs.txt",
   0, 0100644, 0,
   "",
   "c3d02eeef75183df7584d8d13ac03053910c1301",
   "" },

  { "1a-newname-in-ours.txt",
   0, 0100644, 0,
   "",
   "d0d4594e16f2e19107e3fa7ea63e7aaaff305ffb",
   "" },

  { "1a-renamed-in-ours-edited-in-theirs.txt",
   0100644, 0, 0100644,
   "c3d02eeef75183df7584d8d13ac03053910c1301",
   "",
   "0d872f8e871a30208305978ecbf9e66d864f1638" },

  { "1a-renamed-in-ours.txt",
   0100644, 0, 0100644,
   "d0d4594e16f2e19107e3fa7ea63e7aaaff305ffb",
   "",
   "d0d4594e16f2e19107e3fa7ea63e7aaaff305ffb" },

  { "1b-newname-in-theirs-edited-in-ours.txt",
   0, 0, 0100644,
   "",
   "",
   "241a1005cd9b980732741b74385b891142bcba28" },

  { "1b-newname-in-theirs.txt",
   0, 0, 0100644,
   "",
   "",
   "2b5f1f181ee3b58ea751f5dd5d8f9b445520a136" },

  { "1b-renamed-in-theirs-edited-in-ours.txt",
   0100644, 0100644, 0,
   "241a1005cd9b980732741b74385b891142bcba28",
   "ed9523e62e453e50dd9be1606af19399b96e397a",
   "" },

  { "1b-renamed-in-theirs.txt",
   0100644, 0100644, 0,
   "2b5f1f181ee3b58ea751f5dd5d8f9b445520a136",
   "2b5f1f181ee3b58ea751f5dd5d8f9b445520a136",
   "" },

  { "2-newname-in-both.txt",
   0, 0100644, 0100644,
   "",
   "178940b450f238a56c0d75b7955cb57b38191982",
   "178940b450f238a56c0d75b7955cb57b38191982" },

  { "2-renamed-in-both.txt",
   0100644, 0, 0,
   "178940b450f238a56c0d75b7955cb57b38191982",
   "",
   "" },
 };

 FUNC_1(FUNC_6(&VAR_3, VAR_2,
  VAR_0, VAR_1,
  VAR_4));

 FUNC_0(FUNC_3(VAR_3, VAR_5, 41));
 FUNC_0(FUNC_4(VAR_3, VAR_6, 9));
 FUNC_0(FUNC_5(VAR_3, VAR_7, 10));

 FUNC_2(VAR_3);
}
