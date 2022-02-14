
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* name; int ref; } ;
typedef TYPE_1__ collsym_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,int *,TYPE_1__*) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 int VAR_2 ;

void
FUNC_6(char *VAR_3)
{
 collsym_t *VAR_4;

 if ((VAR_4 = FUNC_2(1, sizeof(*VAR_4))) == ((void*)0)) {
  FUNC_3(VAR_2,"out of memory");
  return;
 }
 VAR_4->name = VAR_3;
 VAR_4->ref = FUNC_5();

 if (FUNC_0(VAR_1, &VAR_1, VAR_4) != ((void*)0)) {




  FUNC_4(VAR_4);
  VAR_0;
  return;
 }
 FUNC_1(VAR_1, &VAR_1, VAR_4);
}
