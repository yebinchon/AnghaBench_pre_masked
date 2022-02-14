
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {unsigned long page_link; unsigned int length; int dma_address; int offset; } ;
typedef int loff_t ;


 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(struct scatterlist *VAR_0,
    void *VAR_1, unsigned int VAR_2, loff_t VAR_3)
{
 VAR_0->page_link = (unsigned long)FUNC_1(VAR_1);
 VAR_0->offset = FUNC_0(VAR_1);
 VAR_0->length = VAR_2;
 VAR_0->dma_address = VAR_3;
}
