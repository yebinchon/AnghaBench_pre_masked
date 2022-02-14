
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dma_chan {int dummy; } ;
struct async_submit_ctl {int dummy; } ;


 int VAR_0 ;
 struct dma_chan* FUNC_0 (struct async_submit_ctl*,int ,int *,int ,struct page**,int,size_t) ;

__attribute__((used)) static inline struct dma_chan *
FUNC_1(struct async_submit_ctl *VAR_1, struct page **VAR_2, int VAR_3, size_t VAR_4)
{



 return FUNC_0(VAR_1, VAR_0, ((void*)0), 0, VAR_2,
         VAR_3, VAR_4);
}
