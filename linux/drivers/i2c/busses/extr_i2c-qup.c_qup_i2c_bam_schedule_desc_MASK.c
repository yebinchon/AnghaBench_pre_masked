
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int * start; } ;
struct TYPE_8__ {int sg_cnt; int * sg; int dma; TYPE_1__ tag; } ;
struct TYPE_6__ {int * start; } ;
struct TYPE_7__ {int sg_cnt; int * sg; int dma; TYPE_2__ tag; } ;
struct qup_i2c_dev {int bus_err; TYPE_4__ brx; int dev; TYPE_3__ btx; int xfer; scalar_t__ qup_err; int xfer_timeout; } ;
struct dma_async_tx_descriptor {struct qup_i2c_dev* callback_param; void* callback; } ;
typedef int dma_cookie_t ;


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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int,int ) ;
 struct dma_async_tx_descriptor* FUNC_4 (int ,int *,int,int ,int) ;
 int FUNC_5 (struct dma_async_tx_descriptor*) ;
 int FUNC_6 (int ) ;
 void* VAR_15 ;
 scalar_t__ FUNC_7 (struct qup_i2c_dev*,int ) ;
 int FUNC_8 (struct qup_i2c_dev*) ;
 int FUNC_9 (int *,int *,int,struct qup_i2c_dev*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static int FUNC_12(struct qup_i2c_dev *VAR_16)
{
 struct dma_async_tx_descriptor *VAR_17, *VAR_18 = ((void*)0);
 int VAR_19 = 0;
 dma_cookie_t VAR_20, VAR_21;
 u32 VAR_22 = 0;
 u32 VAR_23 = VAR_16->btx.sg_cnt, VAR_24 = VAR_16->brx.sg_cnt;


 VAR_22 = 1;
 if (VAR_24) {
  VAR_16->btx.tag.start[0] = VAR_12;
  VAR_22++;


  VAR_19 = FUNC_9(&VAR_16->brx.sg[VAR_24++],
         &VAR_16->brx.tag.start[0],
         1, VAR_16, VAR_1);
  if (VAR_19)
   return VAR_19;
 }

 VAR_16->btx.tag.start[VAR_22 - 1] = VAR_11;
 VAR_19 = FUNC_9(&VAR_16->btx.sg[VAR_23++], &VAR_16->btx.tag.start[0],
        VAR_22, VAR_16, VAR_5);
 if (VAR_19)
  return VAR_19;

 VAR_17 = FUNC_4(VAR_16->btx.dma, VAR_16->btx.sg, VAR_23,
          VAR_2,
          VAR_4 | VAR_3);
 if (!VAR_17) {
  FUNC_0(VAR_16->dev, "failed to get tx desc\n");
  VAR_19 = -VAR_6;
  goto desc_err;
 }

 if (!VAR_24) {
  VAR_17->callback = VAR_15;
  VAR_17->callback_param = VAR_16;
 }

 VAR_21 = FUNC_5(VAR_17);
 if (FUNC_2(VAR_21)) {
  VAR_19 = -VAR_6;
  goto desc_err;
 }

 FUNC_1(VAR_16->btx.dma);

 if (VAR_24) {
  VAR_18 = FUNC_4(VAR_16->brx.dma, VAR_16->brx.sg,
           VAR_24, VAR_0,
           VAR_4);
  if (!VAR_18) {
   FUNC_0(VAR_16->dev, "failed to get rx desc\n");
   VAR_19 = -VAR_6;


   FUNC_6(VAR_16->btx.dma);
   goto desc_err;
  }

  VAR_18->callback = VAR_15;
  VAR_18->callback_param = VAR_16;
  VAR_20 = FUNC_5(VAR_18);
  if (FUNC_2(VAR_20)) {
   VAR_19 = -VAR_6;
   goto desc_err;
  }

  FUNC_1(VAR_16->brx.dma);
 }

 if (!FUNC_11(&VAR_16->xfer, VAR_16->xfer_timeout)) {
  FUNC_0(VAR_16->dev, "normal trans timed out\n");
  VAR_19 = -VAR_9;
 }

 if (VAR_19 || VAR_16->bus_err || VAR_16->qup_err) {
  FUNC_10(&VAR_16->xfer);

  if (FUNC_7(VAR_16, VAR_14)) {
   FUNC_0(VAR_16->dev, "change to run state timed out");
   goto desc_err;
  }

  FUNC_8(VAR_16);


  if (!FUNC_11(&VAR_16->xfer, VAR_10))
   FUNC_0(VAR_16->dev, "flush timed out\n");

  VAR_19 = (VAR_16->bus_err & VAR_13) ? -VAR_8 : -VAR_7;
 }

desc_err:
 FUNC_3(VAR_16->dev, VAR_16->btx.sg, VAR_23, VAR_5);

 if (VAR_24)
  FUNC_3(VAR_16->dev, VAR_16->brx.sg, VAR_24,
        VAR_1);

 return VAR_19;
}
