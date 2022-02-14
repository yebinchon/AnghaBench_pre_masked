
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct die_args {char const* str; long err; int trapnr; int signr; struct pt_regs* regs; } ;


 int VAR_0 ;
 int FUNC_0 (struct die_args*,int) ;
 int VAR_1 ;

int FUNC_1(int VAR_2, const char *VAR_3,
   struct pt_regs *VAR_4, long VAR_5, int VAR_6, int VAR_7)
{
 struct die_args VAR_8 = {
  .regs = VAR_4,
  .str = VAR_3,
  .err = VAR_5,
  .trapnr = VAR_6,
  .signr = VAR_7,

 };

 if (!VAR_1)
  return VAR_0;

 return FUNC_0(&VAR_8, VAR_2);
}
