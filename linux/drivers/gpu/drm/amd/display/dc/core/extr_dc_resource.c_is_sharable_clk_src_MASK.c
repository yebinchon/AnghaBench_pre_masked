
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct pipe_ctx {TYPE_1__* stream; int * clock_source; } ;
struct TYPE_5__ {scalar_t__ signal; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static bool FUNC_5(
 const struct pipe_ctx *VAR_1,
 const struct pipe_ctx *VAR_2)
{
 if (VAR_1->clock_source == ((void*)0))
  return 0;

 if (VAR_1->stream->signal == VAR_0)
  return 0;

 if (FUNC_0(VAR_1->stream->signal) ||
  (FUNC_0(VAR_2->stream->signal) &&
  !FUNC_3(VAR_1->stream,
         VAR_2->stream)))
  return 0;

 if (FUNC_2(VAR_1->stream->signal)
   && FUNC_1(VAR_2->stream->signal))
  return 0;

 if (FUNC_2(VAR_2->stream->signal)
   && FUNC_1(VAR_1->stream->signal))
  return 0;

 if (!FUNC_4(
   VAR_1->stream, VAR_2->stream))
  return 0;

 return 1;
}
