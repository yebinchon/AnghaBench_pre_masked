
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct dvb_frontend {struct cxd2880_priv* demodulator_priv; } ;
struct cxd2880_tnrdmd_create_param {int en_internal_ldo; int xosc_cap; int xosc_i; int stationary_use; int xtal_share_type; int ts_output_if; } ;
struct TYPE_4__ {int * io; } ;
struct cxd2880_priv {int spi_mutex; TYPE_1__ tnrdmd; int regio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *,struct cxd2880_tnrdmd_create_param*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static int FUNC_8(struct dvb_frontend *VAR_4)
{
 int VAR_5;
 struct cxd2880_priv *VAR_6 = ((void*)0);
 struct cxd2880_tnrdmd_create_param VAR_7;

 if (!VAR_4) {
  FUNC_6("invalid arg.\n");
  return -VAR_3;
 }

 VAR_6 = VAR_4->demodulator_priv;

 VAR_7.ts_output_if = VAR_1;
 VAR_7.xtal_share_type = VAR_2;
 VAR_7.en_internal_ldo = 1;
 VAR_7.xosc_cap = 18;
 VAR_7.xosc_i = 8;
 VAR_7.stationary_use = 1;

 FUNC_3(VAR_6->spi_mutex);
 if (VAR_6->tnrdmd.io != &VAR_6->regio) {
  VAR_5 = FUNC_1(&VAR_6->tnrdmd,
         &VAR_6->regio, &VAR_7);
  if (VAR_5) {
   FUNC_4(VAR_6->spi_mutex);
   FUNC_7("cxd2880 tnrdmd create failed %d\n", VAR_5);
   return VAR_5;
  }
 }
 VAR_5 = FUNC_0(&VAR_6->tnrdmd);
 if (VAR_5) {
  FUNC_4(VAR_6->spi_mutex);
  FUNC_6("cxd2880 integ init failed %d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_2(&VAR_6->tnrdmd,
         VAR_0,
         0x00);
 if (VAR_5) {
  FUNC_4(VAR_6->spi_mutex);
  FUNC_6("cxd2880 set config failed %d\n", VAR_5);
  return VAR_5;
 }
 FUNC_4(VAR_6->spi_mutex);

 FUNC_5("OK.\n");

 return VAR_5;
}
