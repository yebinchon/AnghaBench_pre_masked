
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct siw_rx_stream {int dummy; } ;
struct siw_pbl {int dummy; } ;
struct siw_mem {int va; struct siw_pbl* pbl; } ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct siw_pbl*,int,int*,int*) ;
 int FUNC_2 (struct siw_rx_stream*,void*,int) ;

__attribute__((used)) static int FUNC_3(struct siw_rx_stream *VAR_0, int *VAR_1,
        struct siw_mem *VAR_2, u64 VAR_3, int VAR_4)
{
 struct siw_pbl *VAR_5 = VAR_2->pbl;
 u64 VAR_6 = VAR_3 - VAR_2->va;
 int VAR_7 = 0;

 while (VAR_4) {
  int VAR_8;
  dma_addr_t VAR_9 =
   FUNC_1(VAR_5, VAR_6, &VAR_8, VAR_1);
  if (!VAR_9)
   break;

  VAR_8 = FUNC_0(VAR_8, VAR_4);
  if (FUNC_2(VAR_0, (void *)VAR_9, VAR_8) == VAR_8) {
   VAR_7 += VAR_8;
   VAR_6 += VAR_8;
   VAR_4 -= VAR_8;
  } else {
   break;
  }
 }
 return VAR_7;
}
