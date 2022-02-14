
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_biba_element {scalar_t__ mbe_type; scalar_t__ mbe_grade; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct mac_biba_element *VAR_1, struct mac_biba_element *VAR_2)
{

 if (VAR_1->mbe_type == VAR_0 ||
     VAR_2->mbe_type == VAR_0)
  return (1);

 return (VAR_1->mbe_type == VAR_2->mbe_type && VAR_1->mbe_grade == VAR_2->mbe_grade);
}
