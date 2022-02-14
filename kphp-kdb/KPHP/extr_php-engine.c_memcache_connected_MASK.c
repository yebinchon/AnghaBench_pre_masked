
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int * Tmp; int Out; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *) ;

int FUNC_2 (struct connection *VAR_0) {
  if (VAR_0->Tmp != ((void*)0)) {
    int VAR_1 = FUNC_1 (VAR_0->Tmp);
    FUNC_0 (&VAR_0->Out, VAR_0->Tmp, VAR_1);
  }

  return 0;
}
