
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_encoder {int dummy; } ;
struct resource_pool {int stream_enc_count; struct stream_encoder** stream_enc; } ;
struct resource_context {int* is_stream_enc_acquired; } ;



__attribute__((used)) static void FUNC_0(
  struct resource_context *VAR_0,
  const struct resource_pool *VAR_1,
  struct stream_encoder *VAR_2,
  bool VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->stream_enc_count; VAR_4++) {
  if (VAR_1->stream_enc[VAR_4] == VAR_2)
   VAR_0->is_stream_enc_acquired[VAR_4] = VAR_3;
 }
}
