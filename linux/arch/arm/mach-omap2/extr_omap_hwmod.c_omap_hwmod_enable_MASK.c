
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hwmod {int _lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct omap_hwmod*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct omap_hwmod *VAR_1)
{
 int VAR_2;
 unsigned long VAR_3;

 if (!VAR_1)
  return -VAR_0;

 FUNC_1(&VAR_1->_lock, VAR_3);
 VAR_2 = FUNC_0(VAR_1);
 FUNC_2(&VAR_1->_lock, VAR_3);

 return VAR_2;
}
