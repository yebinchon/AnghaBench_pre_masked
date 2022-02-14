
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stv090x_state {int srate; TYPE_1__* internal; } ;
struct TYPE_2__ {int mclk; int dev_ver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct stv090x_state*,int ) ;
 int FUNC_1 (int,int ,int) ;
 scalar_t__ FUNC_2 (struct stv090x_state*,int ,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (struct stv090x_state*,int) ;

__attribute__((used)) static u32 FUNC_5(struct stv090x_state *VAR_21)
{
 u32 VAR_22, VAR_23, VAR_24, VAR_25;

 VAR_22 = FUNC_4(VAR_21, VAR_21->internal->mclk);
 VAR_23 = FUNC_0(VAR_21, VAR_3) << 8;
 VAR_23 |= FUNC_0(VAR_21, VAR_2);
 VAR_24 = 13 * (VAR_22 / 10);

 if (VAR_24 < VAR_21->srate)
  VAR_22 = 0;
 else {
  if (FUNC_2(VAR_21, VAR_8, 0x1f) < 0)
   goto err;
  if (FUNC_2(VAR_21, VAR_18, 0xc1) < 0)
   goto err;
  if (FUNC_2(VAR_21, VAR_20, 0x20) < 0)
   goto err;
  if (FUNC_2(VAR_21, VAR_19, 0x00) < 0)
   goto err;
  if (FUNC_2(VAR_21, VAR_17, 0xd2) < 0)
   goto err;
  VAR_25 = FUNC_0(VAR_21, VAR_7);
  FUNC_1(VAR_25, VAR_6, 0x00);
  if (FUNC_2(VAR_21, VAR_7, VAR_25) < 0)
   goto err;

  if (FUNC_2(VAR_21, VAR_0, 0x38) < 0)
   goto err;

  if (VAR_21->internal->dev_ver >= 0x30) {
   if (FUNC_2(VAR_21, VAR_1, 0x79) < 0)
    goto err;
  } else if (VAR_21->internal->dev_ver >= 0x20) {
   if (FUNC_2(VAR_21, VAR_1, 0x49) < 0)
    goto err;
  }

  if (VAR_22 > 3000000) {
   VAR_24 = 13 * (VAR_22 / 10);
   VAR_24 = (VAR_24 / 1000) * 65536;
   VAR_24 /= (VAR_21->internal->mclk / 1000);
   if (FUNC_2(VAR_21, VAR_16, (VAR_24 >> 8) & 0x7f) < 0)
    goto err;
   if (FUNC_2(VAR_21, VAR_15, VAR_24 & 0xff) < 0)
    goto err;
   VAR_24 = 10 * (VAR_22 / 13);
   VAR_24 = (VAR_24 / 1000) * 65536;
   VAR_24 /= (VAR_21->internal->mclk / 1000);
   if (FUNC_2(VAR_21, VAR_14, (VAR_24 >> 8) & 0x7f) < 0)
    goto err;
   if (FUNC_2(VAR_21, VAR_13, VAR_24 & 0xff) < 0)
    goto err;
   VAR_24 = (VAR_22 / 1000) * 65536;
   VAR_24 /= (VAR_21->internal->mclk / 1000);
   if (FUNC_2(VAR_21, VAR_12, (VAR_24 >> 8) & 0xff) < 0)
    goto err;
   if (FUNC_2(VAR_21, VAR_11, VAR_24 & 0xff) < 0)
    goto err;
  } else {
   VAR_24 = 13 * (VAR_22 / 10);
   VAR_24 = (VAR_24 / 100) * 65536;
   VAR_24 /= (VAR_21->internal->mclk / 100);
   if (FUNC_2(VAR_21, VAR_16, (VAR_24 >> 8) & 0x7f) < 0)
    goto err;
   if (FUNC_2(VAR_21, VAR_15, VAR_24 & 0xff) < 0)
    goto err;
   VAR_24 = 10 * (VAR_22 / 14);
   VAR_24 = (VAR_24 / 100) * 65536;
   VAR_24 /= (VAR_21->internal->mclk / 100);
   if (FUNC_2(VAR_21, VAR_14, (VAR_24 >> 8) & 0x7f) < 0)
    goto err;
   if (FUNC_2(VAR_21, VAR_13, VAR_24 & 0xff) < 0)
    goto err;
   VAR_24 = (VAR_22 / 100) * 65536;
   VAR_24 /= (VAR_21->internal->mclk / 100);
   if (FUNC_2(VAR_21, VAR_12, (VAR_24 >> 8) & 0xff) < 0)
    goto err;
   if (FUNC_2(VAR_21, VAR_11, VAR_24 & 0xff) < 0)
    goto err;
  }
  if (FUNC_2(VAR_21, VAR_9, 0x20) < 0)
   goto err;
  if (FUNC_2(VAR_21, VAR_5, (VAR_23 >> 8) & 0xff) < 0)
   goto err;
  if (FUNC_2(VAR_21, VAR_4, VAR_23 & 0xff) < 0)
   goto err;
  if (FUNC_2(VAR_21, VAR_8, 0x15) < 0)
   goto err;
 }

 return VAR_22;

err:
 FUNC_3(VAR_10, 1, "I/O error");
 return -1;
}
