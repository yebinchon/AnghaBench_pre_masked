
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_encoder {int dummy; } ;
struct dcn10_stream_encoder {struct stream_encoder base; } ;
struct dc_context {int dc_bios; } ;
typedef enum engine_id { ____Placeholder_engine_id } engine_id ;


 int VAR_0 ;
 int FUNC_0 (struct dcn10_stream_encoder*,struct dc_context*,int ,int,int *,int *,int *) ;
 struct dcn10_stream_encoder* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static struct stream_encoder *FUNC_2(
 enum engine_id VAR_4,
 struct dc_context *VAR_5)
{
 struct dcn10_stream_encoder *VAR_6 =
  FUNC_1(sizeof(struct dcn10_stream_encoder), VAR_0);

 if (!VAR_6)
  return ((void*)0);

 FUNC_0(VAR_6, VAR_5, VAR_5->dc_bios, VAR_4,
     &VAR_3[VAR_4],
     &VAR_2, &VAR_1);
 return &VAR_6->base;
}
