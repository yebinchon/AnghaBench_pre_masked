
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_puda_buf {int dummy; } ;
struct i40iw_cm_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct i40iw_puda_buf* FUNC_0 (struct i40iw_cm_node*,int *,int *,int *,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct i40iw_cm_node*,struct i40iw_puda_buf*,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct i40iw_cm_node *VAR_3)
{
 struct i40iw_puda_buf *VAR_4;

 VAR_4 = FUNC_0(VAR_3, ((void*)0), ((void*)0), ((void*)0), VAR_1 | VAR_2);
 if (!VAR_4) {
  FUNC_1("no sqbuf\n");
  return -1;
 }
 return FUNC_2(VAR_3, VAR_4, VAR_0, 1, 0);
}
