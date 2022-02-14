
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {TYPE_1__* prp; } ;
struct TYPE_9__ {int used; scalar_t__ processed; int buffer; int finalised; TYPE_2__ cmac; } ;
typedef TYPE_3__ cf_cmac_stream ;
typedef int cf_blockwise_in_fn ;
struct TYPE_7__ {size_t blocksz; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__*,size_t,int,int,int,scalar_t__,int ,TYPE_3__*) ;
 int FUNC_2 (int ,scalar_t__*,size_t,int const*,size_t,int ,int ,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_3(cf_cmac_stream *VAR_3, const uint8_t *VAR_4, size_t VAR_5, int VAR_6)
{
  size_t VAR_7 = VAR_3->cmac.prp->blocksz;
  cf_blockwise_in_fn VAR_8 = VAR_0;
  int VAR_9 = 0;

  if (VAR_6)
  {
    int VAR_10 = ((VAR_5 + VAR_3->used) & 0xf) == 0;
    int VAR_11 = VAR_5 == 0 && VAR_3->used == 0 && VAR_3->processed == 0;

    FUNC_0(!VAR_3->finalised);
    FUNC_0(VAR_5 != 0 || VAR_11);



    if (VAR_10 && !VAR_11)
      VAR_8 = VAR_1;
    else
      VAR_9 = 1;
  }


  FUNC_2(VAR_3->buffer, &VAR_3->used, VAR_7,
                                VAR_4, VAR_5,
                                VAR_0,
                                VAR_8, VAR_3);


  if (VAR_9)
  {
    FUNC_1(VAR_3->buffer, &VAR_3->used, VAR_7,
                         0x80, 0x00, 0x00, VAR_7 - VAR_3->used,
                         VAR_2, VAR_3);
  }
}
