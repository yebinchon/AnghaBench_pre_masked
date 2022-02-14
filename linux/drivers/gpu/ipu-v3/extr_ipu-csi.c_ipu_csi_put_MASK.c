
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_csi {int inuse; int lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct ipu_csi *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_0->lock, VAR_1);
 VAR_0->inuse = 0;
 FUNC_1(&VAR_0->lock, VAR_1);
}
