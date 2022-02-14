
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mle_type; } ;
struct mac_lomac {int ml_flags; TYPE_1__ ml_single; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct mac_lomac *VAR_2)
{

 FUNC_0((VAR_2->ml_flags & VAR_0) != 0,
     ("lomac_high_single: mac_lomac not single"));

 return (VAR_2->ml_single.mle_type == VAR_1);
}
