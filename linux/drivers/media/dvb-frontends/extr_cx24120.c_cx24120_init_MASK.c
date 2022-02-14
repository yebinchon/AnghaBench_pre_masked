
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int u8 ;
struct firmware {int size; int* data; } ;
struct TYPE_19__ {int len; TYPE_13__* stat; } ;
struct TYPE_17__ {int len; TYPE_11__* stat; } ;
struct TYPE_15__ {int len; TYPE_9__* stat; } ;
struct TYPE_27__ {int len; TYPE_7__* stat; } ;
struct TYPE_25__ {int len; TYPE_5__* stat; } ;
struct TYPE_23__ {int len; TYPE_3__* stat; } ;
struct dtv_frontend_properties {TYPE_14__ block_count; TYPE_12__ block_error; TYPE_10__ post_bit_count; TYPE_8__ post_bit_error; TYPE_6__ cnr; TYPE_4__ strength; } ;
struct dvb_frontend {struct cx24120_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;
struct cx24120_state {int cold_init; TYPE_2__* i2c; TYPE_1__* config; } ;
struct cx24120_cmd {int len; int* arg; int id; } ;
struct TYPE_28__ {void* scale; } ;
struct TYPE_26__ {void* scale; } ;
struct TYPE_24__ {void* scale; } ;
struct TYPE_22__ {void* scale; } ;
struct TYPE_21__ {int dev; } ;
struct TYPE_20__ {int (* request_firmware ) (struct dvb_frontend*,struct firmware const**,int ) ;} ;
struct TYPE_18__ {void* scale; } ;
struct TYPE_16__ {void* scale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (struct cx24120_state*,struct cx24120_cmd*) ;
 scalar_t__ FUNC_1 (struct cx24120_state*,int) ;
 scalar_t__ FUNC_2 (struct cx24120_state*,int ) ;
 int FUNC_3 (struct cx24120_state*,int) ;
 int FUNC_4 (struct cx24120_state*) ;
 int FUNC_5 (struct cx24120_state*) ;
 int FUNC_6 (struct cx24120_state*,int,int) ;
 int FUNC_7 (struct cx24120_state*,int,int*,int,int) ;
 int FUNC_8 (int *,char*,...) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,unsigned char,unsigned char,unsigned char,unsigned char) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct firmware const*) ;
 int FUNC_13 (struct dvb_frontend*,struct firmware const**,int ) ;

