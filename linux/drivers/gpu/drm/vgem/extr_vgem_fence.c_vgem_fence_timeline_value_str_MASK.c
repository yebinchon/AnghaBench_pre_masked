
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fence {int seqno; } ;


 scalar_t__ FUNC_0 (struct dma_fence*) ;
 int FUNC_1 (char*,int,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct dma_fence *VAR_0, char *VAR_1,
       int VAR_2)
{
 FUNC_1(VAR_1, VAR_2, "%llu",
   FUNC_0(VAR_0) ? VAR_0->seqno : 0);
}
