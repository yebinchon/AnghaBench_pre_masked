
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u64 ;
typedef int u16 ;
struct scatterlist {int dummy; } ;
struct TYPE_3__ {int data_direction; } ;
struct srpt_send_ioctx {struct scatterlist imm_sg; struct srpt_recv_ioctx* recv_ioctx; TYPE_1__ cmd; } ;
struct srpt_recv_ioctx {int byte_len; } ;
struct TYPE_4__ {int len; } ;
struct srp_indirect_buf {struct srp_direct_buf* desc_list; int len; TYPE_2__ table_desc; } ;
struct srp_imm_buf {int len; } ;
struct srp_direct_buf {int len; } ;
struct srp_cmd {int buf_fmt; int data_out_desc_cnt; int data_in_desc_cnt; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct scatterlist*,void*,int) ;
 int VAR_8 ;
 int FUNC_5 (struct srpt_send_ioctx*,struct srp_direct_buf*,int,struct scatterlist**,unsigned int*) ;
 void* FUNC_6 (struct srp_cmd*) ;

__attribute__((used)) static int FUNC_7(struct srpt_recv_ioctx *VAR_9,
  struct srpt_send_ioctx *VAR_10,
  struct srp_cmd *VAR_11, enum dma_data_direction *VAR_12,
  struct scatterlist **VAR_13, unsigned int *VAR_14, u64 *VAR_15,
  u16 VAR_16)
{
 FUNC_0(!VAR_12);
 FUNC_0(!VAR_15);






 if (VAR_11->buf_fmt & 0xf)

  *VAR_12 = VAR_0;
 else if (VAR_11->buf_fmt >> 4)

  *VAR_12 = VAR_2;
 else
  *VAR_12 = VAR_1;


 VAR_10->cmd.data_direction = *VAR_12;

 if (((VAR_11->buf_fmt & 0xf) == VAR_5) ||
     ((VAR_11->buf_fmt >> 4) == VAR_5)) {
  struct srp_direct_buf *VAR_17 = FUNC_6(VAR_11);

  *VAR_15 = FUNC_1(VAR_17->len);
  return FUNC_5(VAR_10, VAR_17, 1, VAR_13, VAR_14);
 } else if (((VAR_11->buf_fmt & 0xf) == VAR_7) ||
     ((VAR_11->buf_fmt >> 4) == VAR_7)) {
  struct srp_indirect_buf *VAR_18 = FUNC_6(VAR_11);
  int VAR_19 = FUNC_1(VAR_18->table_desc.len) /
    sizeof(struct srp_direct_buf);

  if (VAR_19 >
      (VAR_11->data_out_desc_cnt + VAR_11->data_in_desc_cnt)) {
   FUNC_2("received unsupported SRP_CMD request type (%u out + %u in != %u / %zu)\n",
          VAR_11->data_out_desc_cnt,
          VAR_11->data_in_desc_cnt,
          FUNC_1(VAR_18->table_desc.len),
          sizeof(struct srp_direct_buf));
   return -VAR_3;
  }

  *VAR_15 = FUNC_1(VAR_18->len);
  return FUNC_5(VAR_10, VAR_18->desc_list, VAR_19,
    VAR_13, VAR_14);
 } else if ((VAR_11->buf_fmt >> 4) == VAR_6) {
  struct srp_imm_buf *VAR_20 = FUNC_6(VAR_11);
  void *VAR_21 = (void *)VAR_11 + VAR_16;
  uint32_t VAR_22 = FUNC_1(VAR_20->len);
  uint32_t VAR_23 = VAR_16 + VAR_22;

  if (VAR_23 > VAR_8) {
   FUNC_2("Immediate data (length %d + %d) exceeds request size %d\n",
          VAR_16, VAR_22, VAR_8);
   return -VAR_3;
  }
  if (VAR_9->byte_len < VAR_23) {
   FUNC_2("Received too few data - %d < %d\n",
          VAR_9->byte_len, VAR_23);
   return -VAR_4;
  }




  if ((void *)(VAR_20 + 1) > (void *)VAR_21) {
   FUNC_2("Received invalid write request\n");
   return -VAR_3;
  }
  *VAR_15 = VAR_22;
  VAR_10->recv_ioctx = VAR_9;
  if ((uintptr_t)VAR_21 & 511) {
   FUNC_3("Internal error - the receive buffers are not aligned properly.\n");
   return -VAR_3;
  }
  FUNC_4(&VAR_10->imm_sg, VAR_21, VAR_22);
  *VAR_13 = &VAR_10->imm_sg;
  *VAR_14 = 1;
  return 0;
 } else {
  *VAR_15 = 0;
  return 0;
 }
}
