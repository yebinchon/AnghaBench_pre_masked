
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_state {unsigned long loc; unsigned long codeAlign; } ;


 int FUNC_0 (char*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_0, struct unwind_state *VAR_1)
{
 VAR_1->loc += VAR_0 * VAR_1->codeAlign;




 FUNC_0("delta %3lu => loc 0x%lx: ", VAR_0, VAR_1->loc);
 return 1;
}
