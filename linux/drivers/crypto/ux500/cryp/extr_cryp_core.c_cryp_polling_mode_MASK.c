
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cryp_device_data {TYPE_1__* base; } ;
struct cryp_ctx {int blocksize; int datalen; scalar_t__ outdata; scalar_t__ indata; } ;
struct TYPE_2__ {int dout; int din; } ;


 int VAR_0 ;
 int FUNC_0 (struct cryp_device_data*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static void FUNC_3(struct cryp_ctx *VAR_1,
         struct cryp_device_data *VAR_2)
{
 int VAR_3 = VAR_1->blocksize / VAR_0;
 int VAR_4 = VAR_1->datalen;
 u32 *VAR_5 = (u32 *)VAR_1->indata;
 u32 *VAR_6 = (u32 *)VAR_1->outdata;

 while (VAR_4 > 0) {
  FUNC_2(&VAR_2->base->din, VAR_5, VAR_3);
  VAR_5 += VAR_3;
  VAR_4 -= (VAR_3 * VAR_0);
  FUNC_0(VAR_2);

  FUNC_1(&VAR_2->base->dout, VAR_6, VAR_3);
  VAR_6 += VAR_3;
  FUNC_0(VAR_2);
 }
}
