
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int table ;
struct coproc_reg {int dummy; } ;
struct coproc_params {int dummy; } ;


 struct coproc_reg const* FUNC_0 (void*,struct coproc_reg const*,unsigned int,int,int ) ;
 int VAR_0 ;
 unsigned long FUNC_1 (struct coproc_params const*) ;

__attribute__((used)) static const struct coproc_reg *FUNC_2(const struct coproc_params *VAR_1,
      const struct coproc_reg VAR_2[],
      unsigned int VAR_3)
{
 unsigned long VAR_4 = FUNC_1(VAR_1);

 return FUNC_0((void *)VAR_4, VAR_2, VAR_3, sizeof(VAR_2[0]), VAR_0);
}
