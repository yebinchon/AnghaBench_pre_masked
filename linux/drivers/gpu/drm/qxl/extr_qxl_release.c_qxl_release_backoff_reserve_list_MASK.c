
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qxl_release {int bos; int ticket; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct qxl_release *VAR_0)
{


 if (FUNC_0(&VAR_0->bos))
  return;

 FUNC_1(&VAR_0->ticket, &VAR_0->bos);
}
