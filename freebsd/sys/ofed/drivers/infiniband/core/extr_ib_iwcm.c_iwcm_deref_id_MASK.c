
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwcm_id_private {int work_list; int refcount; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct iwcm_id_private*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iwcm_id_private *VAR_0)
{
 FUNC_0(FUNC_2(&VAR_0->refcount)==0);
 if (FUNC_1(&VAR_0->refcount)) {
  FUNC_0(!FUNC_4(&VAR_0->work_list));
  FUNC_3(VAR_0);
  return 1;
 }

 return 0;
}
