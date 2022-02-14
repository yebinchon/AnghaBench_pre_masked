
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct cache {int dummy; } ;


 int FUNC_0 (struct device_node*) ;
 struct cache* FUNC_1 (int ,int,struct device_node*) ;
 int FUNC_2 (char*,int,struct device_node*) ;

__attribute__((used)) static struct cache *FUNC_3(struct device_node *VAR_0, int VAR_1)
{
 FUNC_2("creating L%d ucache for %pOF\n", VAR_1, VAR_0);

 return FUNC_1(FUNC_0(VAR_0), VAR_1, VAR_0);
}
