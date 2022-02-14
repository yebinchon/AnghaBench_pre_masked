
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_private {struct vmw_overlay* overlay_priv; } ;
struct vmw_overlay {int mutex; TYPE_1__* stream; } ;
struct TYPE_2__ {int claimed; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vmw_private*) ;

int FUNC_3(struct vmw_private *VAR_1)
{
 struct vmw_overlay *VAR_2 = VAR_1->overlay_priv;
 int VAR_3, VAR_4;

 if (!FUNC_2(VAR_1))
  return 0;

 FUNC_0(&VAR_2->mutex);

 for (VAR_3 = 0, VAR_4 = 0; VAR_3 < VAR_0; VAR_3++)
  if (!VAR_2->stream[VAR_3].claimed)
   VAR_4++;

 FUNC_1(&VAR_2->mutex);

 return VAR_4;
}
