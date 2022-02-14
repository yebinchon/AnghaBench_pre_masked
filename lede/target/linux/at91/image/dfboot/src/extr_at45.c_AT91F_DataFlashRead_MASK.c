
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pDataFlashDesc; TYPE_1__* pDevice; } ;
struct TYPE_5__ {int cs; } ;
typedef TYPE_2__* AT91PS_DataFlash ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,unsigned long,unsigned char*,unsigned long) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(
 AT91PS_DataFlash VAR_2,
 unsigned long VAR_3,
 unsigned long VAR_4,
 char *VAR_5)
{
 unsigned long VAR_6;

 FUNC_2(VAR_2->pDevice->cs);

 if(FUNC_1(VAR_2->pDataFlashDesc, VAR_1) != VAR_0)
  return -1;

 while (VAR_4)
 {
  VAR_6 = (VAR_4 < 0x8000)? VAR_4:0x8000;

  if (FUNC_1(VAR_2->pDataFlashDesc, VAR_1)
      != VAR_0)
   return -1;

  if (FUNC_0 (VAR_2, VAR_3, (unsigned char *)VAR_5,
                                     VAR_6) != VAR_0)
   return -1;

  VAR_4 -= VAR_6;
  VAR_3 += VAR_6;
  VAR_5 += VAR_6;
 }

    return VAR_0;
}
