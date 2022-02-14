
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vmw_cmdbuf_man {int dev_priv; } ;
struct vmw_cmdbuf_header {int cb_context; TYPE_1__* cb_header; int handle; struct vmw_cmdbuf_man* man; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct vmw_cmdbuf_header *VAR_3)
{
 struct vmw_cmdbuf_man *VAR_4 = VAR_3->man;
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_3->handle);
 FUNC_2(VAR_4->dev_priv, VAR_1, VAR_5);

 VAR_5 = FUNC_0(VAR_3->handle);
 VAR_5 |= VAR_3->cb_context & VAR_0;
 FUNC_2(VAR_4->dev_priv, VAR_2, VAR_5);

 return VAR_3->cb_header->status;
}
