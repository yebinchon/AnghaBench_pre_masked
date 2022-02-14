
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
typedef int rx_q_entry ;
struct TYPE_12__ {int rd_buf_type; int wr_buf_type; } ;
typedef TYPE_1__ rx_ch_desc ;
struct TYPE_13__ {size_t* spare_buffers; int mem_lock; int * rx_q_reset; int * rx_q_wrap; int * rx_q_entry; int noof_spare_buffers; } ;
typedef TYPE_2__ hrz_dev ;
struct TYPE_14__ {int * rx_q_entries; TYPE_1__* rx_descs; } ;
typedef int HDW ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,size_t) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_2__*,size_t) ;
 int VAR_8 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_6__* VAR_9 ;
 int FUNC_5 (TYPE_2__*,int *) ;
 size_t FUNC_6 (TYPE_2__*,int ) ;
 size_t FUNC_7 (int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (TYPE_2__*,int *,int) ;

__attribute__((used)) static void FUNC_11 (hrz_dev * VAR_10, u16 VAR_11) {
  unsigned long VAR_12;

  u32 VAR_13;

  u32 VAR_14, VAR_15;

  rx_ch_desc * VAR_16 = &VAR_9->rx_descs[VAR_11];

  int VAR_17 = 0;

  FUNC_8 (&VAR_10->mem_lock, VAR_12);
  VAR_13 = FUNC_5 (VAR_10, &VAR_16->wr_buf_type) & VAR_0;
  FUNC_9 (&VAR_10->mem_lock, VAR_12);

  if (VAR_13 == VAR_4) {

    FUNC_1 (VAR_2, "closing VC: RX channel %u already disabled", VAR_11);
    return;
  }
  if (VAR_13 == VAR_5)
    VAR_17 = 1;

  FUNC_8 (&VAR_10->mem_lock, VAR_12);

  for (;;) {
    FUNC_10 (VAR_10, &VAR_16->wr_buf_type, VAR_4);

    if ((FUNC_5 (VAR_10, &VAR_16->wr_buf_type) & VAR_0) == VAR_4)
      break;

    VAR_17 = 0;
  }

  if (VAR_17) {
    FUNC_9 (&VAR_10->mem_lock, VAR_12);
    return;
  }

  FUNC_3(VAR_10);
  for (;;) {




    u16 VAR_18 = VAR_11^(VAR_6/2);

    FUNC_2 (VAR_10, VAR_18);
    FUNC_4 (VAR_10);

    VAR_14 = FUNC_5 (VAR_10, &VAR_16->rd_buf_type);




    FUNC_2 (VAR_10, VAR_11);
    FUNC_4 (VAR_10);



    FUNC_0 (VAR_10, VAR_11);
    FUNC_3 (VAR_10);



    FUNC_2 (VAR_10, VAR_18);
    FUNC_4 (VAR_10);

    VAR_15 = FUNC_5 (VAR_10, &VAR_16->rd_buf_type);

    FUNC_1 (VAR_2|VAR_1, "r1 = %u, r2 = %u", VAR_14, VAR_15);

    if (VAR_14 == VAR_15) {
      VAR_10->spare_buffers[VAR_10->noof_spare_buffers++] = (u16)VAR_14;
      break;
    }
  }
  FUNC_9 (&VAR_10->mem_lock, VAR_12);

  return;
}
