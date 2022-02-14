
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dma_chan {scalar_t__ chan_id; } ;
typedef enum dma_transaction_type { ____Placeholder_dma_transaction_type } dma_transaction_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct page**,int,size_t) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (struct dma_chan*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct dma_chan *VAR_4,
 enum dma_transaction_type VAR_5, struct page **VAR_6, int VAR_7,
 struct page **VAR_8, int VAR_9, size_t VAR_10)
{
 int VAR_11 = 1;

 if (VAR_5 == VAR_0 || VAR_5 == VAR_1) {



  if (FUNC_4(!VAR_3))
   return -1;
 }
 if (VAR_5 == VAR_0 && VAR_4->chan_id == VAR_2) {

  if (VAR_7 == 1 && VAR_9 == 2 && VAR_6[0] == VAR_8[1])
   VAR_11 = 0;
  else if (FUNC_1(VAR_8, VAR_9, VAR_10))
   VAR_11 = 3;
  else
   VAR_11 = 0;
 }


 if (FUNC_0(VAR_11) &&
     !FUNC_2(FUNC_3(VAR_4)))
  VAR_11++;

 return VAR_11;
}
