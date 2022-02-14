
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_user_sdma_queue {int header_cache; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 void* FUNC_0 (int ,int ,scalar_t__*) ;
 void* FUNC_1 (size_t,int ) ;

__attribute__((used)) static void *FUNC_2(struct qib_user_sdma_queue *VAR_2,
    size_t VAR_3, dma_addr_t *VAR_4)
{
 void *VAR_5;

 if (VAR_3 == VAR_1)
  VAR_5 = FUNC_0(VAR_2->header_cache, VAR_0,
          VAR_4);
 else
  VAR_5 = ((void*)0);

 if (!VAR_5) {
  VAR_5 = FUNC_1(VAR_3, VAR_0);
  if (!VAR_5)
   return ((void*)0);

  *VAR_4 = 0;
 }

 return VAR_5;
}
