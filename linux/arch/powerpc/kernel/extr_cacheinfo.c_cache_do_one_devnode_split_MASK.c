
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct cache {struct cache* next_local; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cache* FUNC_0 (int ,int,struct device_node*) ;
 int FUNC_1 (char*,int,struct device_node*) ;
 int FUNC_2 (struct cache*) ;

__attribute__((used)) static struct cache *FUNC_3(struct device_node *VAR_2,
      int VAR_3)
{
 struct cache *VAR_4, *VAR_5;

 FUNC_1("creating L%d dcache and icache for %pOF\n", VAR_3,
   VAR_2);

 VAR_4 = FUNC_0(VAR_0, VAR_3, VAR_2);
 VAR_5 = FUNC_0(VAR_1, VAR_3, VAR_2);

 if (!VAR_4 || !VAR_5)
  goto err;

 VAR_4->next_local = VAR_5;

 return VAR_4;
err:
 FUNC_2(VAR_4);
 FUNC_2(VAR_5);
 return ((void*)0);
}
