
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_state {int stream_count; int * streams; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct dc_state *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0->stream_count < 2)
  return;
 for (VAR_1 = 0; VAR_1 < VAR_0->stream_count ; VAR_1++) {
  if (!VAR_0->streams[VAR_1])
   continue;





  FUNC_1(VAR_0->streams[VAR_1]);
 }
 FUNC_0(VAR_0->streams, VAR_0->stream_count);
}
