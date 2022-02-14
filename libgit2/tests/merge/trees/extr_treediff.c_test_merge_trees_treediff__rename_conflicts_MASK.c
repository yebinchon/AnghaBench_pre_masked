
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int member_0; char* member_1; char* member_3; int member_2; } ;
struct TYPE_9__ {int member_1; TYPE_4__ member_0; } ;
struct TYPE_8__ {int member_0; char* member_1; char* member_3; int member_2; } ;
struct TYPE_7__ {int member_1; TYPE_2__ member_0; } ;
struct TYPE_12__ {int member_0; char* member_1; char* member_3; int member_2; } ;
struct TYPE_11__ {int member_1; TYPE_6__ member_0; } ;
struct merge_index_conflict_data {int member_3; TYPE_3__ member_2; TYPE_1__ member_1; TYPE_5__ member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int ,int ,struct merge_index_conflict_data*,int) ;

void FUNC_1(void)
{
 struct merge_index_conflict_data VAR_16[] = {
  {
   { { 0, "", 0, "" }, VAR_4 },
   { { 0100644, "f0ce2b8e4986084d9b308fb72709e414c23eb5e6", 0, "0b-duplicated-in-ours.txt" }, VAR_0 },
   { { 0, "", 0, "" }, VAR_4 },
   VAR_9,
  },

  {
   { { 0100644, "f0ce2b8e4986084d9b308fb72709e414c23eb5e6", 0, "0b-rewritten-in-ours.txt" }, VAR_4 },
   { { 0100644, "e376fbdd06ebf021c92724da9f26f44212734e3e", 0, "0b-rewritten-in-ours.txt" }, VAR_2 },
   { { 0100644, "b2d399ae15224e1d58066e3c8df70ce37de7a656", 0, "0b-rewritten-in-ours.txt" }, VAR_2 },
   VAR_5,
  },

  {
   { { 0, "", 0, "" }, VAR_4 },
   { { 0, "", 0, "" }, VAR_4 },
   { { 0100644, "2f56120107d680129a5d9791b521cb1e73a2ed31", 0, "0c-duplicated-in-theirs.txt" }, VAR_0 },
   VAR_9,
  },

  {
   { { 0100644, "2f56120107d680129a5d9791b521cb1e73a2ed31", 0, "0c-rewritten-in-theirs.txt" }, VAR_4 },
   { { 0100644, "efc9121fdedaf08ba180b53ebfbcf71bd488ed09", 0, "0c-rewritten-in-theirs.txt" }, VAR_2 },
   { { 0100644, "712ebba6669ea847d9829e4f1059d6c830c8b531", 0, "0c-rewritten-in-theirs.txt" }, VAR_2 },
   VAR_5,
  },

  {
   { { 0100644, "c3d02eeef75183df7584d8d13ac03053910c1301", 0, "1a-renamed-in-ours-edited-in-theirs.txt" }, VAR_4 },
   { { 0100644, "c3d02eeef75183df7584d8d13ac03053910c1301", 0, "1a-newname-in-ours-edited-in-theirs.txt" }, VAR_3 },
   { { 0100644, "0d872f8e871a30208305978ecbf9e66d864f1638", 0, "1a-renamed-in-ours-edited-in-theirs.txt" }, VAR_2 },
   VAR_12,
  },

  {
   { { 0100644, "d0d4594e16f2e19107e3fa7ea63e7aaaff305ffb", 0, "1a-renamed-in-ours.txt" }, VAR_4 },
   { { 0100644, "d0d4594e16f2e19107e3fa7ea63e7aaaff305ffb", 0, "1a-newname-in-ours.txt" }, VAR_3 },
   { { 0100644, "d0d4594e16f2e19107e3fa7ea63e7aaaff305ffb", 0, "1a-renamed-in-ours.txt" }, VAR_4 },
   VAR_9,
  },

  {
   { { 0100644, "241a1005cd9b980732741b74385b891142bcba28", 0, "1b-renamed-in-theirs-edited-in-ours.txt" }, VAR_4 },
   { { 0100644, "ed9523e62e453e50dd9be1606af19399b96e397a", 0, "1b-renamed-in-theirs-edited-in-ours.txt" }, VAR_2 },
   { { 0100644, "241a1005cd9b980732741b74385b891142bcba28", 0, "1b-newname-in-theirs-edited-in-ours.txt" }, VAR_3 },
   VAR_12,
  },

  {
   { { 0100644, "2b5f1f181ee3b58ea751f5dd5d8f9b445520a136", 0, "1b-renamed-in-theirs.txt" }, VAR_4 },
   { { 0100644, "2b5f1f181ee3b58ea751f5dd5d8f9b445520a136", 0, "1b-renamed-in-theirs.txt" }, VAR_4 },
   { { 0100644, "2b5f1f181ee3b58ea751f5dd5d8f9b445520a136", 0, "1b-newname-in-theirs.txt" }, VAR_3 },
   VAR_9,
  },

  {
   { { 0100644, "178940b450f238a56c0d75b7955cb57b38191982", 0, "2-renamed-in-both.txt" }, VAR_4 },
   { { 0100644, "178940b450f238a56c0d75b7955cb57b38191982", 0, "2-newname-in-both.txt" }, VAR_3 },
   { { 0100644, "178940b450f238a56c0d75b7955cb57b38191982", 0, "2-newname-in-both.txt" }, VAR_3 },
   VAR_6,
  },

  {
   { { 0100644, "18cb316b1cefa0f8a6946f0e201a8e1a6f845ab9", 0, "3a-renamed-in-ours-deleted-in-theirs.txt" }, VAR_4 },
   { { 0100644, "18cb316b1cefa0f8a6946f0e201a8e1a6f845ab9", 0, "3a-newname-in-ours-deleted-in-theirs.txt" }, VAR_3 },
   { { 0, "", 0, "" }, VAR_1 },
   VAR_11,
  },

  {
   { { 0100644, "36219b49367146cb2e6a1555b5a9ebd4d0328495", 0, "3b-renamed-in-theirs-deleted-in-ours.txt" }, VAR_4 },
   { { 0, "", 0, "" }, VAR_1 },
   { { 0100644, "36219b49367146cb2e6a1555b5a9ebd4d0328495", 0, "3b-newname-in-theirs-deleted-in-ours.txt" }, VAR_3 },
   VAR_11,
  },

  {
   { { 0, "", 0, "" }, VAR_4 },
   { { 0, "", 0, "" }, VAR_4 },
   { { 0100644, "8b5b53cb2aa9ceb1139f5312fcfa3cc3c5a47c9a", 0, "4a-newname-in-ours-added-in-theirs.txt" }, VAR_0 },
   VAR_10,
  },

  {
   { { 0100644, "227792b52aaa0b238bea00ec7e509b02623f168c", 0, "4a-renamed-in-ours-added-in-theirs.txt" }, VAR_4 },
   { { 0100644, "227792b52aaa0b238bea00ec7e509b02623f168c", 0, "4a-newname-in-ours-added-in-theirs.txt" }, VAR_3 },
   { { 0, "", 0, "" }, VAR_1 },
   VAR_10,
  },

  {
   { { 0, "", 0, "" }, VAR_4 },
   { { 0100644, "de872ee3618b894992e9d1e18ba2ebe256a112f9", 0, "4b-newname-in-theirs-added-in-ours.txt" }, VAR_0 },
   { { 0, "", 0, "" }, VAR_4 },
   VAR_10,
  },

  {
   { { 0100644, "98d52d07c0b0bbf2b46548f6aa521295c2cb55db", 0, "4b-renamed-in-theirs-added-in-ours.txt" }, VAR_4 },
   { { 0, "", 0, "" }, VAR_1 },
   { { 0100644, "98d52d07c0b0bbf2b46548f6aa521295c2cb55db", 0, "4b-newname-in-theirs-added-in-ours.txt" }, VAR_3 },
   VAR_10,
  },

  {
   { { 0100644, "d8fa77b6833082c1ea36b7828a582d4c43882450", 0, "5-both-renamed-1-to-2.txt" }, VAR_4 },
   { { 0100644, "d8fa77b6833082c1ea36b7828a582d4c43882450", 0, "5-both-renamed-1-to-2-ours.txt" }, VAR_3 },
   { { 0100644, "d8fa77b6833082c1ea36b7828a582d4c43882450", 0, "5-both-renamed-1-to-2-theirs.txt" }, VAR_3 },
   VAR_7,
  },

  {
   { { 0100644, "b42712cfe99a1a500b2a51fe984e0b8a7702ba11", 0, "6-both-renamed-side-1.txt" }, VAR_4 },
   { { 0100644, "b42712cfe99a1a500b2a51fe984e0b8a7702ba11", 0, "6-both-renamed.txt" }, VAR_3 },
   { { 0100644, "b42712cfe99a1a500b2a51fe984e0b8a7702ba11", 0, "6-both-renamed-side-1.txt" }, VAR_4 },
   VAR_8,
  },

  {
   { { 0100644, "b69fe837e4cecfd4c9a40cdca7c138468687df07", 0, "6-both-renamed-side-2.txt" }, VAR_4 },
   { { 0100644, "b69fe837e4cecfd4c9a40cdca7c138468687df07", 0, "6-both-renamed-side-2.txt" }, VAR_4 },
   { { 0100644, "b69fe837e4cecfd4c9a40cdca7c138468687df07", 0, "6-both-renamed.txt" }, VAR_3 },
   VAR_8,
  },
    };
 FUNC_0(VAR_13,
  VAR_14, VAR_15, VAR_16, 18);
}
