
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct mac_biba_element {int mbe_type; int mbe_grade; int mbe_compartments; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;




 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct sbuf*,char*,...) ;
 int FUNC_3 (struct sbuf*,char) ;

__attribute__((used)) static int
FUNC_4(struct sbuf *VAR_1, struct mac_biba_element *VAR_2)
{
 int VAR_3, VAR_4;

 switch (VAR_2->mbe_type) {
 case 129:
  return (FUNC_2(VAR_1, "high"));

 case 128:
  return (FUNC_2(VAR_1, "low"));

 case 131:
  return (FUNC_2(VAR_1, "equal"));

 case 130:
  if (FUNC_2(VAR_1, "%d", VAR_2->mbe_grade) == -1)
   return (-1);

  VAR_4 = 1;
  for (VAR_3 = 1; VAR_3 <= VAR_0; VAR_3++) {
   if (FUNC_0(VAR_3, VAR_2->mbe_compartments)) {
    if (VAR_4) {
     if (FUNC_3(VAR_1, ':') == -1)
      return (-1);
     if (FUNC_2(VAR_1, "%d", VAR_3) == -1)
      return (-1);
     VAR_4 = 0;
    } else {
     if (FUNC_2(VAR_1, "+%d", VAR_3) == -1)
      return (-1);
    }
   }
  }
  return (0);

 default:
  FUNC_1("biba_element_to_string: invalid type (%d)",
      VAR_2->mbe_type);
 }
}
