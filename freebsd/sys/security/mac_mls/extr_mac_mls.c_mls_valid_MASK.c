
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mme_type; int mme_compartments; int mme_level; } ;
struct TYPE_6__ {int mme_type; int mme_compartments; int mme_level; } ;
struct TYPE_4__ {int mme_type; int mme_compartments; int mme_level; } ;
struct mac_mls {int mm_flags; TYPE_2__ mm_rangehigh; TYPE_3__ mm_rangelow; TYPE_1__ mm_effective; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_2(struct mac_mls *VAR_4)
{

 if (VAR_4->mm_flags & VAR_1) {
  switch (VAR_4->mm_effective.mme_type) {
  case 129:
   break;

  case 131:
  case 130:
  case 128:
   if (VAR_4->mm_effective.mme_level != 0 ||
       !FUNC_0(
       VAR_4->mm_effective.mme_compartments))
    return (VAR_0);
   break;

  default:
   return (VAR_0);
  }
 } else {
  if (VAR_4->mm_effective.mme_type != VAR_3)
   return (VAR_0);
 }

 if (VAR_4->mm_flags & VAR_2) {
  switch (VAR_4->mm_rangelow.mme_type) {
  case 129:
   break;

  case 131:
  case 130:
  case 128:
   if (VAR_4->mm_rangelow.mme_level != 0 ||
       !FUNC_0(
       VAR_4->mm_rangelow.mme_compartments))
    return (VAR_0);
   break;

  default:
   return (VAR_0);
  }

  switch (VAR_4->mm_rangehigh.mme_type) {
  case 129:
   break;

  case 131:
  case 130:
  case 128:
   if (VAR_4->mm_rangehigh.mme_level != 0 ||
       !FUNC_0(
       VAR_4->mm_rangehigh.mme_compartments))
    return (VAR_0);
   break;

  default:
   return (VAR_0);
  }
  if (!FUNC_1(&VAR_4->mm_rangehigh,
      &VAR_4->mm_rangelow))
   return (VAR_0);
 } else {
  if (VAR_4->mm_rangelow.mme_type != VAR_3 ||
      VAR_4->mm_rangehigh.mme_type != VAR_3)
   return (VAR_0);
 }

 return (0);
}
