
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ mbe_type; } ;
struct TYPE_5__ {scalar_t__ mbe_type; } ;
struct TYPE_4__ {scalar_t__ mbe_type; } ;
struct mac_biba {int mb_flags; TYPE_3__ mb_rangehigh; TYPE_2__ mb_rangelow; TYPE_1__ mb_effective; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct mac_biba *VAR_3)
{

 if (VAR_3->mb_flags & VAR_0) {
  if (VAR_3->mb_effective.mbe_type == VAR_2)
   return (1);
 }

 if (VAR_3->mb_flags & VAR_1) {
  if (VAR_3->mb_rangelow.mbe_type == VAR_2)
   return (1);
  if (VAR_3->mb_rangehigh.mbe_type == VAR_2)
   return (1);
 }

 return (0);
}
