
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_info_packet {int valid; } ;
struct dc_stream_state {struct dc_info_packet hdr_static_metadata; scalar_t__ use_dynamic_meta; } ;



__attribute__((used)) static void FUNC_0(
  struct dc_info_packet *VAR_0,
  struct dc_stream_state *VAR_1)
{


 if (!VAR_1->hdr_static_metadata.valid ||
   VAR_1->use_dynamic_meta)
  return;

 *VAR_0 = VAR_1->hdr_static_metadata;
}
