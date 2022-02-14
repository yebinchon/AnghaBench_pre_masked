
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int user_comp; int user_refcount; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct hfi1_devdata *VAR_0)
{




 if (FUNC_0(&VAR_0->user_refcount))
  FUNC_1(&VAR_0->user_comp);

 FUNC_2(&VAR_0->user_comp);
}
