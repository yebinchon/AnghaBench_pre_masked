
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_stream_state {int refcount; } ;
struct dc_sink {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dc_stream_state*,struct dc_sink*) ;
 int FUNC_1 (int *) ;
 struct dc_stream_state* FUNC_2 (int,int ) ;

struct dc_stream_state *FUNC_3(
  struct dc_sink *VAR_1)
{
 struct dc_stream_state *VAR_2;

 if (VAR_1 == ((void*)0))
  return ((void*)0);

 VAR_2 = FUNC_2(sizeof(struct dc_stream_state), VAR_0);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 FUNC_0(VAR_2, VAR_1);

 FUNC_1(&VAR_2->refcount);

 return VAR_2;
}
