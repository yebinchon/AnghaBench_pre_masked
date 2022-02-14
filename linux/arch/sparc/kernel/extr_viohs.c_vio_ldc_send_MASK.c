
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_driver_state {int lp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void*,int) ;
 int FUNC_1 (int) ;

int FUNC_2(struct vio_driver_state *VAR_2, void *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = 1000;

 VAR_5 = -VAR_1;
 while (VAR_6-- > 0) {
  VAR_5 = FUNC_0(VAR_2->lp, VAR_3, VAR_4);
  if (!VAR_5 || (VAR_5 != -VAR_0))
   break;
  FUNC_1(1);
 }

 return VAR_5;
}
