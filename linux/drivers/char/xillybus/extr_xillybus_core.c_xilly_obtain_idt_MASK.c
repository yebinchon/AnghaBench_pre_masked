
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xilly_endpoint {scalar_t__ idtlen; int dev; TYPE_1__* ephw; scalar_t__ fatal_error; scalar_t__ registers; struct xilly_channel** channels; } ;
struct xilly_channel {int wr_sleepy; TYPE_2__** wr_buffers; int wr_buf_size; int endpoint; int wr_wait; } ;
struct TYPE_4__ {scalar_t__ end_offset; unsigned char* addr; int dma_addr; } ;
struct TYPE_3__ {int (* hw_sync_sgl_for_cpu ) (int ,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,unsigned char*,scalar_t__) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 long FUNC_4 (int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct xilly_endpoint *VAR_5)
{
 struct xilly_channel *VAR_6;
 unsigned char *VAR_7;
 long VAR_8;

 VAR_6 = VAR_5->channels[1];

 VAR_6->wr_sleepy = 1;

 FUNC_2(1 |
    (3 << 24),
    VAR_5->registers + VAR_4);

 VAR_8 = FUNC_4(VAR_6->wr_wait,
          (!VAR_6->wr_sleepy),
          VAR_3);

 if (VAR_8 <= 0) {
  FUNC_1(VAR_5->dev, "Failed to obtain IDT. Aborting.\n");

  if (VAR_5->fatal_error)
   return -VAR_1;

  return -VAR_2;
 }

 VAR_5->ephw->hw_sync_sgl_for_cpu(
  VAR_6->endpoint,
  VAR_6->wr_buffers[0]->dma_addr,
  VAR_6->wr_buf_size,
  VAR_0);

 if (VAR_6->wr_buffers[0]->end_offset != VAR_5->idtlen) {
  FUNC_1(VAR_5->dev,
   "IDT length mismatch (%d != %d). Aborting.\n",
   VAR_6->wr_buffers[0]->end_offset, VAR_5->idtlen);
  return -VAR_2;
 }

 if (FUNC_0(~0, VAR_6->wr_buffers[0]->addr,
       VAR_5->idtlen+1) != 0) {
  FUNC_1(VAR_5->dev, "IDT failed CRC check. Aborting.\n");
  return -VAR_2;
 }

 VAR_7 = VAR_6->wr_buffers[0]->addr;


 if (*VAR_7 > 0x82) {
  FUNC_1(VAR_5->dev,
   "No support for IDT version 0x%02x. Maybe the xillybus driver needs an upgrade. Aborting.\n",
   *VAR_7);
  return -VAR_2;
 }

 return 0;
}
