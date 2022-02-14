
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_lock {int queue; } ;


 int FUNC_0 (struct ttm_lock*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct ttm_lock *VAR_0, bool VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1)
  VAR_2 = FUNC_2(VAR_0->queue,
            FUNC_0(VAR_0));
 else
  FUNC_1(VAR_0->queue, FUNC_0(VAR_0));
 return VAR_2;
}
