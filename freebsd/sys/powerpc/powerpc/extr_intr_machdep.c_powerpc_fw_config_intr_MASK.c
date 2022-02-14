
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerpc_intr {int fwcode; int pol; int trig; int intline; int * pic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *,int ,int,int *,int *) ;
 int VAR_3 ;
 struct powerpc_intr* FUNC_2 (int) ;

int
FUNC_3(int VAR_4, int VAR_5)
{
 struct powerpc_intr *VAR_6;

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6 == ((void*)0))
  return (VAR_0);

 VAR_6->trig = VAR_2;
 VAR_6->pol = VAR_1;
 VAR_6->fwcode = VAR_5;

 if (!VAR_3 && VAR_6->pic != ((void*)0)) {
  FUNC_1(VAR_6->pic, VAR_6->intline, VAR_6->fwcode, &VAR_6->trig,
      &VAR_6->pol);
  FUNC_0(VAR_6->pic, VAR_6->intline, VAR_6->trig, VAR_6->pol);
 }

 return (0);
}
