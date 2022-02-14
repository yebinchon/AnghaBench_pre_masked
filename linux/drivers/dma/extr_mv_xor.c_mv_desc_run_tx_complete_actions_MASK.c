
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cookie; } ;
struct mv_xor_desc_slot {TYPE_1__ async_tx; } ;
struct mv_xor_chan {int dummy; } ;
typedef scalar_t__ dma_cookie_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static dma_cookie_t
FUNC_4(struct mv_xor_desc_slot *VAR_0,
    struct mv_xor_chan *VAR_1,
    dma_cookie_t VAR_2)
{
 FUNC_0(VAR_0->async_tx.cookie < 0);

 if (VAR_0->async_tx.cookie > 0) {
  VAR_2 = VAR_0->async_tx.cookie;

  FUNC_1(&VAR_0->async_tx);



  FUNC_3(&VAR_0->async_tx, ((void*)0));
 }


 FUNC_2(&VAR_0->async_tx);

 return VAR_2;
}
