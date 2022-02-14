
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct cache {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cache*,int,int,struct device_node*) ;
 struct cache* FUNC_1 (int,int ) ;

__attribute__((used)) static struct cache *FUNC_2(int VAR_1, int VAR_2, struct device_node *VAR_3)
{
 struct cache *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (VAR_4)
  FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);

 return VAR_4;
}
