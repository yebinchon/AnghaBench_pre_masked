
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rect {int dummy; } ;
struct dc_stream_state {int dst; int src; } ;


 scalar_t__ FUNC_0 (int *,int *,int) ;

bool FUNC_1(
 struct dc_stream_state *VAR_0, struct dc_stream_state *VAR_1)
{
 if (VAR_0 == VAR_1)
  return 1;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return 0;

 if (FUNC_0(&VAR_0->src,
   &VAR_1->src,
   sizeof(struct rect)) != 0)
  return 0;

 if (FUNC_0(&VAR_0->dst,
   &VAR_1->dst,
   sizeof(struct rect)) != 0)
  return 0;

 return 1;
}
