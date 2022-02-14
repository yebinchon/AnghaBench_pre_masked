
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct TYPE_3__ {int hash; } ;
struct split_index {int replace_bitmap; int delete_bitmap; TYPE_1__ base_oid; } ;
struct index_state {struct split_index* split_index; } ;
struct TYPE_4__ {int rawsz; } ;


 int FUNC_0 (int ,struct strbuf*) ;
 int FUNC_1 (struct strbuf*,int ,int ) ;
 TYPE_2__* VAR_0 ;

int FUNC_2(struct strbuf *VAR_1,
    struct index_state *VAR_2)
{
 struct split_index *VAR_3 = VAR_2->split_index;
 FUNC_1(VAR_1, VAR_3->base_oid.hash, VAR_0->rawsz);
 if (!VAR_3->delete_bitmap && !VAR_3->replace_bitmap)
  return 0;
 FUNC_0(VAR_3->delete_bitmap, VAR_1);
 FUNC_0(VAR_3->replace_bitmap, VAR_1);
 return 0;
}
