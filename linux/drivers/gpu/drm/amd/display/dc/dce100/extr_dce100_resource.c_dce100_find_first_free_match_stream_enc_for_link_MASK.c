
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stream_encoder {scalar_t__ id; } ;
struct resource_pool {int stream_enc_count; struct stream_encoder** stream_enc; } ;
struct resource_context {int * is_stream_enc_acquired; } ;
struct dc_stream_state {struct dc_link* link; } ;
struct dc_link {scalar_t__ connector_signal; TYPE_1__* link_enc; } ;
struct TYPE_2__ {scalar_t__ preferred_engine; } ;


 scalar_t__ VAR_0 ;

struct stream_encoder *FUNC_0(
  struct resource_context *VAR_1,
  const struct resource_pool *VAR_2,
  struct dc_stream_state *VAR_3)
{
 int VAR_4;
 int VAR_5 = -1;
 struct dc_link *VAR_6 = VAR_3->link;

 for (VAR_4 = 0; VAR_4 < VAR_2->stream_enc_count; VAR_4++) {
  if (!VAR_1->is_stream_enc_acquired[VAR_4] &&
    VAR_2->stream_enc[VAR_4]) {



   VAR_5 = VAR_4;
   if (VAR_2->stream_enc[VAR_4]->id ==
     VAR_6->link_enc->preferred_engine)
    return VAR_2->stream_enc[VAR_4];
  }
 }
 if (VAR_5 >= 0 && VAR_6->connector_signal == VAR_0)
  return VAR_2->stream_enc[VAR_5];

 return ((void*)0);
}
