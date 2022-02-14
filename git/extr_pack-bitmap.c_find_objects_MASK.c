
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stored_bitmap {int dummy; } ;
struct rev_info {struct include_data* include_check_data; int include_check; } ;
struct object_list {struct object_list* next; struct object* item; } ;
struct object {scalar_t__ type; int flags; int oid; } ;
struct include_data {struct bitmap* seen; struct bitmap* base; struct bitmap_index* bitmap_git; } ;
struct ewah_bitmap {int dummy; } ;
struct bitmap_show_data {struct bitmap* base; struct bitmap_index* bitmap_git; } ;
struct bitmap_index {int bitmaps; } ;
struct bitmap {int dummy; } ;
typedef scalar_t__ khiter_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rev_info*,struct object*,char*) ;
 int FUNC_1 (struct bitmap*,int) ;
 struct bitmap* FUNC_2 () ;
 int FUNC_3 (struct bitmap*,struct ewah_bitmap*) ;
 int FUNC_4 (struct bitmap_index*,int *) ;
 int FUNC_5 (char*) ;
 struct bitmap* FUNC_6 (struct ewah_bitmap*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 struct stored_bitmap* FUNC_9 (int ,scalar_t__) ;
 struct ewah_bitmap* FUNC_10 (struct stored_bitmap*) ;
 int FUNC_11 (struct object*,struct object_list**) ;
 scalar_t__ FUNC_12 (struct rev_info*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (struct rev_info*,int ,int ,struct bitmap_show_data*) ;

__attribute__((used)) static struct bitmap *FUNC_14(struct bitmap_index *VAR_6,
       struct rev_info *VAR_7,
       struct object_list *VAR_8,
       struct bitmap *VAR_9)
{
 struct bitmap *VAR_10 = ((void*)0);
 int VAR_11 = 0;

 struct object_list *VAR_12 = ((void*)0);
 while (VAR_8) {
  struct object *VAR_13 = VAR_8->item;
  VAR_8 = VAR_8->next;

  if (VAR_13->type == VAR_0) {
   khiter_t VAR_14 = FUNC_8(VAR_6->bitmaps, VAR_13->oid);

   if (VAR_14 < FUNC_7(VAR_6->bitmaps)) {
    struct stored_bitmap *VAR_15 = FUNC_9(VAR_6->bitmaps, VAR_14);
    struct ewah_bitmap *VAR_16 = FUNC_10(VAR_15);

    if (VAR_10 == ((void*)0))
     VAR_10 = FUNC_6(VAR_16);
    else
     FUNC_3(VAR_10, VAR_16);

    VAR_13->flags |= VAR_1;
    continue;
   }
  }

  FUNC_11(VAR_13, &VAR_12);
 }





 if (VAR_12 == ((void*)0))
  return VAR_10;

 VAR_8 = VAR_12;
 while (VAR_8) {
  struct object *VAR_17 = VAR_8->item;
  int VAR_18;

  VAR_8 = VAR_8->next;
  VAR_18 = FUNC_4(VAR_6, &VAR_17->oid);

  if (VAR_18 < 0 || VAR_10 == ((void*)0) || !FUNC_1(VAR_10, VAR_18)) {
   VAR_17->flags &= ~VAR_2;
   FUNC_0(VAR_7, VAR_17, "");
   VAR_11 = 1;
  } else {
   VAR_17->flags |= VAR_1;
  }
 }

 if (VAR_11) {
  struct include_data VAR_19;
  struct bitmap_show_data VAR_20;

  if (VAR_10 == ((void*)0))
   VAR_10 = FUNC_2();

  VAR_19.bitmap_git = VAR_6;
  VAR_19.base = VAR_10;
  VAR_19.seen = VAR_9;

  VAR_7->include_check = VAR_3;
  VAR_7->include_check_data = &VAR_19;

  if (FUNC_12(VAR_7))
   FUNC_5("revision walk setup failed");

  VAR_20.bitmap_git = VAR_6;
  VAR_20.base = VAR_10;

  FUNC_13(VAR_7, VAR_4, VAR_5,
         &VAR_20);
 }

 return VAR_10;
}
