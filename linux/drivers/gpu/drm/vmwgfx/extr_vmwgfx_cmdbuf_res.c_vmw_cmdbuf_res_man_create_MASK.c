
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {int dummy; } ;
struct vmw_cmdbuf_res_manager {int resources; int list; struct vmw_private* dev_priv; } ;


 int VAR_0 ;
 struct vmw_cmdbuf_res_manager* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct vmw_cmdbuf_res_manager*) ;
 struct vmw_cmdbuf_res_manager* FUNC_4 (int,int ) ;

struct vmw_cmdbuf_res_manager *
FUNC_5(struct vmw_private *VAR_3)
{
 struct vmw_cmdbuf_res_manager *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4->dev_priv = VAR_3;
 FUNC_1(&VAR_4->list);
 VAR_5 = FUNC_2(&VAR_4->resources, VAR_2);
 if (VAR_5 == 0)
  return VAR_4;

 FUNC_3(VAR_4);
 return FUNC_0(VAR_5);
}
