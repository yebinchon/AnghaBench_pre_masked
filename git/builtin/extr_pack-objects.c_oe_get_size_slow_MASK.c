
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packing_data {int dummy; } ;
struct packed_git {int dummy; } ;
struct pack_window {int dummy; } ;
struct TYPE_2__ {int oid; } ;
struct object_entry {scalar_t__ type_; TYPE_1__ idx; int in_pack_offset; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 struct packed_git* FUNC_3 (struct packing_data*,struct object_entry const*) ;
 scalar_t__ FUNC_4 (int ,int *,unsigned long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_8 (unsigned char*,unsigned long,int*,unsigned long*) ;
 int FUNC_9 (struct pack_window**) ;
 unsigned char* FUNC_10 (struct packed_git*,struct pack_window**,int ,unsigned long*) ;

unsigned long FUNC_11(struct packing_data *VAR_4,
          const struct object_entry *VAR_5)
{
 struct packed_git *VAR_6;
 struct pack_window *VAR_7;
 unsigned char *VAR_8;
 enum object_type VAR_9;
 unsigned long VAR_10, VAR_11, VAR_12;

 if (VAR_5->type_ != VAR_0 && VAR_5->type_ != VAR_1) {
  FUNC_6(&VAR_3);
  if (FUNC_4(VAR_2, &VAR_5->idx.oid, &VAR_12) < 0)
   FUNC_2(FUNC_1("unable to get size of %s"),
       FUNC_5(&VAR_5->idx.oid));
  FUNC_7(&VAR_3);
  return VAR_12;
 }

 VAR_6 = FUNC_3(VAR_4, VAR_5);
 if (!VAR_6)
  FUNC_0("when e->type is a delta, it must belong to a pack");

 FUNC_6(&VAR_3);
 VAR_7 = ((void*)0);
 VAR_8 = FUNC_10(VAR_6, &VAR_7, VAR_5->in_pack_offset, &VAR_11);
 VAR_10 = FUNC_8(VAR_8, VAR_11, &VAR_9, &VAR_12);
 if (VAR_10 == 0)
  FUNC_2(FUNC_1("unable to parse object header of %s"),
      FUNC_5(&VAR_5->idx.oid));

 FUNC_9(&VAR_7);
 FUNC_7(&VAR_3);
 return VAR_12;
}
