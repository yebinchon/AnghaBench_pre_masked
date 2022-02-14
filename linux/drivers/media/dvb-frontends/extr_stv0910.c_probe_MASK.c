
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stv {int tsgeneral; int tscfgh; int tsspeed; int i2crpt; scalar_t__ single; scalar_t__ started; int receive_mode; } ;


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
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_0 (struct stv*) ;
 scalar_t__ FUNC_1 (struct stv*,int ,int*) ;
 int FUNC_2 (struct stv*,int) ;
 int FUNC_3 (struct stv*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct stv *VAR_36)
{
 u8 VAR_37;

 VAR_36->receive_mode = VAR_2;
 VAR_36->started = 0;

 if (FUNC_1(VAR_36, VAR_6, &VAR_37) < 0)
  return -VAR_1;

 if (VAR_37 != 0x51)
  return -VAR_0;


 FUNC_3(VAR_36, VAR_10, 0x24);

 FUNC_3(VAR_36, VAR_22, 0x24);

 FUNC_3(VAR_36, VAR_5, 0x88);

 FUNC_3(VAR_36, VAR_7, 0x00);
 FUNC_3(VAR_36, VAR_32, 0x05);
 FUNC_3(VAR_36, VAR_33, 0x02);
 FUNC_3(VAR_36, VAR_34, VAR_36->tsgeneral);
 FUNC_3(VAR_36, VAR_3, 0x02);

 if (VAR_36->single)
  FUNC_3(VAR_36, VAR_4, 0x14);
 else
  FUNC_3(VAR_36, VAR_4, 0x15);

 FUNC_3(VAR_36, VAR_12, 0x02);
 FUNC_3(VAR_36, VAR_24, 0x82);

 FUNC_3(VAR_36, VAR_8, 0x02);
 FUNC_3(VAR_36, VAR_20, 0x02);
 FUNC_3(VAR_36, VAR_9, 0x04);
 FUNC_3(VAR_36, VAR_21, 0x04);

 FUNC_3(VAR_36, VAR_35, 0x80);
 FUNC_3(VAR_36, VAR_35, 0x00);

 FUNC_3(VAR_36, VAR_18, 0x00);
 FUNC_3(VAR_36, VAR_30, 0x00);

 FUNC_3(VAR_36, VAR_11, 0x80);
 FUNC_3(VAR_36, VAR_23, 0x80);

 FUNC_2(VAR_36, 135000000);


 FUNC_3(VAR_36, VAR_13, VAR_36->tscfgh | 0x01);
 FUNC_3(VAR_36, VAR_13, VAR_36->tscfgh);
 FUNC_3(VAR_36, VAR_15, 0xC0);
 FUNC_3(VAR_36, VAR_14, 0x20);

 FUNC_3(VAR_36, VAR_19, VAR_36->tsspeed);

 FUNC_3(VAR_36, VAR_25, VAR_36->tscfgh | 0x01);
 FUNC_3(VAR_36, VAR_25, VAR_36->tscfgh);
 FUNC_3(VAR_36, VAR_27, 0xC0);
 FUNC_3(VAR_36, VAR_26, 0x20);

 FUNC_3(VAR_36, VAR_31, VAR_36->tsspeed);


 FUNC_3(VAR_36, VAR_13, VAR_36->tscfgh | 0x01);
 FUNC_3(VAR_36, VAR_25, VAR_36->tscfgh | 0x01);
 FUNC_3(VAR_36, VAR_13, VAR_36->tscfgh);
 FUNC_3(VAR_36, VAR_25, VAR_36->tscfgh);

 FUNC_3(VAR_36, VAR_10, VAR_36->i2crpt);
 FUNC_3(VAR_36, VAR_22, VAR_36->i2crpt);

 FUNC_3(VAR_36, VAR_17, 0x17);
 FUNC_3(VAR_36, VAR_16, 0xff);

 FUNC_3(VAR_36, VAR_29, 0x17);
 FUNC_3(VAR_36, VAR_28, 0xff);

 FUNC_0(VAR_36);
 return 0;
}
