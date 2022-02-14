
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_12__ {int cell_header; int wr_buf_type; int rd_buf_type; int partial_crc; } ;
typedef TYPE_1__ tx_ch_desc ;
struct TYPE_13__ {int channel; scalar_t__ tx_xbr_bits; scalar_t__ tx_pcr_bits; scalar_t__ tx_scr_bits; scalar_t__ tx_bucket_bits; int aal; } ;
typedef TYPE_2__ hrz_vcc ;
struct TYPE_14__ {int tx_idle; int* tx_channel_record; int mem_lock; } ;
typedef TYPE_3__ hrz_dev ;
struct TYPE_11__ {TYPE_1__* tx_descs; } ;


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
 short VAR_11 ;
 unsigned short VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;



 TYPE_10__* VAR_20 ;
 int FUNC_1 (TYPE_3__*,int *) ;
 unsigned short FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (TYPE_3__*,short,int ,scalar_t__) ;
 int FUNC_6 (TYPE_3__*,int *,int) ;

__attribute__((used)) static short FUNC_7 (hrz_dev * VAR_21, hrz_vcc * VAR_22) {
  unsigned short VAR_23;
  short VAR_24 = -1;
  unsigned int VAR_25;
  FUNC_0 (VAR_7|VAR_9, "setup_idle_tx_channel %p", VAR_21);



  VAR_25 = 0;
  while (!(VAR_23 = FUNC_2 (VAR_21, VAR_18) & VAR_12)) {
    FUNC_0 (VAR_9|VAR_10, "waiting for idle TX channel");

    if (++VAR_25 > 100) {
      FUNC_0 (VAR_9|VAR_6, "spun out waiting for idle TX channel");
      return -VAR_11;
    }
  }


  {

    int VAR_26 = VAR_21->tx_idle;

    int VAR_27 = 1;
    while (VAR_27) {
      if (VAR_23 & (1<<VAR_26)) {
 VAR_24 = VAR_26;
 VAR_27 = 0;
      }
      ++VAR_26;
      if (VAR_26 == VAR_17)
 VAR_26 = 0;
    }

    VAR_21->tx_idle = VAR_26;
  }


  {



    tx_ch_desc * VAR_28 = &VAR_20->tx_descs[VAR_24];
    u32 VAR_29;
    u32 VAR_30;
    u16 VAR_31 = VAR_22->channel;

    unsigned long VAR_32;
    FUNC_3 (&VAR_21->mem_lock, VAR_32);


    VAR_21->tx_channel_record[VAR_24] = VAR_31;


    FUNC_5 (VAR_21, VAR_24, VAR_15,
         VAR_22->tx_xbr_bits);


    FUNC_5 (VAR_21, VAR_24, VAR_14,
         VAR_22->tx_pcr_bits);
    VAR_29 = FUNC_1 (VAR_21, &VAR_28->rd_buf_type) & VAR_2;
    VAR_30 = FUNC_1 (VAR_21, &VAR_28->wr_buf_type) & VAR_2;


    if (VAR_29 != VAR_30) {
      FUNC_0 (VAR_9|VAR_6, "TX buffer pointers are broken!");


    }
    FUNC_0 (VAR_9, "TX buffer pointers are: rd %x, wr %x.",
     VAR_29, VAR_30);

    switch (VAR_22->aal) {
      case 130:
 FUNC_0 (VAR_8|VAR_9, "tx_channel: aal0");
 VAR_29 |= VAR_5;
 VAR_30 |= VAR_5;
 break;
      case 129:
 FUNC_0 (VAR_8|VAR_9, "tx_channel: aal34");
 VAR_29 |= VAR_3;
 VAR_30 |= VAR_3;
 break;
      case 128:
 VAR_29 |= VAR_4;
 VAR_30 |= VAR_4;

 FUNC_6 (VAR_21, &VAR_28->partial_crc, VAR_13);
 break;
    }

    FUNC_6 (VAR_21, &VAR_28->rd_buf_type, VAR_29);
    FUNC_6 (VAR_21, &VAR_28->wr_buf_type, VAR_30);



    FUNC_6 (VAR_21, &VAR_28->cell_header, VAR_31);

    FUNC_4 (&VAR_21->mem_lock, VAR_32);
  }

  return VAR_24;
}
