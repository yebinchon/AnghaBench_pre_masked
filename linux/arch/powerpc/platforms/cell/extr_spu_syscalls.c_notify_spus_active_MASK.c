
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spufs_calls {int (* notify_spus_active ) () ;} ;


 struct spufs_calls* FUNC_0 () ;
 int FUNC_1 (struct spufs_calls*) ;
 int FUNC_2 () ;

void FUNC_3(void)
{
 struct spufs_calls *VAR_0;

 VAR_0 = FUNC_0();
 if (!VAR_0)
  return;

 VAR_0->notify_spus_active();
 FUNC_1(VAR_0);

 return;
}
