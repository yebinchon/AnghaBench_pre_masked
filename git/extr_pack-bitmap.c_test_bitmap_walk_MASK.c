
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stored_bitmap {int dummy; } ;
struct TYPE_4__ {int nr; TYPE_1__* objects; } ;
struct rev_info {int tag_objects; int tree_objects; int blob_objects; TYPE_2__ pending; int repo; } ;
struct object {int oid; } ;
struct ewah_bitmap {scalar_t__ bit_size; } ;
struct bitmap_test_data {int base; int prg; scalar_t__ seen; struct bitmap_index* bitmap_git; } ;
struct bitmap_index {int version; int entry_count; int bitmaps; } ;
struct bitmap {int dummy; } ;
typedef scalar_t__ khiter_t ;
struct TYPE_3__ {struct object* item; } ;


 scalar_t__ FUNC_0 (struct bitmap*,int ) ;
 int FUNC_1 () ;
 size_t FUNC_2 (struct bitmap*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct ewah_bitmap*) ;
 struct bitmap* FUNC_5 (struct ewah_bitmap*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct bitmap_index*) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 struct stored_bitmap* FUNC_10 (int ,scalar_t__) ;
 struct ewah_bitmap* FUNC_11 (struct stored_bitmap*) ;
 char* FUNC_12 (int *) ;
 struct bitmap_index* FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (struct rev_info*) ;
 int FUNC_15 (char*,size_t) ;
 int VAR_0 ;
 int FUNC_16 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_17 (struct rev_info*,int *,int *,struct bitmap_test_data*) ;

void FUNC_18(struct rev_info *VAR_3)
{
 struct object *VAR_4;
 struct bitmap *VAR_5 = ((void*)0);
 khiter_t VAR_6;
 size_t VAR_7;
 struct bitmap_test_data VAR_8;
 struct bitmap_index *VAR_9;

 if (!(VAR_9 = FUNC_13(VAR_3->repo)))
  FUNC_3("failed to load bitmap indexes");

 if (VAR_3->pending.nr != 1)
  FUNC_3("you must specify exactly one commit to test");

 FUNC_6(VAR_0, "Bitmap v%d test (%d entries loaded)\n",
  VAR_9->version, VAR_9->entry_count);

 VAR_4 = VAR_3->pending.objects[0].item;
 VAR_6 = FUNC_9(VAR_9->bitmaps, VAR_4->oid);

 if (VAR_6 < FUNC_8(VAR_9->bitmaps)) {
  struct stored_bitmap *VAR_10 = FUNC_10(VAR_9->bitmaps, VAR_6);
  struct ewah_bitmap *VAR_11 = FUNC_11(VAR_10);

  FUNC_6(VAR_0, "Found bitmap for %s. %d bits / %08x checksum\n",
   FUNC_12(&VAR_4->oid), (int)VAR_11->bit_size, FUNC_4(VAR_11));

  VAR_5 = FUNC_5(VAR_11);
 }

 if (VAR_5 == ((void*)0))
  FUNC_3("Commit %s doesn't have an indexed bitmap", FUNC_12(&VAR_4->oid));

 VAR_3->tag_objects = 1;
 VAR_3->tree_objects = 1;
 VAR_3->blob_objects = 1;

 VAR_7 = FUNC_2(VAR_5);

 if (FUNC_14(VAR_3))
  FUNC_3("revision walk setup failed");

 VAR_8.bitmap_git = VAR_9;
 VAR_8.base = FUNC_1();
 VAR_8.prg = FUNC_15("Verifying bitmap entries", VAR_7);
 VAR_8.seen = 0;

 FUNC_17(VAR_3, &VAR_1, &VAR_2, &VAR_8);

 FUNC_16(&VAR_8.prg);

 if (FUNC_0(VAR_5, VAR_8.base))
  FUNC_6(VAR_0, "OK!\n");
 else
  FUNC_6(VAR_0, "Mismatch!\n");

 FUNC_7(VAR_9);
}
