
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct vmw_resource {int id; struct vmw_private* dev_priv; } ;
struct vmw_private {int dummy; } ;
struct TYPE_10__ {int start; } ;
struct TYPE_11__ {TYPE_3__ mem; } ;
struct vmw_buffer_object {TYPE_4__ base; scalar_t__ dx_query_ctx; } ;
struct TYPE_9__ {int mobid; int cid; } ;
struct TYPE_8__ {int size; int id; } ;
struct TYPE_12__ {TYPE_2__ body; TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__,int ) ;
 TYPE_5__* FUNC_1 (struct vmw_private*,int,int ) ;
 TYPE_5__* VAR_3 ;
 int FUNC_2 (struct vmw_resource*,struct vmw_buffer_object*) ;
 struct vmw_buffer_object* FUNC_3 (struct vmw_resource*) ;
 int FUNC_4 (struct vmw_private*,int) ;

__attribute__((used)) static int FUNC_5(struct vmw_resource *VAR_4)
{
 struct vmw_private *VAR_5 = VAR_4->dev_priv;
 struct vmw_buffer_object *VAR_6;
 FUNC_0(*VAR_3, VAR_1);

 VAR_6 = FUNC_3(VAR_4);

 if (!VAR_6 || VAR_6->dx_query_ctx)
  return 0;

 VAR_3 = FUNC_1(VAR_5, sizeof(*VAR_3), VAR_4->id);
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 VAR_3->header.id = VAR_2;
 VAR_3->header.size = sizeof(VAR_3->body);
 VAR_3->body.cid = VAR_4->id;
 VAR_3->body.mobid = VAR_6->base.mem.start;
 FUNC_4(VAR_5, sizeof(*VAR_3));

 FUNC_2(VAR_4, VAR_6);

 return 0;
}
