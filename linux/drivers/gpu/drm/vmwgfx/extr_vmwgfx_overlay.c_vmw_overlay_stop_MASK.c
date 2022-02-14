
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct vmw_stream {int paused; int buf; } ;
struct vmw_private {struct vmw_overlay* overlay_priv; } ;
struct vmw_overlay {struct vmw_stream* stream; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vmw_private*,int ,int,int) ;
 int FUNC_3 (struct vmw_private*,size_t,int) ;

__attribute__((used)) static int FUNC_4(struct vmw_private *VAR_1,
       uint32_t VAR_2, bool VAR_3,
       bool VAR_4)
{
 struct vmw_overlay *VAR_5 = VAR_1->overlay_priv;
 struct vmw_stream *VAR_6 = &VAR_5->stream[VAR_2];
 int VAR_7;


 if (!VAR_6->buf)
  return 0;


 if (!VAR_6->paused) {
  VAR_7 = FUNC_3(VAR_1, VAR_2,
         VAR_4);
  if (VAR_7)
   return VAR_7;


  VAR_7 = FUNC_2(VAR_1, VAR_6->buf, 0,
           VAR_4);
  if (VAR_4 && VAR_7 == -VAR_0)
   return VAR_7;
  else
   FUNC_0(VAR_7 != 0);
 }

 if (!VAR_3) {
  FUNC_1(&VAR_6->buf);
  VAR_6->paused = 0;
 } else {
  VAR_6->paused = 1;
 }

 return 0;
}
