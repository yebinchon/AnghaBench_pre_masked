
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dmar_map_entry {scalar_t__ end; scalar_t__ free_after; } ;
struct dmar_gas_match_args {scalar_t__ size; scalar_t__ offset; int gas_flags; TYPE_2__* entry; TYPE_1__* common; } ;
typedef scalar_t__ dmar_gaddr_t ;
struct TYPE_4__ {scalar_t__ start; } ;
struct TYPE_3__ {scalar_t__ boundary; int alignment; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static bool
FUNC_3(struct dmar_gas_match_args *VAR_2, struct dmar_map_entry *VAR_3,
    dmar_gaddr_t VAR_4)
{
 dmar_gaddr_t VAR_5, VAR_6;

 if (VAR_2->entry->start + VAR_2->size > VAR_4)
  return (0);


 if (VAR_2->entry->start < VAR_3->end + VAR_1 ||
     VAR_2->entry->start + VAR_2->size + VAR_2->offset + VAR_1 >
     VAR_3->end + VAR_3->free_after)
  return (0);


 if (FUNC_0(VAR_2->entry->start + VAR_2->offset, VAR_2->size,
     VAR_2->common->boundary))
  return (1);






 VAR_5 = FUNC_1(VAR_2->entry->start + VAR_2->offset + VAR_2->common->boundary,
     VAR_2->common->boundary);
 VAR_6 = FUNC_2(VAR_5, VAR_2->common->alignment);

 if (VAR_6 + VAR_2->offset + VAR_2->size + VAR_1 <=
     VAR_3->end + VAR_3->free_after &&
     VAR_6 + VAR_2->offset + VAR_2->size <= VAR_4 &&
     FUNC_0(VAR_6 + VAR_2->offset, VAR_2->size,
     VAR_2->common->boundary)) {
  VAR_2->entry->start = VAR_6;
  return (1);
 }
 if ((VAR_2->gas_flags & VAR_0) != 0) {
  VAR_2->size = VAR_5 - VAR_2->entry->start;
  return (1);
 }

 return (0);
}
