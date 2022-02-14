
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ mle_type; } ;
struct TYPE_6__ {scalar_t__ mle_type; } ;
struct TYPE_4__ {scalar_t__ mle_type; } ;
struct mac_lomac {int ml_flags; TYPE_2__ ml_rangehigh; TYPE_3__ ml_rangelow; TYPE_1__ ml_single; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_1(struct mac_lomac *VAR_5)
{

 FUNC_0((VAR_5->ml_flags & VAR_1) ==
     VAR_1,
     ("lomac_subject_privileged: subject doesn't have both labels"));


 if (VAR_5->ml_single.mle_type == VAR_2)
  return (0);


 if (VAR_5->ml_rangelow.mle_type == VAR_2 ||
     VAR_5->ml_rangehigh.mle_type == VAR_2)
  return (0);


 if (VAR_5->ml_rangelow.mle_type == VAR_4 &&
     VAR_5->ml_rangehigh.mle_type == VAR_3)
  return (0);


 return (VAR_0);
}
