
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int pes; int rings; int rd_offset; int rd_size; } ;
struct TYPE_7__ {int hwdataw; int hwrfsize; } ;
struct safexcel_crypto_priv {int flags; TYPE_4__ config; TYPE_3__ hwconfig; TYPE_2__* ring; } ;
struct TYPE_5__ {int base_dma; } ;
struct TYPE_6__ {TYPE_1__ rdr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct safexcel_crypto_priv*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct safexcel_crypto_priv*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int) ;
 int VAR_10 ;
 int FUNC_7 (int,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (scalar_t__) ;
 int VAR_14 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct safexcel_crypto_priv *VAR_15)
{
 u32 VAR_16, VAR_17;
 int VAR_18, VAR_19;


 VAR_16 = (VAR_9 +
         (FUNC_0(VAR_15->hwconfig.hwdataw) - 1)) >>
        VAR_15->hwconfig.hwdataw;
 if (VAR_15->flags & VAR_12) {

  VAR_19 = (1 << VAR_15->hwconfig.hwrfsize) / VAR_16;
  VAR_19 = FUNC_9(VAR_14, VAR_19,
         (VAR_15->config.pes * VAR_0));
 } else {

  VAR_19 = ((1 << VAR_15->hwconfig.hwrfsize) /
    VAR_16) - 1;
 }

 for (VAR_18 = 0; VAR_18 < VAR_15->config.rings; VAR_18++) {

  FUNC_12(FUNC_8(VAR_15->ring[VAR_18].rdr.base_dma),
         FUNC_3(VAR_15, VAR_18) + VAR_5);
  FUNC_12(FUNC_11(VAR_15->ring[VAR_18].rdr.base_dma),
         FUNC_3(VAR_15, VAR_18) + VAR_4);

  FUNC_12(VAR_10 | (VAR_15->config.rd_offset << 16) |
         VAR_15->config.rd_size,
         FUNC_3(VAR_15, VAR_18) + VAR_2);

  FUNC_12(((VAR_19 *
    (VAR_16 << VAR_15->hwconfig.hwdataw)) << 16) |
         (VAR_19 * VAR_15->config.rd_offset),
         FUNC_3(VAR_15, VAR_18) + VAR_1);


  VAR_17 = FUNC_5(VAR_13);
  VAR_17 |= FUNC_4(VAR_11);
  VAR_17 |= VAR_8 | VAR_7;
  FUNC_12(VAR_17,
         FUNC_3(VAR_15, VAR_18) + VAR_3);


  FUNC_12(FUNC_7(7, 0),
         FUNC_3(VAR_15, VAR_18) + VAR_6);


  VAR_17 = FUNC_10(FUNC_1(VAR_15) + FUNC_2(VAR_18));
  VAR_17 |= FUNC_6(VAR_18);
  FUNC_12(VAR_17, FUNC_1(VAR_15) + FUNC_2(VAR_18));
 }

 return 0;
}
