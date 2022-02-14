
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {int demod_chip; int clock_polarity_flip; } ;
struct lgdt330x_state {scalar_t__ last_stats_time; TYPE_2__* client; TYPE_1__ config; } ;
struct TYPE_16__ {int len; TYPE_7__* stat; } ;
struct TYPE_14__ {int len; TYPE_5__* stat; } ;
struct TYPE_12__ {int len; TYPE_3__* stat; } ;
struct dtv_frontend_properties {TYPE_8__ block_count; TYPE_6__ block_error; TYPE_4__ cnr; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct lgdt330x_state* demodulator_priv; } ;
typedef int lgdt3303_init_data ;
typedef int lgdt3302_init_data ;
typedef int flip_2_lgdt3303_init_data ;
typedef int flip_1_lgdt3303_init_data ;
struct TYPE_15__ {void* scale; } ;
struct TYPE_13__ {void* scale; } ;
struct TYPE_11__ {void* scale; } ;
struct TYPE_10__ {int dev; } ;
 int VAR_0 ;
 void* VAR_1 ;






 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct lgdt330x_state*,char*,char*) ;
 int FUNC_2 (struct lgdt330x_state*,int const*,int) ;
 int FUNC_3 (struct lgdt330x_state*) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_2)
{
 struct lgdt330x_state *VAR_3 = VAR_2->demodulator_priv;
 struct dtv_frontend_properties *VAR_4 = &VAR_2->dtv_property_cache;
 char *VAR_5;
 int VAR_6;




 static const u8 VAR_7[] = {





  131, 0x00,
  130, 0x87,
  129, 0x8e,
  128, 0x01,




  134, 0xfb,




  137, 0x40,
  136, 0x93,
  135, 0x00,




  141, 0xc6,




  140, 0x40,




  143, 0x07,
  142, 0xfe,




  139, 0x08,
  138, 0x9a
 };
 static const u8 VAR_8[] = {
  0x4c, 0x14
 };
 static const u8 VAR_9[] = {
  0x4c, 0x14,
  0x87, 0xf3
 };
 static const u8 VAR_10[] = {
  0x4c, 0x14,
  0x87, 0xda
 };
 switch (VAR_3->config.demod_chip) {
 case 133:
  VAR_5 = "LGDT3302";
  VAR_6 = FUNC_2(VAR_3, VAR_7,
         sizeof(VAR_7));
  break;
 case 132:
  VAR_5 = "LGDT3303";
  switch (VAR_3->config.clock_polarity_flip) {
  case 2:
   VAR_6 = FUNC_2(VAR_3,
          VAR_10,
          sizeof(VAR_10));
   break;
  case 1:
   VAR_6 = FUNC_2(VAR_3,
          VAR_9,
          sizeof(VAR_9));
   break;
  case 0:
  default:
   VAR_6 = FUNC_2(VAR_3, VAR_8,
          sizeof(VAR_8));
  }
  break;
 default:
  VAR_5 = "undefined";
  FUNC_0(&VAR_3->client->dev,
    "Only LGDT3302 and LGDT3303 are supported chips.\n");
  VAR_6 = -VAR_0;
 }
 FUNC_1(VAR_3, "Initialized the %s chip\n", VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_4->cnr.len = 1;
 VAR_4->cnr.stat[0].scale = VAR_1;
 VAR_4->block_error.len = 1;
 VAR_4->block_error.stat[0].scale = VAR_1;
 VAR_4->block_count.len = 1;
 VAR_4->block_count.stat[0].scale = VAR_1;
 VAR_3->last_stats_time = 0;

 return FUNC_3(VAR_3);
}
