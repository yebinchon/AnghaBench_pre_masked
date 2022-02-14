
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum slb_index { ____Placeholder_slb_index } slb_index ;
struct TYPE_2__ {unsigned int slb_used_bitmap; unsigned int slb_kern_bitmap; int stab_rr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static enum slb_index FUNC_2(bool VAR_4)
{
 enum slb_index VAR_5;
 if (VAR_2->slb_used_bitmap != VAR_1) {
  VAR_5 = FUNC_1(VAR_2->slb_used_bitmap);
  VAR_2->slb_used_bitmap |= 1U << VAR_5;
  if (VAR_4)
   VAR_2->slb_kern_bitmap |= 1U << VAR_5;
 } else {

  VAR_5 = VAR_2->stab_rr;
  if (VAR_5 < (VAR_3 - 1))
   VAR_5++;
  else
   VAR_5 = VAR_0;
  VAR_2->stab_rr = VAR_5;
  if (VAR_5 < 32) {
   if (VAR_4)
    VAR_2->slb_kern_bitmap |= 1U << VAR_5;
   else
    VAR_2->slb_kern_bitmap &= ~(1U << VAR_5);
  }
 }
 FUNC_0(VAR_5 < VAR_0);

 return VAR_5;
}
