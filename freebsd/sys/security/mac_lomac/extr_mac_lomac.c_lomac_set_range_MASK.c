
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u_short ;
struct TYPE_4__ {void* mle_grade; void* mle_type; } ;
struct TYPE_3__ {void* mle_grade; void* mle_type; } ;
struct mac_lomac {int ml_flags; TYPE_2__ ml_rangehigh; TYPE_1__ ml_rangelow; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct mac_lomac *VAR_1, u_short VAR_2, u_short VAR_3,
    u_short VAR_4, u_short VAR_5)
{

 VAR_1->ml_rangelow.mle_type = VAR_2;
 VAR_1->ml_rangelow.mle_grade = VAR_3;
 VAR_1->ml_rangehigh.mle_type = VAR_4;
 VAR_1->ml_rangehigh.mle_grade = VAR_5;
 VAR_1->ml_flags |= VAR_0;
}
