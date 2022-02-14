
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gsmi_buf {int handle; scalar_t__ start; } ;
struct TYPE_2__ {int dma_pool; } ;


 int FUNC_0 (int ,scalar_t__,int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (struct gsmi_buf*) ;

__attribute__((used)) static void FUNC_2(struct gsmi_buf *VAR_1)
{
 if (VAR_1) {
  if (VAR_1->start)
   FUNC_0(VAR_0.dma_pool, VAR_1->start,
          VAR_1->handle);
  FUNC_1(VAR_1);
 }
}
