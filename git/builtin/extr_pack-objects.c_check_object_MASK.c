
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct revindex_entry {int nr; } ;
struct packed_git {int dummy; } ;
struct pack_window {int dummy; } ;
struct TYPE_3__ {int oid; } ;
struct object_entry {int in_pack_offset; int in_pack_type; unsigned long in_pack_header_size; scalar_t__ type_valid; TYPE_1__ idx; int delta_child_idx; int delta_sibling_idx; int preferred_base; } ;
typedef int off_t ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_4__ {int rawsz; } ;


 int FUNC_0 (char*,int) ;
 struct packed_git* FUNC_1 (struct object_entry*) ;
 int FUNC_2 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;


 int FUNC_3 (struct object_entry*,struct object_entry*) ;
 int FUNC_4 (struct object_entry*,struct object_entry*) ;
 int FUNC_5 (struct object_entry*,unsigned char const*) ;
 int FUNC_6 (struct object_entry*,unsigned long) ;
 int FUNC_7 (struct object_entry*,unsigned long) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (unsigned char const*,struct object_entry*,struct object_entry**) ;
 int FUNC_10 (int ,int ) ;
 struct revindex_entry* FUNC_11 (struct packed_git*,int) ;
 unsigned long FUNC_12 (struct packed_git*,struct pack_window**,int) ;
 unsigned char* FUNC_13 (struct packed_git*,int ) ;
 int FUNC_14 (struct object_entry*,int) ;
 scalar_t__ FUNC_15 (struct object_entry*) ;
 int FUNC_16 (int ,int *,unsigned long*) ;
 int FUNC_17 (int *) ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_18 (unsigned char*,unsigned long,int*,unsigned long*) ;
 int FUNC_19 (struct pack_window**) ;
 void* FUNC_20 (struct packed_git*,struct pack_window**,int,unsigned long*) ;

__attribute__((used)) static void FUNC_21(struct object_entry *VAR_5)
{
 unsigned long VAR_6;

 if (FUNC_1(VAR_5)) {
  struct packed_git *VAR_7 = FUNC_1(VAR_5);
  struct pack_window *VAR_8 = ((void*)0);
  const unsigned char *VAR_9 = ((void*)0);
  struct object_entry *VAR_10;
  unsigned long VAR_11, VAR_12;
  unsigned long VAR_13;
  off_t VAR_14;
  unsigned char *VAR_15, VAR_16;
  enum object_type VAR_17;
  unsigned long VAR_18;

  VAR_15 = FUNC_20(VAR_7, &VAR_8, VAR_5->in_pack_offset, &VAR_13);





  VAR_11 = FUNC_18(VAR_15, VAR_13,
         &VAR_17,
         &VAR_18);
  if (VAR_11 == 0)
   goto give_up;

  if (VAR_17 < 0)
   FUNC_0("invalid type %d", VAR_17);
  VAR_5->in_pack_type = VAR_17;






  switch (VAR_5->in_pack_type) {
  default:

   FUNC_14(VAR_5, VAR_5->in_pack_type);
   FUNC_7(VAR_5, VAR_18);
   VAR_5->in_pack_header_size = VAR_11;
   if (FUNC_15(VAR_5) < VAR_1 || FUNC_15(VAR_5) > VAR_0)
    goto give_up;
   FUNC_19(&VAR_8);
   return;
  case 128:
   if (VAR_2 && !VAR_5->preferred_base)
    VAR_9 = FUNC_20(VAR_7, &VAR_8,
      VAR_5->in_pack_offset + VAR_11, ((void*)0));
   VAR_5->in_pack_header_size = VAR_11 + VAR_3->rawsz;
   break;
  case 129:
   VAR_15 = FUNC_20(VAR_7, &VAR_8,
           VAR_5->in_pack_offset + VAR_11, ((void*)0));
   VAR_12 = 0;
   VAR_16 = VAR_15[VAR_12++];
   VAR_14 = VAR_16 & 127;
   while (VAR_16 & 128) {
    VAR_14 += 1;
    if (!VAR_14 || FUNC_2(VAR_14, 7)) {
     FUNC_10(FUNC_8("delta base offset overflow in pack for %s"),
           FUNC_17(&VAR_5->idx.oid));
     goto give_up;
    }
    VAR_16 = VAR_15[VAR_12++];
    VAR_14 = (VAR_14 << 7) + (VAR_16 & 127);
   }
   VAR_14 = VAR_5->in_pack_offset - VAR_14;
   if (VAR_14 <= 0 || VAR_14 >= VAR_5->in_pack_offset) {
    FUNC_10(FUNC_8("delta base offset out of bound for %s"),
          FUNC_17(&VAR_5->idx.oid));
    goto give_up;
   }
   if (VAR_2 && !VAR_5->preferred_base) {
    struct revindex_entry *VAR_19;
    VAR_19 = FUNC_11(VAR_7, VAR_14);
    if (!VAR_19)
     goto give_up;
    VAR_9 = FUNC_13(VAR_7, VAR_19->nr);
   }
   VAR_5->in_pack_header_size = VAR_11 + VAR_12;
   break;
  }

  if (FUNC_9(VAR_9, VAR_5, &VAR_10)) {
   FUNC_14(VAR_5, VAR_5->in_pack_type);
   FUNC_7(VAR_5, VAR_18);
   FUNC_6(VAR_5, VAR_18);

   if (VAR_10) {
    FUNC_3(VAR_5, VAR_10);
    VAR_5->delta_sibling_idx = VAR_10->delta_child_idx;
    FUNC_4(VAR_10, VAR_5);
   } else {
    FUNC_5(VAR_5, VAR_9);
   }

   FUNC_19(&VAR_8);
   return;
  }

  if (FUNC_15(VAR_5)) {
   off_t VAR_20;






   VAR_20 = VAR_5->in_pack_offset + VAR_5->in_pack_header_size;
   VAR_6 = FUNC_12(VAR_7, &VAR_8, VAR_20);
   if (VAR_6 == 0)
    goto give_up;
   FUNC_7(VAR_5, VAR_6);
   FUNC_19(&VAR_8);
   return;
  }






  give_up:
  FUNC_19(&VAR_8);
 }

 FUNC_14(VAR_5,
      FUNC_16(VAR_4, &VAR_5->idx.oid, &VAR_6));
 if (VAR_5->type_valid) {
  FUNC_7(VAR_5, VAR_6);
 } else {






 }
}
