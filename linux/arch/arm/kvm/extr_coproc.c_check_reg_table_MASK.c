
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coproc_reg {int dummy; } ;


 scalar_t__ FUNC_0 (struct coproc_reg const*,struct coproc_reg const*) ;
 int FUNC_1 (char*,struct coproc_reg const*,unsigned int) ;

__attribute__((used)) static int FUNC_2(const struct coproc_reg *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 1; VAR_2 < VAR_1; VAR_2++) {
  if (FUNC_0(&VAR_0[VAR_2-1], &VAR_0[VAR_2]) >= 0) {
   FUNC_1("reg table %p out of order (%d)\n", VAR_0, VAR_2 - 1);
   return 1;
  }
 }

 return 0;
}
