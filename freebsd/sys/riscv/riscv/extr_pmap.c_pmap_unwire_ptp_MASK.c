
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_offset_t ;
struct spglist {int dummy; } ;
typedef int pmap_t ;
typedef int boolean_t ;
struct TYPE_4__ {scalar_t__ ref_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_1__*,struct spglist*) ;

__attribute__((used)) static inline boolean_t
FUNC_1(pmap_t VAR_2, vm_offset_t VAR_3, vm_page_t VAR_4, struct spglist *VAR_5)
{

 --VAR_4->ref_count;
 if (VAR_4->ref_count == 0) {
  FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
  return (VAR_1);
 } else {
  return (VAR_0);
 }
}
