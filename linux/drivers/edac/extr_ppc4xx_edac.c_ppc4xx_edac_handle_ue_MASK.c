
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ppc4xx_ecc_status {int bearl; scalar_t__ bearh; } ;
struct mem_ctl_info {int nr_csrows; } ;
typedef int message ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct mem_ctl_info*,int,unsigned long const,unsigned long const,int ,int,int ,int,char*,char*) ;
 scalar_t__ FUNC_1 (struct ppc4xx_ecc_status const*,int) ;
 int FUNC_2 (struct mem_ctl_info*,struct ppc4xx_ecc_status const*,char*,int) ;

__attribute__((used)) static void
FUNC_3(struct mem_ctl_info *VAR_4,
        const struct ppc4xx_ecc_status *VAR_5)
{
 const u64 VAR_6 = ((u64)VAR_5->bearh << 32 | VAR_5->bearl);
 const unsigned long VAR_7 = VAR_6 >> VAR_2;
 const unsigned long VAR_8 = VAR_6 & ~VAR_1;
 int VAR_9;
 char VAR_10[VAR_3];

 FUNC_2(VAR_4, VAR_5, VAR_10, sizeof(VAR_10));

 for (VAR_9 = 0; VAR_9 < VAR_4->nr_csrows; VAR_9++)
  if (FUNC_1(VAR_5, VAR_9))
   FUNC_0(VAR_0, VAR_4, 1,
          VAR_7, VAR_8, 0,
          VAR_9, 0, -1,
          VAR_10, "");
}
