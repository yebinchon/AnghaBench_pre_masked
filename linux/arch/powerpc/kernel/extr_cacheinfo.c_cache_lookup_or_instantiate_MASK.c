
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct cache {int level; } ;


 int FUNC_0 (int ,char*,int,int) ;
 struct cache* FUNC_1 (struct device_node*,int) ;
 struct cache* FUNC_2 (struct device_node*) ;

__attribute__((used)) static struct cache *FUNC_3(struct device_node *VAR_0,
       int VAR_1)
{
 struct cache *VAR_2;

 VAR_2 = FUNC_2(VAR_0);

 FUNC_0(VAR_2 && VAR_2->level != VAR_1,
    "cache level mismatch on lookup (got %d, expected %d)\n",
    VAR_2->level, VAR_1);

 if (!VAR_2)
  VAR_2 = FUNC_1(VAR_0, VAR_1);

 return VAR_2;
}
