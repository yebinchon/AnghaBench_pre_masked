
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct cache {int dummy; } ;


 int FUNC_0 (int,char*,unsigned int) ;
 int FUNC_1 (struct cache*,unsigned int) ;
 struct cache* FUNC_2 (struct device_node*,int) ;
 int FUNC_3 (struct cache*) ;
 struct device_node* FUNC_4 (unsigned int,int *) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (char*,unsigned int) ;

__attribute__((used)) static struct cache *FUNC_7(unsigned int VAR_0)
{
 struct device_node *VAR_1;
 struct cache *VAR_2 = ((void*)0);

 FUNC_6("creating cache object(s) for CPU %i\n", VAR_0);

 VAR_1 = FUNC_4(VAR_0, ((void*)0));
 FUNC_0(!VAR_1, "no OF node found for CPU %i\n", VAR_0);
 if (!VAR_1)
  goto out;

 VAR_2 = FUNC_2(VAR_1, 1);
 if (!VAR_2)
  goto out;

 FUNC_3(VAR_2);

 FUNC_1(VAR_2, VAR_0);
out:
 FUNC_5(VAR_1);

 return VAR_2;
}
