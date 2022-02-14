
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mbe_type; int mbe_compartments; int mbe_grade; } ;
struct TYPE_6__ {int mbe_type; int mbe_compartments; int mbe_grade; } ;
struct TYPE_4__ {int mbe_type; int mbe_compartments; int mbe_grade; } ;
struct mac_biba {int mb_flags; TYPE_2__ mb_rangehigh; TYPE_3__ mb_rangelow; TYPE_1__ mb_effective; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_2(struct mac_biba *VAR_4)
{

 if (VAR_4->mb_flags & VAR_1) {
  switch (VAR_4->mb_effective.mbe_type) {
  case 130:
   break;

  case 131:
  case 129:
  case 128:
   if (VAR_4->mb_effective.mbe_grade != 0 ||
       !FUNC_0(
       VAR_4->mb_effective.mbe_compartments))
    return (VAR_0);
   break;

  default:
   return (VAR_0);
  }
 } else {
  if (VAR_4->mb_effective.mbe_type != VAR_3)
   return (VAR_0);
 }

 if (VAR_4->mb_flags & VAR_2) {
  switch (VAR_4->mb_rangelow.mbe_type) {
  case 130:
   break;

  case 131:
  case 129:
  case 128:
   if (VAR_4->mb_rangelow.mbe_grade != 0 ||
       !FUNC_0(
       VAR_4->mb_rangelow.mbe_compartments))
    return (VAR_0);
   break;

  default:
   return (VAR_0);
  }

  switch (VAR_4->mb_rangehigh.mbe_type) {
  case 130:
   break;

  case 131:
  case 129:
  case 128:
   if (VAR_4->mb_rangehigh.mbe_grade != 0 ||
       !FUNC_0(
       VAR_4->mb_rangehigh.mbe_compartments))
    return (VAR_0);
   break;

  default:
   return (VAR_0);
  }
  if (!FUNC_1(&VAR_4->mb_rangehigh,
      &VAR_4->mb_rangelow))
   return (VAR_0);
 } else {
  if (VAR_4->mb_rangelow.mbe_type != VAR_3 ||
      VAR_4->mb_rangehigh.mbe_type != VAR_3)
   return (VAR_0);
 }

 return (0);
}
