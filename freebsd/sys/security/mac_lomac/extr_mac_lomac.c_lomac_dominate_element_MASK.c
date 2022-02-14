
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_lomac_element {int mle_type; int mle_grade; } ;






 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(struct mac_lomac_element *VAR_0,
    struct mac_lomac_element *VAR_1)
{

 switch (VAR_0->mle_type) {
 case 131:
 case 129:
  return (1);

 case 128:
  switch (VAR_1->mle_type) {
  case 130:
  case 129:
   return (0);

  case 131:
  case 128:
   return (1);

  default:
   FUNC_0("lomac_dominate_element: b->mle_type invalid");
  }

 case 130:
  switch (VAR_1->mle_type) {
  case 131:
  case 128:
   return (1);

  case 129:
   return (0);

  case 130:
   return (VAR_0->mle_grade >= VAR_1->mle_grade);

  default:
   FUNC_0("lomac_dominate_element: b->mle_type invalid");
  }

 default:
  FUNC_0("lomac_dominate_element: a->mle_type invalid");
 }
}
