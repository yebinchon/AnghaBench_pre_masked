
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int minor_features0; unsigned int stream_count; int register_max; int thread_count; int vertex_cache_size; int shader_core_count; int pixel_pipes; int vertex_output_buffer_size; int instruction_count; int num_constants; int varyings_count; int model; int revision; int minor_features1; void* buffer_size; } ;
struct etnaviv_gpu {TYPE_1__ identity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 void* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct etnaviv_gpu*,int ,int) ;
 int FUNC_2 (struct etnaviv_gpu*,int ) ;

__attribute__((used)) static void FUNC_3(struct etnaviv_gpu *VAR_30)
{
 if (VAR_30->identity.minor_features0 &
     VAR_24) {
  u32 VAR_31[4];
  unsigned int VAR_32;

  VAR_31[0] = FUNC_2(VAR_30, VAR_8);
  VAR_31[1] = FUNC_2(VAR_30, VAR_9);
  VAR_31[2] = FUNC_2(VAR_30, VAR_13);
  VAR_31[3] = FUNC_2(VAR_30, VAR_15);

  VAR_30->identity.stream_count = FUNC_0(VAR_31[0],
     VAR_20);
  VAR_30->identity.register_max = FUNC_0(VAR_31[0],
     VAR_18);
  VAR_30->identity.thread_count = FUNC_0(VAR_31[0],
     VAR_21);
  VAR_30->identity.vertex_cache_size = FUNC_0(VAR_31[0],
     VAR_22);
  VAR_30->identity.shader_core_count = FUNC_0(VAR_31[0],
     VAR_19);
  VAR_30->identity.pixel_pipes = FUNC_0(VAR_31[0],
     VAR_17);
  VAR_30->identity.vertex_output_buffer_size =
   FUNC_0(VAR_31[0],
    VAR_23);

  VAR_30->identity.buffer_size = FUNC_0(VAR_31[1],
     VAR_10);
  VAR_30->identity.instruction_count = FUNC_0(VAR_31[1],
     VAR_11);
  VAR_30->identity.num_constants = FUNC_0(VAR_31[1],
     VAR_12);

  VAR_30->identity.varyings_count = FUNC_0(VAR_31[2],
     VAR_14);


  VAR_32 = FUNC_0(VAR_31[3],
     VAR_16);
  if (VAR_32)
   VAR_30->identity.stream_count = VAR_32;
 }


 if (VAR_30->identity.stream_count == 0) {
  if (VAR_30->identity.model >= 0x1000)
   VAR_30->identity.stream_count = 4;
  else
   VAR_30->identity.stream_count = 1;
 }


 if (VAR_30->identity.register_max)
  VAR_30->identity.register_max = 1 << VAR_30->identity.register_max;
 else if (VAR_30->identity.model == VAR_26)
  VAR_30->identity.register_max = 32;
 else
  VAR_30->identity.register_max = 64;


 if (VAR_30->identity.thread_count)
  VAR_30->identity.thread_count = 1 << VAR_30->identity.thread_count;
 else if (VAR_30->identity.model == VAR_26)
  VAR_30->identity.thread_count = 64;
 else if (VAR_30->identity.model == VAR_27 ||
   VAR_30->identity.model == VAR_28)
  VAR_30->identity.thread_count = 128;
 else
  VAR_30->identity.thread_count = 256;

 if (VAR_30->identity.vertex_cache_size == 0)
  VAR_30->identity.vertex_cache_size = 8;

 if (VAR_30->identity.shader_core_count == 0) {
  if (VAR_30->identity.model >= 0x1000)
   VAR_30->identity.shader_core_count = 2;
  else
   VAR_30->identity.shader_core_count = 1;
 }

 if (VAR_30->identity.pixel_pipes == 0)
  VAR_30->identity.pixel_pipes = 1;


 if (VAR_30->identity.vertex_output_buffer_size) {
  VAR_30->identity.vertex_output_buffer_size =
   1 << VAR_30->identity.vertex_output_buffer_size;
 } else if (VAR_30->identity.model == VAR_26) {
  if (VAR_30->identity.revision < 0x4000)
   VAR_30->identity.vertex_output_buffer_size = 512;
  else if (VAR_30->identity.revision < 0x4200)
   VAR_30->identity.vertex_output_buffer_size = 256;
  else
   VAR_30->identity.vertex_output_buffer_size = 128;
 } else {
  VAR_30->identity.vertex_output_buffer_size = 512;
 }

 switch (VAR_30->identity.instruction_count) {
 case 0:
  if (FUNC_1(VAR_30, VAR_1, 0x5108) ||
      VAR_30->identity.model == VAR_29)
   VAR_30->identity.instruction_count = 512;
  else
   VAR_30->identity.instruction_count = 256;
  break;

 case 1:
  VAR_30->identity.instruction_count = 1024;
  break;

 case 2:
  VAR_30->identity.instruction_count = 2048;
  break;

 default:
  VAR_30->identity.instruction_count = 256;
  break;
 }

 if (VAR_30->identity.num_constants == 0)
  VAR_30->identity.num_constants = 168;

 if (VAR_30->identity.varyings_count == 0) {
  if (VAR_30->identity.minor_features1 & VAR_25)
   VAR_30->identity.varyings_count = 12;
  else
   VAR_30->identity.varyings_count = 8;
 }





 if (FUNC_1(VAR_30, VAR_6, 0x5434) ||
     FUNC_1(VAR_30, VAR_5, 0x5222) ||
     FUNC_1(VAR_30, VAR_5, 0x5245) ||
     FUNC_1(VAR_30, VAR_5, 0x5208) ||
     FUNC_1(VAR_30, VAR_4, 0x5435) ||
     FUNC_1(VAR_30, VAR_3, 0x5244) ||
     FUNC_1(VAR_30, VAR_2, 0x5108) ||
     FUNC_1(VAR_30, VAR_1, 0x5108) ||
     FUNC_1(VAR_30, VAR_0, 0x5246) ||
     FUNC_1(VAR_30, VAR_7, 0x5107) ||
     FUNC_1(VAR_30, VAR_7, 0x5106))
  VAR_30->identity.varyings_count -= 1;
}
