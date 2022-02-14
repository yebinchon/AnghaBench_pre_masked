
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int table; } ;
struct decode_table {TYPE_2__ table; } ;
struct TYPE_3__ {int bits; } ;
struct decode_header {TYPE_1__ type_regs; } ;
struct coverage_table {int num_entries; int nesting; struct coverage_entry* base; } ;
struct coverage_entry {int matched; int nesting; int regs; struct decode_header const* header; } ;
typedef enum decode_type { ____Placeholder_decode_type } decode_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct decode_header const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int (*) (struct decode_header const*,void*),struct coverage_table*) ;

__attribute__((used)) static int FUNC_3(const struct decode_header *VAR_4, void *VAR_5)
{
 struct coverage_table *VAR_6 = (struct coverage_table *)VAR_5;
 enum decode_type VAR_7 = VAR_4->type_regs.bits & VAR_0;
 struct coverage_entry *VAR_8 = VAR_6->base + VAR_6->num_entries;

 if (VAR_6->num_entries == VAR_3 - 1) {
  FUNC_1("FAIL: Out of space for test coverage data");
  return -VAR_2;
 }

 ++VAR_6->num_entries;

 VAR_8->header = VAR_4;
 VAR_8->regs = FUNC_0(VAR_4);
 VAR_8->nesting = VAR_6->nesting;
 VAR_8->matched = 0;

 if (VAR_7 == VAR_1) {
  struct decode_table *VAR_9 = (struct decode_table *)VAR_4;
  int VAR_10;
  ++VAR_6->nesting;
  VAR_10 = FUNC_2(VAR_9->table.table, FUNC_3, VAR_6);
  --VAR_6->nesting;
  return VAR_10;
 }

 return 0;
}
