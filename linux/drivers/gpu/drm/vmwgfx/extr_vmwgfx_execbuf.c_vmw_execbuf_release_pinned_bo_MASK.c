
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {int cmdbuf_mutex; scalar_t__ query_cid_valid; } ;


 int FUNC_0 (struct vmw_private*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct vmw_private *VAR_0)
{
 FUNC_1(&VAR_0->cmdbuf_mutex);
 if (VAR_0->query_cid_valid)
  FUNC_0(VAR_0, ((void*)0));
 FUNC_2(&VAR_0->cmdbuf_mutex);
}
