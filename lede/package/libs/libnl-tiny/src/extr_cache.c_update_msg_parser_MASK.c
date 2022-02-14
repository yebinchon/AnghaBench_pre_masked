
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct update_xdata {int params; int ops; } ;
struct nl_msg {int nm_nlh; int nm_src; } ;


 int FUNC_0 (int ,int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct nl_msg *VAR_0, void *VAR_1)
{
 struct update_xdata *VAR_2 = VAR_1;

 return FUNC_0(VAR_2->ops, &VAR_0->nm_src, VAR_0->nm_nlh, VAR_2->params);
}
