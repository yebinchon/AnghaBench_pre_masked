
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {TYPE_2__* stat; } ;
struct dtv_frontend_properties {TYPE_3__ strength; } ;
struct TYPE_4__ {struct dtv_frontend_properties dtv_property_cache; } ;
struct stv {scalar_t__ regoff; TYPE_1__ fe; } ;
struct dvb_frontend {struct stv* demodulator_priv; } ;
typedef int s32 ;
struct TYPE_5__ {int svalue; int scale; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct stv*,scalar_t__,int*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct dvb_frontend *VAR_4)
{
 struct stv *VAR_5 = VAR_4->demodulator_priv;
 struct dtv_frontend_properties *VAR_6 = &VAR_5->fe.dtv_property_cache;
 u8 VAR_7[2];
 u16 VAR_8;
 s32 VAR_9, VAR_10 = 0;
 int VAR_11;

 FUNC_1(VAR_5, VAR_1 + VAR_5->regoff, VAR_7, 2);

 VAR_8 = (((u32)VAR_7[0]) << 8) | VAR_7[1];

 for (VAR_11 = 0; VAR_11 < 5; VAR_11 += 1) {
  FUNC_1(VAR_5, VAR_2 + VAR_5->regoff, VAR_7, 2);
  VAR_10 += (u32)VAR_7[0] * (u32)VAR_7[0]
   + (u32)VAR_7[1] * (u32)VAR_7[1];
  FUNC_3(3000, 4000);
 }
 VAR_10 /= 5;

 VAR_9 = FUNC_2(VAR_3, FUNC_0(VAR_3), VAR_10) + 352;

 VAR_6->strength.stat[0].scale = VAR_0;
 VAR_6->strength.stat[0].svalue = (VAR_9 - VAR_8);
}
