
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct mac_lomac_element {int mle_type; int mle_grade; } ;






 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct sbuf*,char*,...) ;

__attribute__((used)) static int
FUNC_2(struct sbuf *VAR_0, struct mac_lomac_element *VAR_1)
{

 switch (VAR_1->mle_type) {
 case 129:
  return (FUNC_1(VAR_0, "high"));

 case 128:
  return (FUNC_1(VAR_0, "low"));

 case 131:
  return (FUNC_1(VAR_0, "equal"));

 case 130:
  return (FUNC_1(VAR_0, "%d", VAR_1->mle_grade));

 default:
  FUNC_0("lomac_element_to_string: invalid type (%d)",
      VAR_1->mle_type);
 }
}
