
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int reg_array_size; scalar_t__ extended_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int
FUNC_2(void)
{
 int VAR_3, VAR_4, VAR_5;

 VAR_5 = FUNC_0();
 if (VAR_5 == 0xff && VAR_2.extended_regs) {
  VAR_3 = FUNC_0();
  VAR_4 = FUNC_0();
  if (VAR_3 == VAR_0 || VAR_4 == VAR_0) {
   FUNC_1("unexpected eof");
   VAR_5 = -1;
  } else
   VAR_5 = (VAR_3 << 8) + VAR_4 + VAR_1 + 1;
 }
 if (VAR_5 < 0 || (unsigned)VAR_5 >= VAR_2.reg_array_size) {
  FUNC_1("internal error: reg num = %d", VAR_5);
  VAR_5 = -1;
 }
 return (VAR_5);
}
