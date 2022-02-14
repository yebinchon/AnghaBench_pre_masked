
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_private {struct vmw_overlay* overlay_priv; } ;
struct vmw_overlay {TYPE_1__* stream; } ;
struct TYPE_2__ {scalar_t__ buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vmw_overlay*) ;
 int FUNC_2 (struct vmw_private*,int,int,int) ;

int FUNC_3(struct vmw_private *VAR_2)
{
 struct vmw_overlay *VAR_3 = VAR_2->overlay_priv;
 bool VAR_4 = 0;
 int VAR_5;

 if (!VAR_3)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_3->stream[VAR_5].buf) {
   VAR_4 = 1;
   FUNC_2(VAR_2, VAR_5, 0, 0);
  }
 }

 FUNC_0(VAR_4);

 VAR_2->overlay_priv = ((void*)0);
 FUNC_1(VAR_3);

 return 0;
}
