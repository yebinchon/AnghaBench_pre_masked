
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sdio_func {int num; } ;
struct btmrvl_sdio_card {int ioport; TYPE_1__* reg; struct sdio_func* func; } ;
struct TYPE_2__ {int card_misc_cfg; int host_int_rsr; scalar_t__ int_read_to_clear; int io_port_2; int io_port_1; int io_port_0; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct sdio_func*) ;
 int FUNC_3 (struct sdio_func*,int ) ;
 int FUNC_4 (struct sdio_func*) ;
 int FUNC_5 (struct sdio_func*) ;
 int FUNC_6 (struct sdio_func*,int ,int*) ;
 int FUNC_7 (struct sdio_func*) ;
 int FUNC_8 (struct sdio_func*) ;
 int FUNC_9 (struct sdio_func*,int ) ;
 int FUNC_10 (struct sdio_func*,struct btmrvl_sdio_card*) ;
 int FUNC_11 (struct sdio_func*,int,int ,int*) ;

__attribute__((used)) static int FUNC_12(struct btmrvl_sdio_card *VAR_4)
{
 struct sdio_func *VAR_5;
 u8 VAR_6;
 int VAR_7;

 if (!VAR_4 || !VAR_4->func) {
  FUNC_1("Error: card or function is NULL!");
  VAR_7 = -VAR_0;
  goto failed;
 }

 VAR_5 = VAR_4->func;

 FUNC_2(VAR_5);

 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7) {
  FUNC_1("sdio_enable_func() failed: ret=%d", VAR_7);
  VAR_7 = -VAR_1;
  goto release_host;
 }

 VAR_7 = FUNC_3(VAR_5, VAR_3);
 if (VAR_7) {
  FUNC_1("sdio_claim_irq failed: ret=%d", VAR_7);
  VAR_7 = -VAR_1;
  goto disable_func;
 }

 VAR_7 = FUNC_9(VAR_4->func, VAR_2);
 if (VAR_7) {
  FUNC_1("cannot set SDIO block size");
  VAR_7 = -VAR_1;
  goto release_irq;
 }

 VAR_6 = FUNC_6(VAR_5, VAR_4->reg->io_port_0, &VAR_7);
 if (VAR_7 < 0) {
  VAR_7 = -VAR_1;
  goto release_irq;
 }

 VAR_4->ioport = VAR_6;

 VAR_6 = FUNC_6(VAR_5, VAR_4->reg->io_port_1, &VAR_7);
 if (VAR_7 < 0) {
  VAR_7 = -VAR_1;
  goto release_irq;
 }

 VAR_4->ioport |= (VAR_6 << 8);

 VAR_6 = FUNC_6(VAR_5, VAR_4->reg->io_port_2, &VAR_7);
 if (VAR_7 < 0) {
  VAR_7 = -VAR_1;
  goto release_irq;
 }

 VAR_4->ioport |= (VAR_6 << 16);

 FUNC_0("SDIO FUNC%d IO port: 0x%x", VAR_5->num, VAR_4->ioport);

 if (VAR_4->reg->int_read_to_clear) {
  VAR_6 = FUNC_6(VAR_5, VAR_4->reg->host_int_rsr, &VAR_7);
  if (VAR_7 < 0) {
   VAR_7 = -VAR_1;
   goto release_irq;
  }
  FUNC_11(VAR_5, VAR_6 | 0x3f, VAR_4->reg->host_int_rsr, &VAR_7);
  if (VAR_7 < 0) {
   VAR_7 = -VAR_1;
   goto release_irq;
  }

  VAR_6 = FUNC_6(VAR_5, VAR_4->reg->card_misc_cfg, &VAR_7);
  if (VAR_7 < 0) {
   VAR_7 = -VAR_1;
   goto release_irq;
  }
  FUNC_11(VAR_5, VAR_6 | 0x10, VAR_4->reg->card_misc_cfg, &VAR_7);
  if (VAR_7 < 0) {
   VAR_7 = -VAR_1;
   goto release_irq;
  }
 }

 FUNC_10(VAR_5, VAR_4);

 FUNC_7(VAR_5);

 return 0;

release_irq:
 FUNC_8(VAR_5);

disable_func:
 FUNC_4(VAR_5);

release_host:
 FUNC_7(VAR_5);

failed:
 return VAR_7;
}
