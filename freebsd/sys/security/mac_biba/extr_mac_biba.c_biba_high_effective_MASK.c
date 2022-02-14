
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mbe_type; } ;
struct mac_biba {int mb_flags; TYPE_1__ mb_effective; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct mac_biba *VAR_2)
{

 FUNC_0((VAR_2->mb_flags & VAR_0) != 0,
     ("biba_equal_effective: mb not effective"));

 return (VAR_2->mb_effective.mbe_type == VAR_1);
}
