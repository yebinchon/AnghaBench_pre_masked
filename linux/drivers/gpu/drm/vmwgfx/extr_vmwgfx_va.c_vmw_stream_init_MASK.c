
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_stream {int stream_id; } ;
struct vmw_resource {int dev_priv; } ;


 int FUNC_0 (int ,int *) ;
 struct vmw_stream* FUNC_1 (struct vmw_resource*) ;

__attribute__((used)) static int FUNC_2(struct vmw_resource *VAR_0, void *VAR_1)
{
 struct vmw_stream *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_0->dev_priv, &VAR_2->stream_id);
}
