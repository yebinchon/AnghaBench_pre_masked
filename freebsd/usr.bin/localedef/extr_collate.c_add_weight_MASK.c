
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pri; } ;
typedef TYPE_1__ weight_t ;
typedef int int32_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,TYPE_1__*) ;
 int FUNC_1 (int *,int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;

void
FUNC_5(int32_t VAR_3, int VAR_4)
{
 weight_t VAR_5;
 weight_t *VAR_6;

 VAR_5.pri = FUNC_4(VAR_3);


 if (VAR_5.pri == 0)
  return;


 if (VAR_5.pri & VAR_0)
  return;

 if (FUNC_0(VAR_2, &VAR_2[VAR_4], &VAR_5) != ((void*)0))
  return;

 if ((VAR_6 = FUNC_2(1, sizeof(*VAR_6))) == ((void*)0)) {
  FUNC_3(VAR_1, "out of memory");
  return;
 }
 VAR_6->pri = VAR_5.pri;
 FUNC_1(VAR_2, &VAR_2[VAR_4], VAR_6);
}
