
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_1__* prp; } ;
struct TYPE_6__ {TYPE_2__ cmac; int processed; int cbc; } ;
typedef TYPE_3__ cf_cmac_stream ;
struct TYPE_4__ {scalar_t__ blocksz; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int *,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, const uint8_t *VAR_2)
{
  cf_cmac_stream *VAR_3 = VAR_1;
  uint8_t VAR_4[VAR_0];
  FUNC_0(&VAR_3->cbc, VAR_2, VAR_4, 1);
  VAR_3->processed += VAR_3->cmac.prp->blocksz;
}
