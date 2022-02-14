
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u32 ;
typedef size_t u16 ;
struct TYPE_7__ {int rd_buf_type; int wr_buf_type; } ;
typedef TYPE_1__ rx_ch_desc ;
struct TYPE_8__ {int noof_spare_buffers; size_t* spare_buffers; int mem_lock; } ;
typedef TYPE_2__ hrz_dev ;
struct TYPE_9__ {TYPE_1__* rx_descs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int,char*,...) ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 TYPE_5__* VAR_9 ;
 size_t FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_2__*,int *,size_t) ;

__attribute__((used)) static int FUNC_5 (hrz_dev * VAR_10, u16 VAR_11) {



  unsigned long VAR_12;
  u32 VAR_13;

  u16 VAR_14 = VAR_8;

  rx_ch_desc * VAR_15 = &VAR_9->rx_descs[VAR_11];

  FUNC_0 (VAR_3, "hrz_open_rx %x", VAR_11);

  FUNC_2 (&VAR_10->mem_lock, VAR_12);
  VAR_13 = FUNC_1 (VAR_10, &VAR_15->wr_buf_type) & VAR_0;
  FUNC_3 (&VAR_10->mem_lock, VAR_12);


  if (VAR_13 != VAR_7) {
    FUNC_0 (VAR_2|VAR_4, "RX channel for VC already open");
    return -VAR_5;
  }


  if (VAR_10->noof_spare_buffers) {
    VAR_14 = VAR_10->spare_buffers[--VAR_10->noof_spare_buffers];
    FUNC_0 (VAR_4, "using a spare buffer: %u", VAR_14);

    if (VAR_14 == VAR_7 || VAR_14 == VAR_8) {

      FUNC_0 (VAR_2|VAR_4, "bad spare buffer pointer, using IDLE");
      VAR_14 = VAR_8;
    }
  } else {
    FUNC_0 (VAR_4, "using IDLE buffer pointer");
  }




  FUNC_2 (&VAR_10->mem_lock, VAR_12);

  FUNC_4 (VAR_10, &VAR_15->wr_buf_type,
   VAR_14 | VAR_1 | VAR_6);
  if (VAR_14 != VAR_8)
    FUNC_4 (VAR_10, &VAR_15->rd_buf_type, VAR_14);

  FUNC_3 (&VAR_10->mem_lock, VAR_12);



  FUNC_0 (VAR_3, "hrz_open_rx ok");

  return 0;
}
