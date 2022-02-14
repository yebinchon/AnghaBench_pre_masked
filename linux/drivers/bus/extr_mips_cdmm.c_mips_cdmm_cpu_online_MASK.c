
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_cdmm_bus {int offline; int discovered; } ;


 long FUNC_0 (int *,int *,unsigned int*,int ) ;
 int FUNC_1 (struct mips_cdmm_bus*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct mips_cdmm_bus* FUNC_2 () ;
 long FUNC_3 (struct mips_cdmm_bus*) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_2)
{
 struct mips_cdmm_bus *VAR_3;
 long VAR_4;

 VAR_3 = FUNC_2();
 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  return VAR_4;


 VAR_3->offline = 0;

 if (!VAR_3->discovered)
  FUNC_1(VAR_3);
 else

  VAR_4 = FUNC_0(&VAR_0, ((void*)0), &VAR_2,
           VAR_1);

 return VAR_4;
}
