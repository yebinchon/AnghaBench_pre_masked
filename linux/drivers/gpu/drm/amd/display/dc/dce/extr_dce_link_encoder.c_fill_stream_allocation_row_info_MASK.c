
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct stream_encoder {scalar_t__ id; } ;
struct link_mst_stream_allocation {scalar_t__ slot_count; struct stream_encoder* stream_enc; } ;



__attribute__((used)) static void FUNC_0(
 const struct link_mst_stream_allocation *VAR_0,
 uint32_t *VAR_1,
 uint32_t *VAR_2)
{
 const struct stream_encoder *VAR_3 = VAR_0->stream_enc;

 if (VAR_3) {
  *VAR_1 = VAR_3->id;
  *VAR_2 = VAR_0->slot_count;
 } else {
  *VAR_1 = 0;
  *VAR_2 = 0;
 }
}
