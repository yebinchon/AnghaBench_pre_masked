
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct packing_data {int repo; int nr_objects; int in_pack_pos; } ;
struct pack_idx_entry {int dummy; } ;
struct TYPE_3__ {int oid; } ;
struct object_entry {TYPE_1__ idx; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_4__ {void* tags; void* blobs; void* trees; void* commits; } ;


 int FUNC_0 (int ,int ) ;




 int FUNC_1 (char*,int ,int,int) ;
 void* FUNC_2 () ;
 int FUNC_3 (void*,size_t) ;
 int FUNC_4 (struct packing_data*,struct object_entry*,size_t) ;
 int FUNC_5 (struct object_entry*) ;
 int FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (int *) ;
 TYPE_2__ VAR_0 ;

void FUNC_8(struct packing_data *VAR_1,
        struct pack_idx_entry **VAR_2,
        uint32_t VAR_3)
{
 uint32_t VAR_4;

 VAR_0.commits = FUNC_2();
 VAR_0.trees = FUNC_2();
 VAR_0.blobs = FUNC_2();
 VAR_0.tags = FUNC_2();
 FUNC_0(VAR_1->in_pack_pos, VAR_1->nr_objects);

 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
  struct object_entry *VAR_5 = (struct object_entry *)VAR_2[VAR_4];
  enum object_type VAR_6;

  FUNC_4(VAR_1, VAR_5, VAR_4);

  switch (FUNC_5(VAR_5)) {
  case 130:
  case 128:
  case 131:
  case 129:
   VAR_6 = FUNC_5(VAR_5);
   break;

  default:
   VAR_6 = FUNC_6(VAR_1->repo,
          &VAR_5->idx.oid, ((void*)0));
   break;
  }

  switch (VAR_6) {
  case 130:
   FUNC_3(VAR_0.commits, VAR_4);
   break;

  case 128:
   FUNC_3(VAR_0.trees, VAR_4);
   break;

  case 131:
   FUNC_3(VAR_0.blobs, VAR_4);
   break;

  case 129:
   FUNC_3(VAR_0.tags, VAR_4);
   break;

  default:
   FUNC_1("Missing type information for %s (%d/%d)",
       FUNC_7(&VAR_5->idx.oid), VAR_6,
       FUNC_5(VAR_5));
  }
 }
}
