
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i; } ;
struct src_insn {int dst_reg_flags; TYPE_1__ arg; int i_count; } ;
struct func_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct func_info* const) ;
 int FUNC_1 (struct func_info* const) ;
 int FUNC_2 (int ,int,int,...) ;
 int FUNC_3 (struct func_info* const) ;
 int VAR_5 ;
 int FUNC_4 (struct func_info* const,int) ;
 int FUNC_5 (struct func_info* const,int ) ;

__attribute__((used)) static void FUNC_6(struct func_info * const VAR_6, struct src_insn *VAR_7)
{
 FUNC_5(VAR_6, VAR_7->i_count);
 if (VAR_7->dst_reg_flags & VAR_3) {
  FUNC_2(VAR_1, VAR_5, FUNC_4(VAR_6, VAR_7->arg.i), FUNC_1(VAR_6));
 } else {
  if ((VAR_7->arg.i & ~0x3ff) == 0) {
   FUNC_2(VAR_2, VAR_0, VAR_7->arg.i & 0x3ff, FUNC_3(VAR_6));
  } else if ((VAR_7->arg.i & 0x3ff) == 0) {
   FUNC_2(VAR_4, VAR_7->arg.i >> 10, FUNC_3(VAR_6));
  } else {
   FUNC_2(VAR_4, VAR_7->arg.i >> 10, FUNC_3(VAR_6));
   FUNC_2(VAR_2, FUNC_3(VAR_6), VAR_7->arg.i & 0x3ff, FUNC_3(VAR_6));
  }
 }
 FUNC_0(VAR_6);
}
