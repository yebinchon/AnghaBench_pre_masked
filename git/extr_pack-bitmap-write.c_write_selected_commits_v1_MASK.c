
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct pack_idx_entry {int dummy; } ;
struct hashfile {int dummy; } ;
struct bitmapped_commit {int write_as; int flags; int xor_offset; TYPE_2__* commit; } ;
struct TYPE_8__ {int selected_nr; struct bitmapped_commit* selected; } ;
struct TYPE_7__ {int hash; } ;
struct TYPE_5__ {TYPE_3__ oid; } ;
struct TYPE_6__ {TYPE_1__ object; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct hashfile*,int ) ;
 int FUNC_2 (struct hashfile*,int) ;
 int FUNC_3 (struct hashfile*,int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,struct pack_idx_entry**,int ,int ) ;
 TYPE_4__ VAR_1 ;

__attribute__((used)) static void FUNC_5(struct hashfile *VAR_2,
          struct pack_idx_entry **VAR_3,
          uint32_t VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1.selected_nr; ++VAR_5) {
  struct bitmapped_commit *VAR_6 = &VAR_1.selected[VAR_5];

  int VAR_7 =
   FUNC_4(VAR_6->commit->object.oid.hash, VAR_3, VAR_4, VAR_0);

  if (VAR_7 < 0)
   FUNC_0("trying to write commit not in index");

  FUNC_2(VAR_2, VAR_7);
  FUNC_3(VAR_2, VAR_6->xor_offset);
  FUNC_3(VAR_2, VAR_6->flags);

  FUNC_1(VAR_2, VAR_6->write_as);
 }
}
