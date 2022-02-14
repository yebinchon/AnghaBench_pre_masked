
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
struct dmar_map_entry {scalar_t__ end; scalar_t__ start; scalar_t__ free_after; int flags; } ;
struct dmar_gas_match_args {scalar_t__ size; struct dmar_map_entry* entry; TYPE_1__* domain; } ;
struct TYPE_2__ {int rb_root; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 struct dmar_map_entry* FUNC_1 (int ,int *,struct dmar_map_entry*) ;
 struct dmar_map_entry* FUNC_2 (int ,int *,struct dmar_map_entry*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,struct dmar_map_entry*) ;

__attribute__((used)) static void
FUNC_4(struct dmar_gas_match_args *VAR_2,
    struct dmar_map_entry *VAR_3)
{
 struct dmar_map_entry *VAR_4;
 bool VAR_5;
 VAR_2->entry->end = VAR_2->entry->start + VAR_2->size;

 VAR_4 = FUNC_1(VAR_1, &VAR_2->domain->rb_root, VAR_3);
 FUNC_0(VAR_4->start >= VAR_2->entry->end &&
     VAR_4->start - VAR_2->entry->start >= VAR_2->size &&
     VAR_3->end <= VAR_2->entry->end,
     ("dmar_gas_match_insert hole failed %p prev (%jx, %jx) "
     "free_after %jx next (%jx, %jx) entry (%jx, %jx)", VAR_2->domain,
     (uintmax_t)VAR_3->start, (uintmax_t)VAR_3->end,
     (uintmax_t)VAR_3->free_after,
     (uintmax_t)VAR_4->start, (uintmax_t)VAR_4->end,
     (uintmax_t)VAR_2->entry->start, (uintmax_t)VAR_2->entry->end));

 VAR_3->free_after = VAR_2->entry->start - VAR_3->end;
 VAR_2->entry->free_after = VAR_4->start - VAR_2->entry->end;

 VAR_5 = FUNC_3(VAR_2->domain, VAR_2->entry);
 FUNC_0(VAR_5, ("found dup %p start %jx size %jx",
     VAR_2->domain, (uintmax_t)VAR_2->entry->start, (uintmax_t)VAR_2->size));
 VAR_2->entry->flags = VAR_0;

 FUNC_0(FUNC_2(VAR_1, &VAR_2->domain->rb_root,
     VAR_2->entry) == VAR_3,
     ("entry %p prev %p inserted prev %p", VAR_2->entry, VAR_3,
     FUNC_2(VAR_1, &VAR_2->domain->rb_root, VAR_2->entry)));
 FUNC_0(FUNC_1(VAR_1, &VAR_2->domain->rb_root,
     VAR_2->entry) == VAR_4,
     ("entry %p next %p inserted next %p", VAR_2->entry, VAR_4,
     FUNC_1(VAR_1, &VAR_2->domain->rb_root, VAR_2->entry)));
}
