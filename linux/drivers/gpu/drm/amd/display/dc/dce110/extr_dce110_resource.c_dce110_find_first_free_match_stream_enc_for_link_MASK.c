
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stream_encoder {scalar_t__ id; } ;
struct resource_pool {int stream_enc_count; struct stream_encoder** stream_enc; } ;
struct resource_context {int * is_stream_enc_acquired; } ;
struct dc_stream_state {struct dc_link* link; } ;
struct dc_link {TYPE_1__* link_enc; } ;
struct TYPE_2__ {scalar_t__ preferred_engine; } ;



struct stream_encoder *FUNC_0(
  struct resource_context *VAR_0,
  const struct resource_pool *VAR_1,
  struct dc_stream_state *VAR_2)
{
 int VAR_3;
 int VAR_4 = -1;
 struct dc_link *VAR_5 = VAR_2->link;

 for (VAR_3 = 0; VAR_3 < VAR_1->stream_enc_count; VAR_3++) {
  if (!VAR_0->is_stream_enc_acquired[VAR_3] &&
    VAR_1->stream_enc[VAR_3]) {



   VAR_4 = VAR_3;
   if (VAR_1->stream_enc[VAR_3]->id ==
     VAR_5->link_enc->preferred_engine)
    return VAR_1->stream_enc[VAR_3];
  }
 }





 if (VAR_4 >= 0)
  return VAR_1->stream_enc[VAR_4];

 return ((void*)0);
}
