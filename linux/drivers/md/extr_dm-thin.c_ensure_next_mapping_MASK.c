
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {scalar_t__ next_mapping; int mapping_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(struct pool *VAR_2)
{
 if (VAR_2->next_mapping)
  return 0;

 VAR_2->next_mapping = FUNC_0(&VAR_2->mapping_pool, VAR_1);

 return VAR_2->next_mapping ? 0 : -VAR_0;
}
