
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int embedded_panel_h_size; int embedded_panel_v_size; } ;
struct dce112_compressor {TYPE_1__ base; } ;



__attribute__((used)) static bool FUNC_0(
 struct dce112_compressor *VAR_0,
 uint32_t VAR_1,
 uint32_t VAR_2)
{
 if (VAR_0->base.embedded_panel_h_size != 0 &&
  VAR_0->base.embedded_panel_v_size != 0 &&
  ((VAR_1 * VAR_2) >
  (VAR_0->base.embedded_panel_h_size *
   VAR_0->base.embedded_panel_v_size)))
  return 1;

 return 0;
}
