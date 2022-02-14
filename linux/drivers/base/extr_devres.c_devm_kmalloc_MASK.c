
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devres {void* data; int node; } ;
struct device {int dummy; } ;
typedef int gfp_t ;


 struct devres* FUNC_0 (int ,size_t,int ,int ) ;
 int FUNC_1 (struct device*) ;
 int VAR_0 ;
 int FUNC_2 (struct device*,void*) ;
 int FUNC_3 (int *,char*,size_t) ;
 scalar_t__ FUNC_4 (int) ;

void * FUNC_5(struct device *VAR_1, size_t VAR_2, gfp_t VAR_3)
{
 struct devres *VAR_4;


 VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3, FUNC_1(VAR_1));
 if (FUNC_4(!VAR_4))
  return ((void*)0);





 FUNC_3(&VAR_4->node, "devm_kzalloc_release", VAR_2);
 FUNC_2(VAR_1, VAR_4->data);
 return VAR_4->data;
}
