
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int pDataFlashDesc; TYPE_1__* pDevice; } ;
struct TYPE_8__ {int pages_size; int pages_number; int cs; } ;
typedef int AT91S_DataFlashStatus ;
typedef TYPE_2__* AT91PS_DataFlash ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 unsigned int FUNC_1 (TYPE_2__*,int ,unsigned char*,int ,unsigned int) ;
 unsigned int FUNC_2 (TYPE_2__*,unsigned int) ;
 int FUNC_3 (TYPE_2__*,unsigned char*,int,int) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (TYPE_2__*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;

AT91S_DataFlashStatus FUNC_6(
 AT91PS_DataFlash VAR_6,
 unsigned char *VAR_7,
 int VAR_8,
 int VAR_9 )
{
 unsigned int VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;

 FUNC_4(VAR_6->pDevice->cs);

 if ( (VAR_8 + VAR_9) > (VAR_6->pDevice->pages_size * (VAR_6->pDevice->pages_number)))
  return VAR_1;


 if ((VAR_8 % ((unsigned int)(VAR_6->pDevice->pages_size))) != 0 ) {
  VAR_10 = VAR_6->pDevice->pages_size - (VAR_8 % ((unsigned int)(VAR_6->pDevice->pages_size)));

  if (VAR_9 < VAR_10)
   VAR_10 = VAR_9;

  if(!FUNC_3(VAR_6,VAR_7, VAR_8, VAR_10))
   return VAR_0;

  FUNC_0(VAR_6->pDataFlashDesc, VAR_3);


         VAR_9 -= VAR_10;
         VAR_8 += VAR_10;
         VAR_7 += VAR_10;
 }

 while (( VAR_9 - VAR_6->pDevice->pages_size ) >= 0 )
 {

  VAR_11 = (unsigned int)VAR_8 / (VAR_6->pDevice->pages_size);

  VAR_12 = FUNC_1(VAR_6, VAR_5, VAR_7,
                                      0, VAR_6->pDevice->pages_size);
  FUNC_0(VAR_6->pDataFlashDesc, VAR_3);

  VAR_12 = FUNC_2(VAR_6, VAR_11);
  FUNC_0(VAR_6->pDataFlashDesc, VAR_3);
  if (!VAR_12)
   return VAR_0;

  VAR_12 = FUNC_5 (VAR_6, VAR_4, VAR_8);
  if(!VAR_12)
   return VAR_0;

  FUNC_0(VAR_6->pDataFlashDesc, VAR_3);


     VAR_9 -= VAR_6->pDevice->pages_size ;
     VAR_8 += VAR_6->pDevice->pages_size ;
     VAR_7 += VAR_6->pDevice->pages_size ;
 }


 if ( VAR_9 > 0 ) {

  if(!FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9) )
   return VAR_0;
  FUNC_0(VAR_6->pDataFlashDesc, VAR_3);
 }
 return VAR_2;
}
