
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_lomac_element {scalar_t__ mle_type; scalar_t__ mle_grade; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct mac_lomac_element *VAR_1, struct mac_lomac_element *VAR_2)
{

 if (VAR_1->mle_type == VAR_0 ||
     VAR_2->mle_type == VAR_0)
  return (1);

 return (VAR_1->mle_type == VAR_2->mle_type && VAR_1->mle_grade == VAR_2->mle_grade);
}
