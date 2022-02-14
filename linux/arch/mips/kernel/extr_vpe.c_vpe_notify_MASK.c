
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpe_notifications {int list; } ;
struct vpe {int notify; } ;


 struct vpe* FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;

int FUNC_2(int VAR_0, struct vpe_notifications *VAR_1)
{
 struct vpe *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2 == ((void*)0))
  return -1;

 FUNC_1(&VAR_1->list, &VAR_2->notify);
 return 0;
}
