
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int dma_addr_t ;
struct TYPE_2__ {int (* dma_read ) (int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int) ;

dma_addr_t FUNC_8(int VAR_4)
{
 dma_addr_t VAR_5 = 0;

 if (FUNC_1())
  VAR_5 = VAR_3->dma_read(VAR_2, VAR_4);
 else
  VAR_5 = VAR_3->dma_read(VAR_0, VAR_4);





 if (!FUNC_1() && VAR_5 == 0) {
  VAR_5 = VAR_3->dma_read(VAR_0, VAR_4);





  if (FUNC_7(!VAR_5))
   VAR_5 = VAR_3->dma_read(VAR_1, VAR_4);
 }

 if (FUNC_0())
  VAR_5 |= (VAR_3->dma_read(VAR_1, VAR_4) & 0xFFFF0000);

 return VAR_5;
}
