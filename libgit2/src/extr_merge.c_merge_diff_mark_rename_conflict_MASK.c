
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct merge_diff_similarity {scalar_t__ similarity; } ;
struct TYPE_9__ {scalar_t__ rename_threshold; } ;
typedef TYPE_2__ git_merge_options ;
struct TYPE_8__ {TYPE_4__** contents; } ;
struct TYPE_10__ {TYPE_1__ conflicts; } ;
typedef TYPE_3__ git_merge_diff_list ;
struct TYPE_11__ {scalar_t__ type; int our_entry; int their_entry; } ;
typedef TYPE_4__ git_merge_diff ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(
 git_merge_diff_list *VAR_7,
 struct merge_diff_similarity *VAR_8,
 bool VAR_9,
 size_t VAR_10,
 struct merge_diff_similarity *VAR_11,
 bool VAR_12,
 size_t VAR_13,
 git_merge_diff *VAR_14,
 const git_merge_options *VAR_15)
{
 git_merge_diff *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);

 if (VAR_9)
  VAR_16 = VAR_7->conflicts.contents[VAR_10];

 if (VAR_12)
  VAR_17 = VAR_7->conflicts.contents[VAR_13];


 if (VAR_9 && VAR_12) {

  if (VAR_10 == VAR_13)
   VAR_16->type = VAR_0;
  else {
   VAR_16->type = VAR_2;
   VAR_17->type = VAR_2;
  }
 } else if (VAR_9) {

  if (VAR_11[VAR_10].similarity >= VAR_15->rename_threshold)
   VAR_16->type = VAR_1;

  else if (FUNC_0(VAR_14->their_entry)) {
   VAR_16->type = VAR_4;
   VAR_14->type = VAR_4;
  }

  else if (!FUNC_0(VAR_16->their_entry))
   VAR_16->type = VAR_5;

  else if (VAR_16->type == VAR_3)
   VAR_16->type = VAR_6;
 } else if (VAR_12) {

  if (VAR_8[VAR_13].similarity >= VAR_15->rename_threshold)
   VAR_17->type = VAR_1;

  else if (FUNC_0(VAR_14->our_entry)) {
   VAR_17->type = VAR_4;
   VAR_14->type = VAR_4;
  }

  else if (!FUNC_0(VAR_17->our_entry))
   VAR_17->type = VAR_5;

  else if (VAR_17->type == VAR_3)
   VAR_17->type = VAR_6;
 }
}
