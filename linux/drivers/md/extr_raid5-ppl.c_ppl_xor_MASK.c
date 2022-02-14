
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
struct async_submit_ctl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dma_async_tx_descriptor**) ;
 struct dma_async_tx_descriptor* FUNC_1 (struct page*,struct page**,int ,int,int,struct async_submit_ctl*) ;
 int FUNC_2 (struct async_submit_ctl*,int,int *,int *,int *,int *) ;

__attribute__((used)) static void FUNC_3(int VAR_2, struct page *VAR_3, struct page *VAR_4)
{
 struct async_submit_ctl VAR_5;
 struct dma_async_tx_descriptor *VAR_6;
 struct page *VAR_7[] = { VAR_3, VAR_4 };

 FUNC_2(&VAR_5, VAR_0|VAR_1,
     ((void*)0), ((void*)0), ((void*)0), ((void*)0));
 VAR_6 = FUNC_1(VAR_3, VAR_7, 0, 2, VAR_2, &VAR_5);

 FUNC_0(&VAR_6);
}
