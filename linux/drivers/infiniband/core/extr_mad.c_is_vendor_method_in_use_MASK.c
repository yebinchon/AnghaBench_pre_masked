
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad_reg_req {int oui; } ;
struct ib_mad_mgmt_vendor_class {struct ib_mad_mgmt_method_table** method_table; int * oui; } ;
struct ib_mad_mgmt_method_table {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (struct ib_mad_mgmt_method_table**,struct ib_mad_reg_req*) ;

__attribute__((used)) static int FUNC_2(
  struct ib_mad_mgmt_vendor_class *VAR_1,
  struct ib_mad_reg_req *VAR_2)
{
 struct ib_mad_mgmt_method_table *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!FUNC_0(VAR_1->oui[VAR_4], VAR_2->oui, 3)) {
   VAR_3 = VAR_1->method_table[VAR_4];
   if (VAR_3) {
    if (FUNC_1(&VAR_3, VAR_2))
     return 1;
    else
     break;
   }
  }
 }
 return 0;
}
