
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmw_stream {int stream_id; } ;
struct vmw_resource {int dummy; } ;
struct vmw_private {int dummy; } ;
struct ttm_object_file {int dummy; } ;


 scalar_t__ FUNC_0 (struct vmw_resource*) ;
 int FUNC_1 (struct vmw_resource*) ;
 int VAR_0 ;
 struct vmw_resource* FUNC_2 (struct ttm_object_file*,int ,int *) ;
 struct vmw_stream* FUNC_3 (struct vmw_resource*) ;

int FUNC_4(struct vmw_private *VAR_1,
      struct ttm_object_file *VAR_2,
      uint32_t *VAR_3, struct vmw_resource **VAR_4)
{
 struct vmw_stream *VAR_5;
 struct vmw_resource *VAR_6 =
  FUNC_2(VAR_2, *VAR_3, &VAR_0);

 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_5 = FUNC_3(VAR_6);
 *VAR_3 = VAR_5->stream_id;
 *VAR_4 = VAR_6;

 return 0;
}
