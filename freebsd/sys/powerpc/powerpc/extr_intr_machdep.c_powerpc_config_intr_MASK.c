
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerpc_intr {int trig; int pol; int intline; int * pic; } ;
typedef enum intr_trigger { ____Placeholder_intr_trigger } intr_trigger ;
typedef enum intr_polarity { ____Placeholder_intr_polarity } intr_polarity ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int) ;
 int VAR_1 ;
 struct powerpc_intr* FUNC_1 (int) ;

int
FUNC_2(int VAR_2, enum intr_trigger VAR_3, enum intr_polarity VAR_4)
{
 struct powerpc_intr *VAR_5;

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5 == ((void*)0))
  return (VAR_0);

 VAR_5->trig = VAR_3;
 VAR_5->pol = VAR_4;

 if (!VAR_1 && VAR_5->pic != ((void*)0))
  FUNC_0(VAR_5->pic, VAR_5->intline, VAR_3, VAR_4);

 return (0);
}
