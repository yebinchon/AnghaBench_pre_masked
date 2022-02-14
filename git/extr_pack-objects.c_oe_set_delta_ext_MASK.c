
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct packing_data {struct object_entry* ext_bases; scalar_t__ nr_ext; int alloc_ext; } ;
struct TYPE_3__ {int hash; } ;
struct TYPE_4__ {TYPE_1__ oid; } ;
struct object_entry {int preferred_base; int filled; int ext_base; int delta_idx; TYPE_2__ idx; } ;


 int FUNC_0 (struct object_entry*,scalar_t__,int ) ;
 int FUNC_1 (int ,unsigned char const*) ;
 int FUNC_2 (struct object_entry*,int ,int) ;

void FUNC_3(struct packing_data *VAR_0,
        struct object_entry *VAR_1,
        const unsigned char *VAR_2)
{
 struct object_entry *VAR_3;

 FUNC_0(VAR_0->ext_bases, VAR_0->nr_ext + 1, VAR_0->alloc_ext);
 VAR_3 = &VAR_0->ext_bases[VAR_0->nr_ext++];
 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 FUNC_1(VAR_3->idx.oid.hash, VAR_2);


 VAR_3->preferred_base = 1;
 VAR_3->filled = 1;

 VAR_1->ext_base = 1;
 VAR_1->delta_idx = VAR_3 - VAR_0->ext_bases + 1;
}
