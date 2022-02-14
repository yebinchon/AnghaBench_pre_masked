
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union decode_item {int dummy; } decode_item ;
struct table_test_args {union decode_item const* root_table; int parent_value; int parent_mask; } ;


 int FUNC_0 (union decode_item const*,int ,struct table_test_args*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const union decode_item *VAR_1)
{
 struct table_test_args VAR_2 = {
  .root_table = VAR_1,
  .parent_mask = 0,
  .parent_value = 0
 };
 return FUNC_0(VAR_2.root_table, VAR_0, &VAR_2);
}
