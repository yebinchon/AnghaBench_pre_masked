
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_stream {int buf; } ;
struct vmw_private {struct vmw_overlay* overlay_priv; } ;
struct vmw_overlay {int mutex; struct vmw_stream* stream; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vmw_private*,int,int,int) ;

int FUNC_4(struct vmw_private *VAR_1)
{
 struct vmw_overlay *VAR_2 = VAR_1->overlay_priv;
 int VAR_3, VAR_4;

 if (!VAR_2)
  return 0;

 FUNC_1(&VAR_2->mutex);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct vmw_stream *VAR_5 = &VAR_2->stream[VAR_3];
  if (!VAR_5->buf)
   continue;

  VAR_4 = FUNC_3(VAR_1, VAR_3, 0, 0);
  FUNC_0(VAR_4 != 0);
 }

 FUNC_2(&VAR_2->mutex);

 return 0;
}