__attribute__((used)) static int FUNC_14(struct dvb_frontend *VAR_9)
{
 const struct firmware *VAR_10;
 struct dtv_frontend_properties *VAR_11 = &VAR_9->dtv_property_cache;
 struct cx24120_state *VAR_12 = VAR_9->demodulator_priv;
 struct cx24120_cmd VAR_13;
 u8 VAR_14;
 int VAR_15, VAR_16;
 unsigned char VAR_17[4];

 if (VAR_12->cold_init)
  return 0;


 FUNC_6(VAR_12, 0xea, 0x00);
 FUNC_5(VAR_12);
 VAR_14 = FUNC_3(VAR_12, 0xfb) & 0xfe;
 FUNC_6(VAR_12, 0xfb, VAR_14);
 VAR_14 = FUNC_3(VAR_12, 0xfc) & 0xfe;
 FUNC_6(VAR_12, 0xfc, VAR_14);
 FUNC_6(VAR_12, 0xc3, 0x04);
 FUNC_6(VAR_12, 0xc4, 0x04);
 FUNC_6(VAR_12, 0xce, 0x00);
 FUNC_6(VAR_12, 0xcf, 0x00);
 VAR_14 = FUNC_3(VAR_12, 0xea) & 0xfe;
 FUNC_6(VAR_12, 0xea, VAR_14);
 FUNC_6(VAR_12, 0xeb, 0x0c);
 FUNC_6(VAR_12, 0xec, 0x06);
 FUNC_6(VAR_12, 0xed, 0x05);
 FUNC_6(VAR_12, 0xee, 0x03);
 FUNC_6(VAR_12, 0xef, 0x05);
 FUNC_6(VAR_12, 0xf3, 0x03);
 FUNC_6(VAR_12, 0xf4, 0x44);

 for (VAR_16 = 0; VAR_16 < 3; VAR_16++) {
  FUNC_6(VAR_12, 0xf0 + VAR_16, 0x04);
  FUNC_6(VAR_12, 0xe6 + VAR_16, 0x02);
 }

 FUNC_6(VAR_12, 0xea, (VAR_14 | 0x01));
 for (VAR_16 = 0; VAR_16 < 6; VAR_16 += 2) {
  FUNC_6(VAR_12, 0xc5 + VAR_16, 0x00);
  FUNC_6(VAR_12, 0xc6 + VAR_16, 0x00);
 }

 FUNC_6(VAR_12, 0xe4, 0x03);
 FUNC_6(VAR_12, 0xeb, 0x0a);

 FUNC_8(&VAR_12->i2c->dev, "requesting firmware (%s) to download...\n",
  VAR_5);

 VAR_15 = VAR_12->config->request_firmware(VAR_9, &VAR_10, VAR_5);
 if (VAR_15) {
  FUNC_9("Could not load firmware (%s): %d\n", VAR_5,
      VAR_15);
  return VAR_15;
 }

 FUNC_8(&VAR_12->i2c->dev,
  "Firmware found, size %d bytes (%02x %02x .. %02x %02x)\n",
  (int)VAR_10->size,
  VAR_10->data[0],
  VAR_10->data[1],
  VAR_10->data[VAR_10->size - 2],
  VAR_10->data[VAR_10->size - 1]);

 FUNC_5(VAR_12);
 VAR_14 = FUNC_3(VAR_12, 0xfb) & 0xfe;
 FUNC_6(VAR_12, 0xfb, VAR_14);
 FUNC_6(VAR_12, 0xe0, 0x76);
 FUNC_6(VAR_12, 0xf7, 0x81);
 FUNC_6(VAR_12, 0xf8, 0x00);
 FUNC_6(VAR_12, 0xf9, 0x00);
 FUNC_7(VAR_12, 0xfa, VAR_10->data, (VAR_10->size - 1), 0x00);
 FUNC_6(VAR_12, 0xf7, 0xc0);
 FUNC_6(VAR_12, 0xe0, 0x00);
 VAR_14 = (VAR_10->size - 2) & 0x00ff;
 FUNC_6(VAR_12, 0xf8, VAR_14);
 VAR_14 = ((VAR_10->size - 2) >> 8) & 0x00ff;
 FUNC_6(VAR_12, 0xf9, VAR_14);
 FUNC_6(VAR_12, 0xf7, 0x00);
 FUNC_6(VAR_12, 0xdc, 0x00);
 FUNC_6(VAR_12, 0xdc, 0x07);
 FUNC_11(500);


 VAR_14 = FUNC_3(VAR_12, 0xe1);
 if (VAR_14 == VAR_10->data[VAR_10->size - 1]) {
  FUNC_8(&VAR_12->i2c->dev, "Firmware uploaded successfully\n");
  VAR_15 = 0;
 } else {
  FUNC_9("Firmware upload failed. Last byte returned=0x%x\n", VAR_15);
  VAR_15 = -VAR_7;
 }
 FUNC_6(VAR_12, 0xdc, 0x00);
 FUNC_12(VAR_10);
 if (VAR_15 != 0)
  return VAR_15;


 VAR_13.id = VAR_3;
 VAR_13.len = 3;
 VAR_13.arg[0] = 0x00;
 VAR_13.arg[1] = 0x00;
 VAR_13.arg[2] = 0x00;

 if (FUNC_0(VAR_12, &VAR_13) != 0) {
  FUNC_9("Error tuner start! :(\n");
  return -VAR_7;
 }


 VAR_15 = FUNC_4(VAR_12);
 if (VAR_15 != 0) {
  FUNC_9("Error set VCO! :(\n");
  return VAR_15;
 }


 VAR_13.id = VAR_0;
 VAR_13.len = 12;
 VAR_13.arg[0] = 0x00;
 VAR_13.arg[1] = 0x00;
 VAR_13.arg[2] = 0x00;
 VAR_13.arg[3] = 0x00;
 VAR_13.arg[4] = 0x05;
 VAR_13.arg[5] = 0x02;
 VAR_13.arg[6] = 0x02;
 VAR_13.arg[7] = 0x00;
 VAR_13.arg[8] = 0x05;
 VAR_13.arg[9] = 0x02;
 VAR_13.arg[10] = 0x02;
 VAR_13.arg[11] = 0x00;

 if (FUNC_0(VAR_12, &VAR_13)) {
  FUNC_9("Error set bandwidth!\n");
  return -VAR_7;
 }

 VAR_14 = FUNC_3(VAR_12, 0xba);
 if (VAR_14 > 3) {
  FUNC_8(&VAR_12->i2c->dev, "Reset-readreg 0xba: %x\n", VAR_15);
  FUNC_9("Error initialising tuner!\n");
  return -VAR_7;
 }

 FUNC_8(&VAR_12->i2c->dev, "Tuner initialised correctly.\n");


 FUNC_6(VAR_12, 0xeb, 0x0a);
 if (FUNC_2(VAR_12, 0) ||
     FUNC_1(VAR_12, 0) ||
     FUNC_1(VAR_12, 1) ||
     FUNC_1(VAR_12, 2)) {
  FUNC_9("Error initialising mpeg output. :(\n");
  return -VAR_7;
 }


 VAR_13.id = VAR_1;
 VAR_13.len = 3;
 VAR_13.arg[0] = 0x00;
 VAR_13.arg[1] = VAR_4;
 VAR_13.arg[2] = VAR_4;
 if (FUNC_0(VAR_12, &VAR_13)) {
  FUNC_9("Error setting ber window\n");
  return -VAR_7;
 }


 VAR_13.id = VAR_2;
 VAR_13.len = 1;
 for (VAR_16 = 0; VAR_16 < 4; VAR_16++) {
  VAR_13.arg[0] = VAR_16;
  VAR_15 = FUNC_0(VAR_12, &VAR_13);
  if (VAR_15 != 0)
   return VAR_15;
  VAR_17[VAR_16] = FUNC_3(VAR_12, VAR_6);
 }
 FUNC_10("FW version %i.%i.%i.%i\n", VAR_17[0], VAR_17[1], VAR_17[2], VAR_17[3]);


 VAR_11->strength.len = 1;
 VAR_11->strength.stat[0].scale = VAR_8;
 VAR_11->cnr.len = 1;
 VAR_11->cnr.stat[0].scale = VAR_8;
 VAR_11->post_bit_error.len = 1;
 VAR_11->post_bit_error.stat[0].scale = VAR_8;
 VAR_11->post_bit_count.len = 1;
 VAR_11->post_bit_count.stat[0].scale = VAR_8;
 VAR_11->block_error.len = 1;
 VAR_11->block_error.stat[0].scale = VAR_8;
 VAR_11->block_count.len = 1;
 VAR_11->block_count.stat[0].scale = VAR_8;

 VAR_12->cold_init = 1;

 return 0;
}
