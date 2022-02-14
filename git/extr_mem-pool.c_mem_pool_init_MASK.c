
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_pool {int block_alloc; } ;


 int VAR_0 ;
 int FUNC_0 (struct mem_pool*,size_t,int *) ;
 struct mem_pool* FUNC_1 (int,int) ;

void FUNC_2(struct mem_pool **VAR_1, size_t VAR_2)
{
 struct mem_pool *VAR_3;

 if (*VAR_1)
  return;

 VAR_3 = FUNC_1(1, sizeof(*VAR_3));

 VAR_3->block_alloc = VAR_0;

 if (VAR_2 > 0)
  FUNC_0(VAR_3, VAR_2, ((void*)0));

 *VAR_1 = VAR_3;
}
