
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_cdmm_bus {int offline; } ;


 int FUNC_0 (struct mips_cdmm_bus*) ;
 long FUNC_1 (int *,int *,unsigned int*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct mips_cdmm_bus* FUNC_2 () ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_2)
{
 struct mips_cdmm_bus *VAR_3;
 long VAR_4;


 VAR_4 = FUNC_1(&VAR_0, ((void*)0), &VAR_2,
          VAR_1);





 VAR_3 = FUNC_2();
 if (!FUNC_0(VAR_3))
  VAR_3->offline = 1;

 return VAR_4;
}
