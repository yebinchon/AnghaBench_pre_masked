
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct revmap_entry {size_t back; unsigned long forw; } ;
struct TYPE_3__ {struct revmap_entry* rev; } ;
struct TYPE_4__ {TYPE_1__ hpt; } ;
struct kvm {TYPE_2__ arch; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 struct revmap_entry* FUNC_0 (struct revmap_entry*) ;
 int FUNC_1 (unsigned long*) ;

void FUNC_2(struct kvm *VAR_3, struct revmap_entry *VAR_4,
        unsigned long *VAR_5, long VAR_6, int VAR_7)
{
 struct revmap_entry *VAR_8, *VAR_9;
 unsigned long VAR_10;

 if (*VAR_5 & VAR_2) {
  VAR_10 = *VAR_5 & VAR_1;
  VAR_8 = &VAR_3->arch.hpt.rev[VAR_10];
  if (VAR_7)
   VAR_8 = FUNC_0(VAR_8);
  VAR_9 = &VAR_3->arch.hpt.rev[VAR_8->back];
  if (VAR_7)
   VAR_9 = FUNC_0(VAR_9);
  VAR_4->forw = VAR_10;
  VAR_4->back = VAR_8->back;
  VAR_9->forw = VAR_6;
  VAR_8->back = VAR_6;
 } else {
  VAR_4->forw = VAR_4->back = VAR_6;
  *VAR_5 = (*VAR_5 & ~VAR_1) |
   VAR_6 | VAR_2 | VAR_0;
 }
 FUNC_1(VAR_5);
}
