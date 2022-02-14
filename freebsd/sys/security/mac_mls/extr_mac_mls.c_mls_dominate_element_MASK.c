
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_mls_element {int mme_type; int mme_level; int mme_compartments; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;




 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(struct mac_mls_element *VAR_1, struct mac_mls_element *VAR_2)
{
 int VAR_3;

 switch (VAR_1->mme_type) {
 case 131:
 case 130:
  return (1);

 case 128:
  switch (VAR_2->mme_type) {
  case 129:
  case 130:
   return (0);

  case 131:
  case 128:
   return (1);

  default:
   FUNC_1("mls_dominate_element: b->mme_type invalid");
  }

 case 129:
  switch (VAR_2->mme_type) {
  case 131:
  case 128:
   return (1);

  case 130:
   return (0);

  case 129:
   for (VAR_3 = 1; VAR_3 <= VAR_0; VAR_3++)
    if (!FUNC_0(VAR_3,
        VAR_1->mme_compartments) &&
        FUNC_0(VAR_3, VAR_2->mme_compartments))
     return (0);
   return (VAR_1->mme_level >= VAR_2->mme_level);

  default:
   FUNC_1("mls_dominate_element: b->mme_type invalid");
  }

 default:
  FUNC_1("mls_dominate_element: a->mme_type invalid");
 }

 return (0);
}
