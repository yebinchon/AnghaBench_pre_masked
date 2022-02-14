
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stat {scalar_t__ st_size; int st_mode; } ;
struct ofs_delta_entry {int obj_no; int offset; } ;
struct object_id {int dummy; } ;
struct TYPE_5__ {int oid; int offset; } ;
struct object_entry {scalar_t__ real_type; scalar_t__ type; TYPE_1__ idx; int size; } ;
struct TYPE_7__ {int obj_no; int oid; } ;
struct TYPE_6__ {int rawsz; int (* final_fn ) (unsigned char*,int *) ;} ;


 int FUNC_0 (TYPE_3__*,int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (void*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_9 (int ,struct stat*) ;
 int FUNC_10 (int ,unsigned char*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_11 (int ,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct object_entry* VAR_12 ;
 struct ofs_delta_entry* VAR_13 ;
 int FUNC_12 (int *,struct object_id*) ;
 int VAR_14 ;
 TYPE_3__* VAR_15 ;
 int VAR_16 ;
 int FUNC_13 (void*,struct object_entry*,int ,scalar_t__,int *) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (unsigned char*,int *) ;
 TYPE_2__* VAR_17 ;
 void* FUNC_17 (struct object_entry*,int *,struct object_id*,int *) ;
 int FUNC_18 (int ) ;
 scalar_t__ VAR_18 ;

__attribute__((used)) static void FUNC_19(unsigned char *VAR_19)
{
 int VAR_20, VAR_21 = 0;
 struct ofs_delta_entry *VAR_22 = VAR_13;
 struct object_id VAR_23;
 struct stat VAR_24;

 if (VAR_18)
  VAR_14 = FUNC_14(
    VAR_5 ? FUNC_2("Receiving objects") : FUNC_2("Indexing objects"),
    VAR_9);
 for (VAR_20 = 0; VAR_20 < VAR_9; VAR_20++) {
  struct object_entry *VAR_25 = &VAR_12[VAR_20];
  void *VAR_26 = FUNC_17(VAR_25, &VAR_22->offset,
           &VAR_23,
           &VAR_25->idx.oid);
  VAR_25->real_type = VAR_25->type;
  if (VAR_25->type == VAR_1) {
   VAR_10++;
   VAR_22->obj_no = VAR_20;
   VAR_22++;
  } else if (VAR_25->type == VAR_2) {
   FUNC_0(VAR_15, VAR_11 + 1, VAR_16);
   FUNC_12(&VAR_15[VAR_11].oid, &VAR_23);
   VAR_15[VAR_11].obj_no = VAR_20;
   VAR_11++;
  } else if (!VAR_26) {

   VAR_25->real_type = VAR_0;
   VAR_21++;
  } else
   FUNC_13(VAR_26, ((void*)0), VAR_25->size, VAR_25->type,
        &VAR_25->idx.oid);
  FUNC_8(VAR_26);
  FUNC_5(VAR_14, VAR_20+1);
 }
 VAR_12[VAR_20].idx.offset = VAR_4;
 FUNC_15(&VAR_14);


 FUNC_7();
 VAR_17->final_fn(VAR_19, &VAR_6);
 if (!FUNC_10(FUNC_6(VAR_17->rawsz), VAR_19))
  FUNC_3(FUNC_2("pack is corrupted (SHA1 mismatch)"));
 FUNC_18(VAR_17->rawsz);


 if (FUNC_9(VAR_7, &VAR_24))
  FUNC_4(FUNC_2("cannot fstat packfile"));
 if (FUNC_1(VAR_24.st_mode) &&
   FUNC_11(VAR_7, 0, VAR_3) - VAR_8 != VAR_24.st_size)
  FUNC_3(FUNC_2("pack has junk at the end"));

 for (VAR_20 = 0; VAR_20 < VAR_9; VAR_20++) {
  struct object_entry *VAR_27 = &VAR_12[VAR_20];
  if (VAR_27->real_type != VAR_0)
   continue;
  VAR_27->real_type = VAR_27->type;
  FUNC_13(((void*)0), VAR_27, VAR_27->size, VAR_27->type,
       &VAR_27->idx.oid);
  VAR_21--;
 }
 if (VAR_21)
  FUNC_3(FUNC_2("confusion beyond insanity in parse_pack_objects()"));
}
