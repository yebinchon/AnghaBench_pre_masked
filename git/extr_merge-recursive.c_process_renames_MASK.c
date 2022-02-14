
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct string_list_item {struct rename* util; } ;
struct string_list {int nr; TYPE_5__* items; } ;
struct rename {int processed; char dir_rename_original_type; TYPE_6__* dst_entry; TYPE_4__* pair; TYPE_2__* src_entry; } ;
struct merge_options {int dummy; } ;
struct diff_filespec {char* path; scalar_t__ mode; int oid; } ;
typedef enum rename_type { ____Placeholder_rename_type } rename_type ;
struct TYPE_14__ {void* util; } ;
struct TYPE_13__ {int processed; TYPE_3__* stages; } ;
struct TYPE_12__ {char const* string; struct rename* util; } ;
struct TYPE_11__ {struct diff_filespec* two; struct diff_filespec* one; } ;
struct TYPE_10__ {scalar_t__ mode; int oid; } ;
struct TYPE_9__ {int processed; TYPE_1__* stages; } ;
struct TYPE_8__ {scalar_t__ mode; int oid; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct string_list VAR_7 ;
 int FUNC_1 (struct rename*,struct rename*) ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct merge_options*,int,char const*,int) ;
 int FUNC_5 (int,struct merge_options*,struct rename*,struct rename*) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;
 int FUNC_7 (struct string_list*,int ) ;
 TYPE_7__* FUNC_8 (struct string_list*,char*) ;
 struct string_list_item* FUNC_9 (struct string_list*,char const*) ;
 int FUNC_10 (TYPE_6__*,struct diff_filespec*,struct diff_filespec*,struct diff_filespec*) ;
 scalar_t__ FUNC_11 (struct merge_options*,struct diff_filespec*,char const*,int,int ) ;
 int FUNC_12 (struct merge_options*,char const*) ;

__attribute__((used)) static int FUNC_13(struct merge_options *VAR_9,
      struct string_list *VAR_10,
      struct string_list *VAR_11)
{
 int VAR_12 = 1, VAR_13, VAR_14;
 struct string_list VAR_15 = VAR_7;
 struct string_list VAR_16 = VAR_7;
 const struct rename *VAR_17;

 for (VAR_13 = 0; VAR_13 < VAR_10->nr; VAR_13++) {
  VAR_17 = VAR_10->items[VAR_13].util;
  FUNC_8(&VAR_15, VAR_17->pair->two->path)->util
   = (void *)VAR_17;
 }
 for (VAR_13 = 0; VAR_13 < VAR_11->nr; VAR_13++) {
  VAR_17 = VAR_11->items[VAR_13].util;
  FUNC_8(&VAR_16, VAR_17->pair->two->path)->util
   = (void *)VAR_17;
 }

