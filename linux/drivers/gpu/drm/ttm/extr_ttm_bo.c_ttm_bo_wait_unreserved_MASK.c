
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int resv; } ;
struct ttm_buffer_object {int wu_mutex; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct ttm_buffer_object *VAR_2)
{
 int VAR_3;
 VAR_3 = FUNC_3(&VAR_2->wu_mutex);
 if (FUNC_5(VAR_3 != 0))
  return -VAR_1;
 if (!FUNC_0(VAR_2->base.resv))
  goto out_unlock;
 VAR_3 = FUNC_1(VAR_2->base.resv, ((void*)0));
 if (VAR_3 == -VAR_0)
  VAR_3 = -VAR_1;
 if (FUNC_5(VAR_3 != 0))
  goto out_unlock;
 FUNC_2(VAR_2->base.resv);

out_unlock:
 FUNC_4(&VAR_2->wu_mutex);
 return VAR_3;
}
