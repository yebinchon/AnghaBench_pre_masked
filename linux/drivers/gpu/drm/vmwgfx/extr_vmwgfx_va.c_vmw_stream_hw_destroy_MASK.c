
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_stream {int stream_id; } ;
struct vmw_resource {struct vmw_private* dev_priv; } ;
struct vmw_private {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct vmw_private*,int ) ;
 struct vmw_stream* FUNC_2 (struct vmw_resource*) ;

__attribute__((used)) static void FUNC_3(struct vmw_resource *VAR_0)
{
 struct vmw_private *VAR_1 = VAR_0->dev_priv;
 struct vmw_stream *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2->stream_id);
 FUNC_0(VAR_3 != 0);
}
