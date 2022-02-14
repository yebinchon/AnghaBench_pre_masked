
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc4xx_ecc_status {int dummy; } ;
struct mem_ctl_info {int nr_csrows; } ;
typedef int message ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct mem_ctl_info*,int,int ,int ,int ,int,int ,int,char*,char*) ;
 scalar_t__ FUNC_1 (struct ppc4xx_ecc_status const*,int) ;
 int FUNC_2 (struct mem_ctl_info*,struct ppc4xx_ecc_status const*,char*,int) ;

__attribute__((used)) static void
FUNC_3(struct mem_ctl_info *VAR_2,
        const struct ppc4xx_ecc_status *VAR_3)
{
 int VAR_4;
 char VAR_5[VAR_1];

 FUNC_2(VAR_2, VAR_3, VAR_5, sizeof(VAR_5));

 for (VAR_4 = 0; VAR_4 < VAR_2->nr_csrows; VAR_4++)
  if (FUNC_1(VAR_3, VAR_4))
   FUNC_0(VAR_0, VAR_2, 1,
          0, 0, 0,
          VAR_4, 0, -1,
          VAR_5, "");
}
