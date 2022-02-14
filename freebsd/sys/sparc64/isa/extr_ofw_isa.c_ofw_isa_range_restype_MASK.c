
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isa_ranges {int dummy; } ;


 int FUNC_0 (struct isa_ranges*) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;

int
FUNC_2(struct isa_ranges *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2);

 switch (VAR_3) {
 case 129:
  return (VAR_0);
 case 128:
  return (VAR_1);
 default:
  FUNC_1("ofw_isa_range_restype: illegal space %x", VAR_3);
 }

}
