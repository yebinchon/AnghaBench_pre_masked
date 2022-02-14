
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_private {struct vmw_overlay* overlay_priv; } ;
struct vmw_overlay {TYPE_1__* stream; int mutex; } ;
struct TYPE_2__ {int paused; int claimed; int * buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vmw_overlay* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct vmw_private *VAR_4)
{
 struct vmw_overlay *VAR_5;
 int VAR_6;

 if (VAR_4->overlay_priv)
  return -VAR_0;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 FUNC_1(&VAR_5->mutex);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_5->stream[VAR_6].buf = ((void*)0);
  VAR_5->stream[VAR_6].paused = 0;
  VAR_5->stream[VAR_6].claimed = 0;
 }

 VAR_4->overlay_priv = VAR_5;

 return 0;
}
