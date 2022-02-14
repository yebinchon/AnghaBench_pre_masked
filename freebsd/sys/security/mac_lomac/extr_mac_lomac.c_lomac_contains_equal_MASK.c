
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ mle_type; } ;
struct TYPE_7__ {scalar_t__ mle_type; } ;
struct TYPE_6__ {scalar_t__ mle_type; } ;
struct TYPE_5__ {scalar_t__ mle_type; } ;
struct mac_lomac {int ml_flags; TYPE_4__ ml_rangehigh; TYPE_3__ ml_rangelow; TYPE_2__ ml_auxsingle; TYPE_1__ ml_single; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct mac_lomac *VAR_4)
{

 if (VAR_4->ml_flags & VAR_2)
  if (VAR_4->ml_single.mle_type == VAR_3)
   return (1);
 if (VAR_4->ml_flags & VAR_0)
  if (VAR_4->ml_auxsingle.mle_type == VAR_3)
   return (1);

 if (VAR_4->ml_flags & VAR_1) {
  if (VAR_4->ml_rangelow.mle_type == VAR_3)
   return (1);
  if (VAR_4->ml_rangehigh.mle_type == VAR_3)
   return (1);
 }

 return (0);
}
