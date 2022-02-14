
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_txreq {scalar_t__ num_desc; } ;
struct sdma_engine {scalar_t__ desc_avail; int head_lock; } ;


 scalar_t__ FUNC_0 (int *,unsigned int) ;
 scalar_t__ FUNC_1 (struct sdma_engine*) ;

__attribute__((used)) static inline unsigned FUNC_2(struct sdma_engine *VAR_0, unsigned VAR_1,
         struct sdma_txreq *VAR_2)
{
 if (FUNC_0(&VAR_0->head_lock, VAR_1)) {
  VAR_0->desc_avail = FUNC_1(VAR_0);
  if (VAR_2->num_desc > VAR_0->desc_avail)
   return 0;
  return 1;
 }
 return 0;
}
