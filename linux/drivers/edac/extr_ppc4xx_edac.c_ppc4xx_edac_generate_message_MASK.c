
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc4xx_ecc_status {int dummy; } ;
struct mem_ctl_info {int dummy; } ;


 int FUNC_0 (struct mem_ctl_info const*,struct ppc4xx_ecc_status const*,char*,size_t) ;
 int FUNC_1 (struct mem_ctl_info const*,struct ppc4xx_ecc_status const*,char*,size_t) ;

__attribute__((used)) static void
FUNC_2(const struct mem_ctl_info *VAR_0,
        const struct ppc4xx_ecc_status *VAR_1,
        char *VAR_2,
        size_t VAR_3)
{
 int VAR_4;

 if (VAR_2 == ((void*)0) || VAR_3 == 0)
  return;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);

 if (VAR_4 < 0 || VAR_4 >= VAR_3)
  return;

 VAR_2 += VAR_4;
 VAR_3 -= VAR_4;

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
