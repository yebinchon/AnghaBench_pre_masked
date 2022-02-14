
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int mle_type; } ;
struct TYPE_8__ {int mle_type; } ;
struct TYPE_5__ {int mle_type; } ;
struct TYPE_6__ {int mle_type; } ;
struct mac_lomac {int ml_flags; TYPE_3__ ml_rangehigh; TYPE_4__ ml_rangelow; TYPE_1__ ml_auxsingle; TYPE_2__ ml_single; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static int
FUNC_1(struct mac_lomac *VAR_5)
{

 if (VAR_5->ml_flags & VAR_3) {
  switch (VAR_5->ml_single.mle_type) {
  case 130:
  case 131:
  case 129:
  case 128:
   break;

  default:
   return (VAR_0);
  }
 } else {
  if (VAR_5->ml_single.mle_type != VAR_4)
   return (VAR_0);
 }

 if (VAR_5->ml_flags & VAR_1) {
  switch (VAR_5->ml_auxsingle.mle_type) {
  case 130:
  case 131:
  case 129:
  case 128:
   break;

  default:
   return (VAR_0);
  }
 } else {
  if (VAR_5->ml_auxsingle.mle_type != VAR_4)
   return (VAR_0);
 }

 if (VAR_5->ml_flags & VAR_2) {
  switch (VAR_5->ml_rangelow.mle_type) {
  case 130:
  case 131:
  case 129:
  case 128:
   break;

  default:
   return (VAR_0);
  }

  switch (VAR_5->ml_rangehigh.mle_type) {
  case 130:
  case 131:
  case 129:
  case 128:
   break;

  default:
   return (VAR_0);
  }
  if (!FUNC_0(&VAR_5->ml_rangehigh,
      &VAR_5->ml_rangelow))
   return (VAR_0);
 } else {
  if (VAR_5->ml_rangelow.mle_type != VAR_4 ||
      VAR_5->ml_rangehigh.mle_type != VAR_4)
   return (VAR_0);
 }

 return (0);
}
