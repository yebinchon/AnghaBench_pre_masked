
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plt_entry {scalar_t__* bundle; } ;
struct module {int dummy; } ;
struct insn {int dummy; } ;
typedef int int64_t ;


 scalar_t__ FUNC_0 (struct module*,struct insn*,int) ;
 scalar_t__ FUNC_1 (struct module*,struct insn*,unsigned long) ;

__attribute__((used)) static int
FUNC_2 (struct module *VAR_0, struct plt_entry *VAR_1, long VAR_2, unsigned long VAR_3)
{
 if (FUNC_1(VAR_0, (struct insn *) (VAR_1->bundle[0] + 2), VAR_3)
     && FUNC_0(VAR_0, (struct insn *) (VAR_1->bundle[1] + 2),
      (VAR_2 - (int64_t) VAR_1->bundle[1]) / 16))
  return 1;
 return 0;
}
