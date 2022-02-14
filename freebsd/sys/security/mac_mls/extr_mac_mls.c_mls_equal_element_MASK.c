
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_mls_element {scalar_t__ mme_type; scalar_t__ mme_level; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct mac_mls_element *VAR_1, struct mac_mls_element *VAR_2)
{

 if (VAR_1->mme_type == VAR_0 ||
     VAR_2->mme_type == VAR_0)
  return (1);

 return (VAR_1->mme_type == VAR_2->mme_type && VAR_1->mme_level == VAR_2->mme_level);
}
