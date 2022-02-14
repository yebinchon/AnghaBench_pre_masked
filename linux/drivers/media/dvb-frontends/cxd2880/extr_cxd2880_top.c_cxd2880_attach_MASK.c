
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct dvb_frontend_ops {int dummy; } ;
struct dvb_frontend {struct cxd2880_priv* demodulator_priv; int ops; } ;
struct TYPE_6__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* read_regs ) (TYPE_1__*,int ,int,scalar_t__*,int) ;} ;
struct TYPE_7__ {int spi; } ;
struct cxd2880_priv {TYPE_1__ regio; int cxd2880_spi; TYPE_3__ spi_device; int spi_mutex; int spi; } ;
struct cxd2880_config {int spi; int spi_mutex; } ;
typedef enum cxd2880_tnrdmd_chip_id { ____Placeholder_cxd2880_tnrdmd_chip_id } cxd2880_tnrdmd_chip_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (struct cxd2880_priv*) ;
 struct cxd2880_priv* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int,int) ;
 int FUNC_9 (TYPE_1__*,int ,int,scalar_t__*,int) ;

struct dvb_frontend *FUNC_10(struct dvb_frontend *VAR_8,
        struct cxd2880_config *VAR_9)
{
 int VAR_10;
 enum cxd2880_tnrdmd_chip_id VAR_11 =
     VAR_4;
 static struct cxd2880_priv *VAR_12;
 u8 VAR_13 = 0;

 if (!VAR_8) {
  FUNC_6("invalid arg.\n");
  return ((void*)0);
 }

 VAR_12 = FUNC_4(sizeof(struct cxd2880_priv), VAR_6);
 if (!VAR_12)
  return ((void*)0);

 VAR_12->spi = VAR_9->spi;
 VAR_12->spi_mutex = VAR_9->spi_mutex;
 VAR_12->spi_device.spi = VAR_9->spi;

 FUNC_5(&VAR_8->ops, &VAR_7,
        sizeof(struct dvb_frontend_ops));

 VAR_10 = FUNC_2(&VAR_12->spi_device,
         VAR_1,
         55000000);
 if (VAR_10) {
  FUNC_6("spi_device_initialize failed. %d\n", VAR_10);
  FUNC_3(VAR_12);
  return ((void*)0);
 }

 VAR_10 = FUNC_1(&VAR_12->cxd2880_spi,
         &VAR_12->spi_device);
 if (VAR_10) {
  FUNC_6("spi_device_create_spi failed. %d\n", VAR_10);
  FUNC_3(VAR_12);
  return ((void*)0);
 }

 VAR_10 = FUNC_0(&VAR_12->regio, &VAR_12->cxd2880_spi, 0);
 if (VAR_10) {
  FUNC_6("io_spi_create failed. %d\n", VAR_10);
  FUNC_3(VAR_12);
  return ((void*)0);
 }
 VAR_10 = VAR_12->regio.write_reg(&VAR_12->regio,
        VAR_0, 0x00, 0x00);
 if (VAR_10) {
  FUNC_6("set bank to 0x00 failed.\n");
  FUNC_3(VAR_12);
  return ((void*)0);
 }
 VAR_10 = VAR_12->regio.read_regs(&VAR_12->regio,
        VAR_0, 0xfd, &VAR_13, 1);
 if (VAR_10) {
  FUNC_6("read chip id failed.\n");
  FUNC_3(VAR_12);
  return ((void*)0);
 }

 VAR_11 = (enum cxd2880_tnrdmd_chip_id)VAR_13;
 if (VAR_11 != VAR_2 &&
     VAR_11 != VAR_3) {
  FUNC_6("chip id invalid.\n");
  FUNC_3(VAR_12);
  return ((void*)0);
 }

 VAR_8->demodulator_priv = VAR_12;
 FUNC_7("CXD2880 driver version: Ver %s\n",
  VAR_5);

 return VAR_8;
}
