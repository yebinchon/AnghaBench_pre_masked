
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_cdmm_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mips_cdmm_bus* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct mips_cdmm_bus* FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 struct mips_cdmm_bus VAR_4 ;
 int VAR_5 ;
 struct mips_cdmm_bus** FUNC_4 (int *,unsigned int) ;
 unsigned int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static struct mips_cdmm_bus *FUNC_7(void)
{
 struct mips_cdmm_bus *VAR_6, **VAR_7;
 unsigned long VAR_8;
 unsigned int VAR_9;

 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_9 = FUNC_5();

 if (VAR_9 == 0)
  return &VAR_4;


 VAR_7 = FUNC_4(&VAR_5, VAR_9);
 FUNC_3(VAR_8);
 VAR_6 = *VAR_7;

 if (FUNC_6(!VAR_6)) {
  VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_2);
  if (FUNC_6(!VAR_6))
   VAR_6 = FUNC_0(-VAR_1);
  else
   *VAR_7 = VAR_6;
 }
 FUNC_2(VAR_8);
 return VAR_6;
}
