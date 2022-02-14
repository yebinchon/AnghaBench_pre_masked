
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_ctx {int stream; scalar_t__ top_pipe; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(const struct pipe_ctx VAR_1[],
     int VAR_2)
{
 const struct pipe_ctx *VAR_3[VAR_0];
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (!VAR_1[VAR_4].stream || VAR_1[VAR_4].top_pipe)
   continue;

  VAR_3[VAR_5++] = &VAR_1[VAR_4];
 }

 if (!VAR_5)
  return 0;

 for (VAR_4 = 1; VAR_4 < VAR_5; ++VAR_4) {
  if (!FUNC_0(
       VAR_3[0]->stream, VAR_3[VAR_4]->stream)) {
   return 0;
  }
 }

 return 1;
}
