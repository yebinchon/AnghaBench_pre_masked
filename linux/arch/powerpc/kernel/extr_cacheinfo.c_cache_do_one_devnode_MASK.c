
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct cache {int dummy; } ;


 struct cache* FUNC_0 (struct device_node*,int) ;
 struct cache* FUNC_1 (struct device_node*,int) ;
 scalar_t__ FUNC_2 (struct device_node*) ;

__attribute__((used)) static struct cache *FUNC_3(struct device_node *VAR_0, int VAR_1)
{
 struct cache *VAR_2;

 if (FUNC_2(VAR_0))
  VAR_2 = FUNC_1(VAR_0, VAR_1);
 else
  VAR_2 = FUNC_0(VAR_0, VAR_1);

 return VAR_2;
}
