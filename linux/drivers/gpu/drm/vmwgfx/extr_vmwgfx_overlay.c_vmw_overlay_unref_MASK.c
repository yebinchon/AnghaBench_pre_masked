
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct vmw_private {struct vmw_overlay* overlay_priv; } ;
struct vmw_overlay {int mutex; TYPE_1__* stream; } ;
struct TYPE_2__ {int claimed; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vmw_private*,size_t,int,int) ;

int FUNC_5(struct vmw_private *VAR_2, uint32_t VAR_3)
{
 struct vmw_overlay *VAR_4 = VAR_2->overlay_priv;

 FUNC_0(VAR_3 >= VAR_1);

 if (!VAR_4)
  return -VAR_0;

 FUNC_2(&VAR_4->mutex);

 FUNC_1(!VAR_4->stream[VAR_3].claimed);
 FUNC_4(VAR_2, VAR_3, 0, 0);
 VAR_4->stream[VAR_3].claimed = 0;

 FUNC_3(&VAR_4->mutex);
 return 0;
}
