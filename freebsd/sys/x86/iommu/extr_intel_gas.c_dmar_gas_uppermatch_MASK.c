
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uintmax_t ;
struct dmar_map_entry {scalar_t__ start; int end; } ;
struct dmar_gas_match_args {TYPE_3__* domain; TYPE_2__* common; TYPE_1__* entry; } ;
struct TYPE_6__ {int end; int rb_root; } ;
struct TYPE_5__ {scalar_t__ highaddr; int alignment; } ;
struct TYPE_4__ {scalar_t__ start; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct dmar_map_entry* FUNC_1 (int ,int *,struct dmar_map_entry*) ;
 struct dmar_map_entry* FUNC_2 (int ,int *,struct dmar_map_entry*) ;
 struct dmar_map_entry* FUNC_3 (int ,int *,struct dmar_map_entry*) ;
 int VAR_2 ;
 int FUNC_4 (struct dmar_gas_match_args*,struct dmar_map_entry*) ;
 scalar_t__ FUNC_5 (struct dmar_gas_match_args*,struct dmar_map_entry*,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_7(struct dmar_gas_match_args *VAR_3)
{
 struct dmar_map_entry *VAR_4, *VAR_5, VAR_6;

 VAR_6.start = VAR_3->common->highaddr;
 VAR_4 = FUNC_2(VAR_2, &VAR_3->domain->rb_root,
     &VAR_6);
 if (VAR_4 == ((void*)0))
  return (VAR_1);
 VAR_5 = FUNC_3(VAR_2, &VAR_3->domain->rb_root, VAR_4);
 FUNC_0(VAR_5 != ((void*)0), ("no prev %p %jx", VAR_3->domain,
     (uintmax_t)VAR_6.start));
 for (;;) {
  VAR_3->entry->start = VAR_5->start + VAR_0;
  if (VAR_3->entry->start < VAR_3->common->highaddr)
   VAR_3->entry->start = VAR_3->common->highaddr;
  VAR_3->entry->start = FUNC_6(VAR_3->entry->start,
      VAR_3->common->alignment);
  if (FUNC_5(VAR_3, VAR_5, VAR_3->domain->end)) {
   FUNC_4(VAR_3, VAR_5);
   return (0);
  }
  VAR_5 = VAR_4;
  VAR_4 = FUNC_1(VAR_2, &VAR_3->domain->rb_root,
      VAR_5);
  FUNC_0(VAR_4 != ((void*)0), ("no next %p %jx", VAR_3->domain,
      (uintmax_t)VAR_6.start));
  if (VAR_4->end >= VAR_3->domain->end)
   return (VAR_1);
 }
}
