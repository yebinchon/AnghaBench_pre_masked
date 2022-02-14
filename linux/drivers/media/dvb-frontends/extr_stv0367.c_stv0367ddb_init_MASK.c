
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


struct stv0367ter_state {int unlock_counter; scalar_t__ first_lock; scalar_t__ pBER; } ;
struct TYPE_16__ {int len; TYPE_7__* stat; } ;
struct TYPE_14__ {int len; TYPE_5__* stat; } ;
struct TYPE_12__ {int len; TYPE_3__* stat; } ;
struct dtv_frontend_properties {TYPE_8__ block_error; TYPE_6__ cnr; TYPE_4__ strength; } ;
struct TYPE_9__ {struct dtv_frontend_properties dtv_property_cache; } ;
struct stv0367_state {size_t deftabs; TYPE_2__* config; TYPE_1__ fe; struct stv0367ter_state* ter_state; } ;
struct TYPE_15__ {void* scale; } ;
struct TYPE_13__ {void* scale; } ;
struct TYPE_11__ {void* scale; } ;
struct TYPE_10__ {int xtal; } ;


 void* VAR_0 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 scalar_t__** VAR_29 ;
 int FUNC_0 (struct stv0367_state*,int ,int ) ;
 int FUNC_1 (struct stv0367_state*,scalar_t__) ;
 int FUNC_2 (struct stv0367_state*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct stv0367_state *VAR_30)
{
 struct stv0367ter_state *VAR_31 = VAR_30->ter_state;
 struct dtv_frontend_properties *VAR_32 = &VAR_30->fe.dtv_property_cache;

 FUNC_2(VAR_30, VAR_17, 0x10);

 if (VAR_29[VAR_30->deftabs][VAR_26])
  FUNC_1(VAR_30,
   VAR_29[VAR_30->deftabs][VAR_26]);

 FUNC_1(VAR_30,
  VAR_29[VAR_30->deftabs][VAR_27]);

 FUNC_2(VAR_30, VAR_17, 0x00);
 FUNC_1(VAR_30,
  VAR_29[VAR_30->deftabs][VAR_28]);

 FUNC_2(VAR_30, VAR_12, 0x2A);
 FUNC_2(VAR_30, VAR_13, 0xD6);
 FUNC_2(VAR_30, VAR_15, 0x55);
 FUNC_2(VAR_30, VAR_16, 0x55);
 FUNC_2(VAR_30, VAR_18, 0x14);
 FUNC_2(VAR_30, VAR_19, 0xAE);
 FUNC_2(VAR_30, VAR_20, 0x56);
 FUNC_2(VAR_30, VAR_11, 0x0);



 FUNC_2(VAR_30, VAR_21, 0x70);
 FUNC_2(VAR_30, VAR_23, 0xC0);
 FUNC_2(VAR_30, VAR_22, 0x20);
 FUNC_2(VAR_30, VAR_24, 0x40);

 FUNC_2(VAR_30, VAR_21, 0x71);
 FUNC_2(VAR_30, VAR_21, 0x70);

 FUNC_2(VAR_30, VAR_17, 0x10);


 FUNC_2(VAR_30, VAR_6, 0x01);

 FUNC_2(VAR_30, VAR_7, 0x8A);




 FUNC_2(VAR_30, VAR_5, 0x85);


 FUNC_2(VAR_30, VAR_8, 0x0D);


 FUNC_0(VAR_30, VAR_25, VAR_30->config->xtal);



 FUNC_2(VAR_30, VAR_9, 0x8b);
 FUNC_2(VAR_30, VAR_10, 0x04);


 FUNC_2(VAR_30, VAR_2, 0x23);

 FUNC_2(VAR_30, VAR_4, 0x01);

 FUNC_2(VAR_30, VAR_1, 0x83);

 FUNC_2(VAR_30, VAR_3, 0x05);


 FUNC_2(VAR_30, VAR_8, 0x00);

 FUNC_2(VAR_30, VAR_14, (0x08 | ((5 & 0x07) << 4)));

 VAR_31->pBER = 0;
 VAR_31->first_lock = 0;
 VAR_31->unlock_counter = 2;

 VAR_32->strength.len = 1;
 VAR_32->strength.stat[0].scale = VAR_0;
 VAR_32->cnr.len = 1;
 VAR_32->cnr.stat[0].scale = VAR_0;
 VAR_32->block_error.len = 1;
 VAR_32->block_error.stat[0].scale = VAR_0;

 return 0;
}
