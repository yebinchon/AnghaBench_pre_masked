
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysmmu_drvdata {scalar_t__ version; scalar_t__ sfrbase; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct sysmmu_drvdata *VAR_6)
{
 unsigned int VAR_7;

 if (VAR_6->version <= FUNC_1(3, 1))
  VAR_7 = VAR_3 | FUNC_0(15);
 else if (VAR_6->version <= FUNC_1(3, 2))
  VAR_7 = VAR_3 | FUNC_0(15) | VAR_2 | VAR_4;
 else
  VAR_7 = FUNC_0(15) | VAR_2 | VAR_0;

 VAR_7 |= VAR_1;

 FUNC_2(VAR_7, VAR_6->sfrbase + VAR_5);
}
