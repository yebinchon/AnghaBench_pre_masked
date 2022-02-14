
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct coverage_entry {int matched; int regs; TYPE_2__* header; } ;
struct TYPE_8__ {int num_entries; struct coverage_entry* base; } ;
struct TYPE_7__ {int bits; } ;
struct TYPE_5__ {int bits; } ;
struct TYPE_6__ {TYPE_1__ value; TYPE_3__ mask; } ;


 TYPE_4__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct coverage_entry*) ;
 int FUNC_1 (char*,int ,int ,...) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct coverage_entry *VAR_2 = VAR_0.base;
 struct coverage_entry *VAR_3 = VAR_0.base + VAR_0.num_entries;

 for (; VAR_2 < VAR_3; ++VAR_2) {
  u32 VAR_4 = VAR_2->header->mask.bits;
  u32 VAR_5 = VAR_2->header->value.bits;

  if (VAR_2->regs) {
   FUNC_1("FAIL: Register test coverage missing for %08x %08x (%05x)\n",
    VAR_4, VAR_5, VAR_2->regs);
   VAR_1 = 1;
  }
  if (!VAR_2->matched) {
   FUNC_1("FAIL: Test coverage entry missing for %08x %08x\n",
    VAR_4, VAR_5);
   VAR_1 = 1;
  }
 }

 FUNC_0(VAR_0.base);
}
