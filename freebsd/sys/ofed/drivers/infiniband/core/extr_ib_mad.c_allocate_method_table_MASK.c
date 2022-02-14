
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad_mgmt_method_table {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_mad_mgmt_method_table* FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct ib_mad_mgmt_method_table **VAR_2)
{

 *VAR_2 = FUNC_0(sizeof **VAR_2, VAR_1);
 if (!*VAR_2) {
  FUNC_1("No memory for ib_mad_mgmt_method_table\n");
  return -VAR_0;
 }

 return 0;
}
