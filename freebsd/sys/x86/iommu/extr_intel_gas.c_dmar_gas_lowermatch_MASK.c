
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dmar_map_entry {scalar_t__ end; scalar_t__ free_down; } ;
struct dmar_gas_match_args {scalar_t__ size; scalar_t__ offset; TYPE_2__* common; TYPE_1__* entry; } ;
struct TYPE_4__ {scalar_t__ lowaddr; int alignment; } ;
struct TYPE_3__ {int start; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct dmar_map_entry* FUNC_0 (struct dmar_map_entry*,int ) ;
 struct dmar_map_entry* FUNC_1 (struct dmar_map_entry*,int ) ;
 int FUNC_2 (struct dmar_gas_match_args*,struct dmar_map_entry*) ;
 scalar_t__ FUNC_3 (struct dmar_gas_match_args*,struct dmar_map_entry*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_5(struct dmar_gas_match_args *VAR_3, struct dmar_map_entry *VAR_4)
{
 struct dmar_map_entry *VAR_5;
 int VAR_6;

 if (VAR_4->end < VAR_3->common->lowaddr) {
  VAR_3->entry->start = FUNC_4(VAR_4->end + VAR_0,
      VAR_3->common->alignment);
  if (FUNC_3(VAR_3, VAR_4, VAR_3->common->lowaddr)) {
   FUNC_2(VAR_3, VAR_4);
   return (0);
  }
 }
 if (VAR_4->free_down < VAR_3->size + VAR_3->offset + VAR_0)
  return (VAR_1);
 VAR_5 = FUNC_0(VAR_4, VAR_2);
 if (VAR_5 != ((void*)0)) {
  VAR_6 = FUNC_5(VAR_3, VAR_5);
  if (VAR_6 == 0)
   return (0);
 }
 VAR_5 = FUNC_1(VAR_4, VAR_2);
 if (VAR_5 != ((void*)0))
  return (FUNC_5(VAR_3, VAR_5));
 return (VAR_1);
}
