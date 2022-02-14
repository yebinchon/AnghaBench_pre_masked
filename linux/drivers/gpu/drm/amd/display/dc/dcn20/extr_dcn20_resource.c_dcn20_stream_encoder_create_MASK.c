
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stream_encoder {int dummy; } ;
struct dcn10_stream_encoder {struct stream_encoder base; } ;
struct TYPE_2__ {int hw_internal_rev; } ;
struct dc_context {int dc_bios; TYPE_1__ asic_id; } ;
typedef enum engine_id { ____Placeholder_engine_id } engine_id ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dcn10_stream_encoder*,struct dc_context*,int ,int,int *,int *,int *) ;
 struct dcn10_stream_encoder* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;

struct stream_encoder *FUNC_3(
 enum engine_id VAR_5,
 struct dc_context *VAR_6)
{
 struct dcn10_stream_encoder *VAR_7 =
  FUNC_2(sizeof(struct dcn10_stream_encoder), VAR_1);

 if (!VAR_7)
  return ((void*)0);

 if (FUNC_0(VAR_6->asic_id.hw_internal_rev)) {
  if (VAR_5 >= VAR_0)
   VAR_5++;
 }

 FUNC_1(VAR_7, VAR_6, VAR_6->dc_bios, VAR_5,
     &VAR_4[VAR_5],
     &VAR_3, &VAR_2);

 return &VAR_7->base;
}
