
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_bo {int madv; int madv_lock; int usecnt; } ;


 int VAR_0 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

int FUNC_4(struct vc4_bo *VAR_1)
{
 int VAR_2;




 if (FUNC_2(&VAR_1->usecnt))
  return 0;

 FUNC_0(&VAR_1->madv_lock);
 switch (VAR_1->madv) {
 case 129:
  if (!FUNC_2(&VAR_1->usecnt))
   FUNC_3(&VAR_1->usecnt, 1);
  VAR_2 = 0;
  break;
 case 130:






 case 128:

 default:

  VAR_2 = -VAR_0;
  break;
 }
 FUNC_1(&VAR_1->madv_lock);

 return VAR_2;
}
