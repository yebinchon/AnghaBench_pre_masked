
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct table_test_args {int parent_mask; int parent_value; } ;
struct TYPE_8__ {int table; } ;
struct decode_table {TYPE_4__ table; } ;
struct TYPE_7__ {int bits; } ;
struct TYPE_6__ {int bits; } ;
struct TYPE_5__ {int bits; } ;
struct decode_header {TYPE_3__ value; TYPE_2__ mask; TYPE_1__ type_regs; } ;
typedef enum decode_type { ____Placeholder_decode_type } decode_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int (*) (struct decode_header const*,void*),struct table_test_args*) ;
 int FUNC_1 (struct decode_header const*,char*) ;

__attribute__((used)) static int FUNC_2(const struct decode_header *VAR_2, void *VAR_3)
{
 struct table_test_args *VAR_4 = (struct table_test_args *)VAR_3;
 enum decode_type VAR_5 = VAR_2->type_regs.bits & VAR_0;

 if (VAR_2->value.bits & ~VAR_2->mask.bits)
  return FUNC_1(VAR_2, "Match value has bits not in mask");

 if ((VAR_2->mask.bits & VAR_4->parent_mask) != VAR_4->parent_mask)
  return FUNC_1(VAR_2, "Mask has bits not in parent mask");

 if ((VAR_2->value.bits ^ VAR_4->parent_value) & VAR_4->parent_mask)
  return FUNC_1(VAR_2, "Value is inconsistent with parent");

 if (VAR_5 == VAR_1) {
  struct decode_table *VAR_6 = (struct decode_table *)VAR_2;
  struct table_test_args VAR_7 = *VAR_4;
  VAR_7 = VAR_2->mask.bits;
  VAR_7 = VAR_2->value.bits;
  return FUNC_0(VAR_6->table.table, FUNC_2, &VAR_7);
 }

 return 0;
}
