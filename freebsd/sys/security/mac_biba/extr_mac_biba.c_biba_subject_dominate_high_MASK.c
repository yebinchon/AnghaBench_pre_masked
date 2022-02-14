
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_biba_element {scalar_t__ mbe_type; } ;
struct mac_biba {int mb_flags; struct mac_biba_element mb_effective; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_1(struct mac_biba *VAR_3)
{
 struct mac_biba_element *VAR_4;

 FUNC_0((VAR_3->mb_flags & VAR_0) != 0,
     ("biba_effective_in_range: mb not effective"));
 VAR_4 = &VAR_3->mb_effective;

 return (VAR_4->mbe_type == VAR_1 ||
     VAR_4->mbe_type == VAR_2);
}
