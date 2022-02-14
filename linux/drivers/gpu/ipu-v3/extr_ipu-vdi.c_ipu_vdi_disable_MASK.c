
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_vdi {int lock; int module; int ipu; scalar_t__ use_count; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct ipu_vdi *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->lock, VAR_1);

 if (VAR_0->use_count) {
  if (!--VAR_0->use_count)
   FUNC_0(VAR_0->ipu, VAR_0->module);
 }

 FUNC_2(&VAR_0->lock, VAR_1);

 return 0;
}
