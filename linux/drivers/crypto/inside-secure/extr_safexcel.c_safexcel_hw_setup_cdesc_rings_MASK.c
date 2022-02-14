
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int cd_size; int pes; int rings; int cd_offset; } ;
struct TYPE_7__ {int hwdataw; int hwcfsize; } ;
struct safexcel_crypto_priv {int flags; TYPE_4__ config; TYPE_3__ hwconfig; TYPE_2__* ring; } ;
struct TYPE_5__ {int base_dma; } ;
struct TYPE_6__ {TYPE_1__ cdr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct safexcel_crypto_priv*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int) ;
 int VAR_11 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct safexcel_crypto_priv *VAR_12)
{
 u32 VAR_13, VAR_14;
 int VAR_15, VAR_16;

 VAR_13 = (VAR_12->config.cd_size +
   (FUNC_0(VAR_12->hwconfig.hwdataw) - 1)) >>
         VAR_12->hwconfig.hwdataw;

 if (VAR_12->flags & VAR_9) {

  VAR_16 = (1 << VAR_12->hwconfig.hwcfsize) / VAR_13;
  VAR_16 = FUNC_6(VAR_11, VAR_16,
         (VAR_12->config.pes * VAR_0));
 } else {

  VAR_16 = ((1 << VAR_12->hwconfig.hwcfsize) /
    VAR_13) - 1;
 }

 for (VAR_15 = 0; VAR_15 < VAR_12->config.rings; VAR_15++) {

  FUNC_8(FUNC_5(VAR_12->ring[VAR_15].cdr.base_dma),
         FUNC_1(VAR_12, VAR_15) + VAR_5);
  FUNC_8(FUNC_7(VAR_12->ring[VAR_15].cdr.base_dma),
         FUNC_1(VAR_12, VAR_15) + VAR_4);

  FUNC_8(VAR_7 | (VAR_12->config.cd_offset << 16) |
         VAR_12->config.cd_size,
         FUNC_1(VAR_12, VAR_15) + VAR_2);
  FUNC_8(((VAR_16 *
    (VAR_13 << VAR_12->hwconfig.hwdataw)) << 16) |
         (VAR_16 * VAR_12->config.cd_offset),
         FUNC_1(VAR_12, VAR_15) + VAR_1);


  VAR_14 = FUNC_3(VAR_10);
  VAR_14 |= FUNC_2(VAR_8);
  FUNC_8(VAR_14, FUNC_1(VAR_12, VAR_15) + VAR_3);


  FUNC_8(FUNC_4(5, 0),
         FUNC_1(VAR_12, VAR_15) + VAR_6);
 }

 return 0;
}