 for (VAR_13 = 0, VAR_14 = 0; VAR_13 < VAR_10->nr || VAR_14 < VAR_11->nr;) {
  struct string_list *VAR_18, *VAR_19;
  struct rename *VAR_20 = ((void*)0), *VAR_21 = ((void*)0);
  const char *VAR_22, *VAR_23;
  struct string_list_item *VAR_24;

  if (VAR_13 >= VAR_10->nr) {
   VAR_21 = VAR_11->items[VAR_14++].util;
  } else if (VAR_14 >= VAR_11->nr) {
   VAR_20 = VAR_10->items[VAR_13++].util;
  } else {
   int VAR_25 = FUNC_6(VAR_10->items[VAR_13].string,
          VAR_11->items[VAR_14].string);
   if (VAR_25 <= 0)
    VAR_20 = VAR_10->items[VAR_13++].util;
   if (VAR_25 >= 0)
    VAR_21 = VAR_11->items[VAR_14++].util;
  }


  if (VAR_20) {
   VAR_18 = VAR_10;
   VAR_19 = &VAR_16;
  } else {
   VAR_18 = VAR_11;
   VAR_19 = &VAR_15;
   FUNC_1(VAR_21, VAR_20);
  }

  if (VAR_20->processed)
   continue;
  VAR_20->processed = 1;
  VAR_20->dst_entry->processed = 1;



  VAR_20->src_entry->processed = 1;

  VAR_22 = VAR_20->pair->one->path;
  VAR_23 = VAR_20->pair->two->path;

  if (VAR_21) {

   const char *VAR_26 = VAR_21->pair->one->path;
   const char *VAR_27 = VAR_21->pair->two->path;
   enum rename_type VAR_28;
   if (FUNC_6(VAR_22, VAR_26) != 0)
    FUNC_0("ren1_src != ren2_src");
   VAR_21->dst_entry->processed = 1;
   VAR_21->processed = 1;
   if (FUNC_6(VAR_23, VAR_27) != 0) {
    VAR_28 = VAR_4;
    VAR_12 = 0;
   } else {
    VAR_28 = VAR_3;




    FUNC_4(VAR_9, 1, VAR_22, 1);
    FUNC_10(VAR_20->dst_entry,
          VAR_20->pair->one,
          VAR_20->pair->two,
          VAR_21->pair->two);
   }
   FUNC_5(VAR_28, VAR_9, VAR_20, VAR_21);
  } else if ((VAR_24 = FUNC_9(VAR_19, VAR_23))) {

   char *VAR_29;
   VAR_21 = VAR_24->util;
   VAR_29 = VAR_21->pair->two->path;
   if (FUNC_6(VAR_23, VAR_29) != 0)
    FUNC_0("ren1_dst != ren2_dst");

   VAR_12 = 0;
   VAR_21->processed = 1;





   VAR_21->src_entry->processed = 1;

   FUNC_5(VAR_5,
         VAR_9, VAR_20, VAR_21);
  } else {


   struct diff_filespec VAR_30, VAR_31;
   int VAR_32;







   int VAR_33 = VAR_10 == VAR_18 ? 2 : 3;
   int VAR_34 = VAR_10 == VAR_18 ? 3 : 2;





   FUNC_4(VAR_9, 1, VAR_22,
        VAR_33 == 2 || !FUNC_12(VAR_9, VAR_22));

   FUNC_3(&VAR_30.oid,
          &VAR_20->src_entry->stages[VAR_34].oid);
   VAR_30.mode = VAR_20->src_entry->stages[VAR_34].mode;
   FUNC_3(&VAR_31.oid,
          &VAR_20->dst_entry->stages[VAR_34].oid);
   VAR_31.mode = VAR_20->dst_entry->stages[VAR_34].mode;
   VAR_32 = 0;

   if (FUNC_2(&VAR_30.oid, &VAR_8) &&
       VAR_20->dir_rename_original_type == 'A') {
    FUNC_5(VAR_6,
          VAR_9, VAR_20, ((void*)0));
   } else if (FUNC_2(&VAR_30.oid, &VAR_8)) {
    FUNC_5(VAR_1,
          VAR_9, VAR_20, ((void*)0));
   } else if ((VAR_31.mode == VAR_20->pair->two->mode) &&
       FUNC_2(&VAR_31.oid, &VAR_20->pair->two->oid)) {
    if (FUNC_11(VAR_9,
            VAR_20->pair->two,
            VAR_23,
            1,
            0 ))
     VAR_12 = -1;
   } else if (!FUNC_2(&VAR_31.oid, &VAR_8)) {







    FUNC_5(VAR_0,
          VAR_9, VAR_20, ((void*)0));
   } else
    VAR_32 = 1;

   if (VAR_12 < 0)
    goto cleanup_and_return;
   if (VAR_32) {
    struct diff_filespec *VAR_35, *VAR_36, *VAR_37;
    VAR_30.path = (char *)VAR_22;

    VAR_35 = VAR_20->pair->one;
    if (VAR_10 == VAR_18) {
     VAR_36 = VAR_20->pair->two;
     VAR_37 = &VAR_30;
    } else {
     VAR_37 = VAR_20->pair->two;
     VAR_36 = &VAR_30;
    }
    FUNC_10(VAR_20->dst_entry, VAR_35, VAR_36, VAR_37);
    FUNC_5(VAR_2,
          VAR_9, VAR_20, ((void*)0));
   }
  }
 }
cleanup_and_return:
 FUNC_7(&VAR_15, 0);
 FUNC_7(&VAR_16, 0);

 return VAR_12;
}
