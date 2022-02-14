
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct mac_mls_element {int mme_type; int mme_level; int mme_compartments; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;




 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct sbuf*,char*,...) ;
 int FUNC_3 (struct sbuf*,char) ;

__attribute__((used)) static int
FUNC_4(struct sbuf *VAR_1, struct mac_mls_element *VAR_2)
{
 int VAR_3, VAR_4;

 switch (VAR_2->mme_type) {
 case 130:
  return (FUNC_2(VAR_1, "high"));

 case 128:
  return (FUNC_2(VAR_1, "low"));

 case 131:
  return (FUNC_2(VAR_1, "equal"));

 case 129:
  if (FUNC_2(VAR_1, "%d", VAR_2->mme_level) == -1)
   return (-1);

  VAR_4 = 1;
  for (VAR_3 = 1; VAR_3 <= VAR_0; VAR_3++) {
   if (FUNC_0(VAR_3, VAR_2->mme_compartments)) {
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
  FUNC_1("mls_element_to_string: invalid type (%d)",
      VAR_2->mme_type);
 }
}
