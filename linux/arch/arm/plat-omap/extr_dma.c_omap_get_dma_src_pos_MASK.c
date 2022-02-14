
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
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_1__* VAR_5 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;

dma_addr_t FUNC_11(int VAR_6)
{
 dma_addr_t VAR_7 = 0;

 if (FUNC_2())
  VAR_7 = VAR_5->dma_read(VAR_1, VAR_6);
 else
  VAR_7 = VAR_5->dma_read(VAR_2, VAR_6);

 if (FUNC_0(VAR_4) && VAR_7 == 0)
  VAR_7 = VAR_5->dma_read(VAR_2, VAR_6);

 if (!FUNC_2()) {





  if (FUNC_3(VAR_5->dma_read(VAR_0, VAR_6)))
   VAR_7 = VAR_5->dma_read(VAR_2, VAR_6);
  else
   VAR_7 = VAR_5->dma_read(VAR_3, VAR_6);
 }

 if (FUNC_1())
  VAR_7 |= (VAR_5->dma_read(VAR_3, VAR_6) & 0xFFFF0000);

 return VAR_7;
}
