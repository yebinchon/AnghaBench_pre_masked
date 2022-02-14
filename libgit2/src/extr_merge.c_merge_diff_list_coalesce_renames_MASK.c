
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct merge_diff_similarity {scalar_t__ similarity; size_t other_idx; } ;
struct TYPE_11__ {scalar_t__ rename_threshold; } ;
typedef TYPE_2__ git_merge_options ;
struct TYPE_10__ {size_t length; TYPE_4__** contents; } ;
struct TYPE_12__ {TYPE_1__ conflicts; } ;
typedef TYPE_3__ git_merge_diff_list ;
struct TYPE_13__ {int their_status; int their_entry; int our_status; int our_entry; } ;
typedef TYPE_4__ git_merge_diff ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *,int *) ;
 int FUNC_2 (TYPE_3__*,struct merge_diff_similarity*,int,size_t,struct merge_diff_similarity*,int,size_t,TYPE_4__*,TYPE_2__ const*) ;

__attribute__((used)) static void FUNC_3(
 git_merge_diff_list *VAR_0,
 struct merge_diff_similarity *VAR_1,
 struct merge_diff_similarity *VAR_2,
 const git_merge_options *VAR_3)
{
 size_t VAR_4;
 bool VAR_5 = 0, VAR_6 = 0;
 size_t VAR_7 = 0, VAR_8 = 0;
 git_merge_diff *VAR_9, *VAR_10, *VAR_11;

 for (VAR_4 = 0; VAR_4 < VAR_0->conflicts.length; VAR_4++) {
  VAR_11 = VAR_0->conflicts.contents[VAR_4];

  VAR_5 = 0;
  VAR_6 = 0;

  if (FUNC_0(VAR_11->our_entry) &&
   VAR_1[VAR_4].similarity >= VAR_3->rename_threshold) {
   VAR_7 = VAR_1[VAR_4].other_idx;

   VAR_9 = VAR_0->conflicts.contents[VAR_7];

   FUNC_1(
    &VAR_9->our_entry,
    &VAR_9->our_status,
    &VAR_11->our_entry,
    &VAR_11->our_status);

   VAR_1[VAR_7].similarity = 0;
   VAR_1[VAR_4].similarity = 0;

   VAR_5 = 1;
  }


  if (FUNC_0(VAR_11->their_entry) &&
   VAR_2[VAR_4].similarity >= VAR_3->rename_threshold) {
   VAR_8 = VAR_2[VAR_4].other_idx;

   VAR_10 = VAR_0->conflicts.contents[VAR_8];

   FUNC_1(
    &VAR_10->their_entry,
    &VAR_10->their_status,
    &VAR_11->their_entry,
    &VAR_11->their_status);

   VAR_2[VAR_8].similarity = 0;
   VAR_2[VAR_4].similarity = 0;

   VAR_6 = 1;
  }

  FUNC_2(VAR_0,
   VAR_1, VAR_5, VAR_7,
   VAR_2, VAR_6, VAR_8,
   VAR_11, VAR_3);
 }
}
