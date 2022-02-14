
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt312_state {int freq_mult; int id; int xtal; } ;
struct dvb_frontend {struct mt312_state* demodulator_priv; } ;
typedef int buf_def ;
typedef int buf ;


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
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct mt312_state*,int) ;
 int FUNC_2 (struct mt312_state*,int ,int*,int) ;
 int FUNC_3 (struct mt312_state*,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_10)
{
 struct mt312_state *VAR_11 = VAR_10->demodulator_priv;
 int VAR_12;
 u8 VAR_13[2];


 VAR_12 = FUNC_3(VAR_11, VAR_0,
   (VAR_11->freq_mult == 6 ? 0x88 : 0x8c));
 if (VAR_12 < 0)
  return VAR_12;


 FUNC_4(150);


 VAR_12 = FUNC_1(VAR_11, 1);
 if (VAR_12 < 0)
  return VAR_12;



 {
  u8 VAR_14[8] = { 0x14, 0x12, 0x03, 0x02,
      0x01, 0x00, 0x00, 0x00 };

  VAR_12 = FUNC_2(VAR_11, VAR_9, VAR_14, sizeof(VAR_14));
  if (VAR_12 < 0)
   return VAR_12;
 }

 switch (VAR_11->id) {
 case 128:

  VAR_12 = FUNC_3(VAR_11, VAR_2, 0x80);
  if (VAR_12 < 0)
   return VAR_12;


  VAR_13[0] = 0x80;
  VAR_13[1] = 0xB0;
  VAR_12 = FUNC_2(VAR_11, VAR_3, VAR_13, 2);
  if (VAR_12 < 0)
   return VAR_12;


  VAR_12 = FUNC_3(VAR_11, VAR_3, 0x00);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_12 = FUNC_3(VAR_11, VAR_4, 0x00);
  if (VAR_12 < 0)
   return VAR_12;

  break;
 }


 VAR_13[0] = FUNC_0(VAR_11->xtal * VAR_11->freq_mult * 2, 1000000);


 VAR_13[1] = FUNC_0(VAR_11->xtal, 22000 * 4);

 VAR_12 = FUNC_2(VAR_11, VAR_7, VAR_13, sizeof(VAR_13));
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_3(VAR_11, VAR_6, 0x32);
 if (VAR_12 < 0)
  return VAR_12;


 switch (VAR_11->id) {
 case 128:
  VAR_13[0] = 0x33;
  break;
 default:
  VAR_13[0] = 0x53;
  break;
 }

 VAR_12 = FUNC_3(VAR_11, VAR_5, VAR_13[0]);
 if (VAR_12 < 0)
  return VAR_12;


 VAR_13[0] = 0x8c;
 VAR_13[1] = 0x98;

 VAR_12 = FUNC_2(VAR_11, VAR_8, VAR_13, sizeof(VAR_13));
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_3(VAR_11, VAR_1, 0x69);
 if (VAR_12 < 0)
  return VAR_12;

 return 0;
}
