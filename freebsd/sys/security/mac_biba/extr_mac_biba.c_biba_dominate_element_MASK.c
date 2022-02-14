
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_biba_element {int mbe_type; int mbe_grade; int mbe_compartments; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;




 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(struct mac_biba_element *VAR_1, struct mac_biba_element *VAR_2)
{
 int VAR_3;

 switch (VAR_1->mbe_type) {
 case 131:
 case 129:
  return (1);

 case 128:
  switch (VAR_2->mbe_type) {
  case 130:
  case 129:
   return (0);

  case 131:
  case 128:
   return (1);

  default:
   FUNC_1("biba_dominate_element: b->mbe_type invalid");
  }

 case 130:
  switch (VAR_2->mbe_type) {
  case 131:
  case 128:
   return (1);

  case 129:
   return (0);

  case 130:
   for (VAR_3 = 1; VAR_3 <= VAR_0; VAR_3++)
    if (!FUNC_0(VAR_3,
        VAR_1->mbe_compartments) &&
        FUNC_0(VAR_3, VAR_2->mbe_compartments))
     return (0);
   return (VAR_1->mbe_grade >= VAR_2->mbe_grade);

  default:
   FUNC_1("biba_dominate_element: b->mbe_type invalid");
  }

 default:
  FUNC_1("biba_dominate_element: a->mbe_type invalid");
 }

 return (0);
}
