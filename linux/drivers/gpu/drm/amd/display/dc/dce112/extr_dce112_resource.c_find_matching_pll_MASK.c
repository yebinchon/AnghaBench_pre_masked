
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource_pool {struct clock_source** clock_sources; } ;
struct resource_context {int dummy; } ;
struct dc_stream_state {TYPE_2__* link; } ;
struct clock_source {int dummy; } ;
struct TYPE_4__ {TYPE_1__* link_enc; } ;
struct TYPE_3__ {int transmitter; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;







__attribute__((used)) static struct clock_source *FUNC_0(
  struct resource_context *VAR_6,
  const struct resource_pool *VAR_7,
  const struct dc_stream_state *const VAR_8)
{
 switch (VAR_8->link->link_enc->transmitter) {
 case 133:
  return VAR_7->clock_sources[VAR_0];
 case 132:
  return VAR_7->clock_sources[VAR_1];
 case 131:
  return VAR_7->clock_sources[VAR_2];
 case 130:
  return VAR_7->clock_sources[VAR_3];
 case 129:
  return VAR_7->clock_sources[VAR_4];
 case 128:
  return VAR_7->clock_sources[VAR_5];
 default:
  return ((void*)0);
 };

 return 0;
}
