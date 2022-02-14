
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct stm_fs {int sdiv; int nsdiv; int mdiv; int pe; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,int) ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_1,
    const struct stm_fs *VAR_2, unsigned long *VAR_3)
{
 unsigned long VAR_4 = (1 << VAR_2->sdiv);
 unsigned long VAR_5;
 uint64_t VAR_6;
 VAR_5 = (VAR_2->nsdiv == 1) ? 1 : 3;

 VAR_6 = (VAR_0 * (32 + VAR_2->mdiv) + 32 * VAR_2->pe) * VAR_4 * VAR_5;
 *VAR_3 = (unsigned long)FUNC_0(VAR_1 * VAR_0 * 32, VAR_6);

 return 0;
}
