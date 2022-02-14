
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct func_info {scalar_t__ force_emit; scalar_t__ insn_index; } ;


 int FUNC_0 (struct func_info* const) ;

__attribute__((used)) static void FUNC_1(struct func_info * const VAR_0)
{
 if (VAR_0->insn_index || VAR_0->force_emit)
  FUNC_0(VAR_0);
}
