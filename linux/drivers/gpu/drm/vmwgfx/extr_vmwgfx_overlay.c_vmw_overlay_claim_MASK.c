
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vmw_private {struct vmw_overlay* overlay_priv; } ;
struct vmw_overlay {int mutex; TYPE_1__* stream; } ;
struct TYPE_2__ {int claimed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct vmw_private *VAR_3, uint32_t *VAR_4)
{
 struct vmw_overlay *VAR_5 = VAR_3->overlay_priv;
 int VAR_6;

 if (!VAR_5)
  return -VAR_0;

 FUNC_0(&VAR_5->mutex);

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {

  if (VAR_5->stream[VAR_6].claimed)
   continue;

  VAR_5->stream[VAR_6].claimed = 1;
  *VAR_4 = VAR_6;
  FUNC_1(&VAR_5->mutex);
  return 0;
 }

 FUNC_1(&VAR_5->mutex);
 return -VAR_1;
}
