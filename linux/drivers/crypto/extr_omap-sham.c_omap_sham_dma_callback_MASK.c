
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_sham_dev {int done_task; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 struct omap_sham_dev *VAR_2 = VAR_1;

 FUNC_0(VAR_0, &VAR_2->flags);
 FUNC_1(&VAR_2->done_task);
}
