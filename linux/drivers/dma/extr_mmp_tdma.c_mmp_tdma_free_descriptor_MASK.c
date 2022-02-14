
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_tdma_desc {int dummy; } ;
struct mmp_tdma_chan {int desc_num; int * desc_arr; struct gen_pool* pool; } ;
struct gen_pool {int dummy; } ;


 int FUNC_0 (struct gen_pool*,unsigned long,int) ;

__attribute__((used)) static void FUNC_1(struct mmp_tdma_chan *VAR_0)
{
 struct gen_pool *VAR_1;
 int VAR_2 = VAR_0->desc_num * sizeof(struct mmp_tdma_desc);

 VAR_1 = VAR_0->pool;
 if (VAR_1 && VAR_0->desc_arr)
  FUNC_0(VAR_1, (unsigned long)VAR_0->desc_arr,
    VAR_2);
 VAR_0->desc_arr = ((void*)0);

 return;
}
