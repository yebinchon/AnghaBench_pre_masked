
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmb_entry {scalar_t__ vpn; scalar_t__ size; scalar_t__ ppn; scalar_t__ flags; } ;



__attribute__((used)) static inline bool FUNC_0(struct pmb_entry *VAR_0, struct pmb_entry *VAR_1)
{
 return (VAR_1->vpn == (VAR_0->vpn + VAR_0->size)) &&
        (VAR_1->ppn == (VAR_0->ppn + VAR_0->size)) &&
        (VAR_1->flags == VAR_0->flags);
}
