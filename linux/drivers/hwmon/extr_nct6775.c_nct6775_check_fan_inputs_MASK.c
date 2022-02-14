
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nct6775_data {int sioreg; int sio_reg_enable; int kind; int has_fan; int has_fan_min; int has_pwm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;







 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void
FUNC_6(struct nct6775_data *VAR_9)
{
 bool VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
 bool VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;
 bool VAR_16 = 0, VAR_17 = 0, VAR_18 = 0;
 bool VAR_19 = 0, VAR_20 = 0;
 int VAR_21 = VAR_9->sioreg;


 FUNC_5(VAR_21, VAR_3);
 VAR_9->sio_reg_enable = FUNC_3(VAR_21, VAR_4);


 if (VAR_9->kind == VAR_7) {
  int VAR_22 = FUNC_3(VAR_21, 0x2c);

  VAR_10 = VAR_22 & FUNC_0(6);
  VAR_16 = VAR_22 & FUNC_0(7);


  VAR_11 = !(FUNC_3(VAR_21, 0x2A) & 0x80);
 } else if (VAR_9->kind == VAR_8) {
  bool VAR_23 = FUNC_3(VAR_21, 0x27) & 0x80;
  const char *VAR_24, *VAR_25;

  VAR_24 = FUNC_1(VAR_1);
  VAR_25 = FUNC_1(VAR_0);

  if (VAR_25 && VAR_24 &&
      !FUNC_2(VAR_24, "ASRock")) {





   if (!FUNC_2(VAR_25, "Z77 Pro4-M")) {
    if ((VAR_9->sio_reg_enable & 0xe0) != 0xe0) {
     VAR_9->sio_reg_enable |= 0xe0;
     FUNC_4(VAR_21, VAR_4,
           VAR_9->sio_reg_enable);
    }
   }
  }

  if (VAR_9->sio_reg_enable & 0x80)
   VAR_10 = VAR_23;
  else
   VAR_10 = !(FUNC_3(VAR_21, 0x24) & 0x40);

  if (VAR_9->sio_reg_enable & 0x40)
   VAR_11 = VAR_23;
  else
   VAR_11 = FUNC_3(VAR_21, 0x1C) & 0x01;

  if (VAR_9->sio_reg_enable & 0x20)
   VAR_13 = VAR_23;
  else
   VAR_13 = FUNC_3(VAR_21, 0x1C) & 0x02;

  VAR_12 = VAR_11;
  VAR_16 = VAR_10;
 } else if (VAR_9->kind == VAR_5) {
  int VAR_26 = FUNC_3(VAR_21, 0x24);

  VAR_10 = !(VAR_26 & 0x80);
  VAR_16 = VAR_26 & 0x08;
 } else if (VAR_9->kind == VAR_6) {
  int VAR_27 = FUNC_3(VAR_21, 0x1a);
  int VAR_28 = FUNC_3(VAR_21, 0x1b);
  int VAR_29 = FUNC_3(VAR_21, 0x24);
  int VAR_30 = FUNC_3(VAR_21, 0x2a);
  int VAR_31 = FUNC_3(VAR_21, 0x2b);
  int VAR_32 = FUNC_3(VAR_21, 0x2f);

  VAR_10 = !(VAR_31 & 0x10);
  VAR_11 = (VAR_31 & 0x80) ||
   (!(VAR_32 & 0x10) && (VAR_27 & 0x04));
  VAR_13 = (VAR_31 & 0x80) ||
   (!(VAR_28 & 0x03) && (VAR_30 & 0x02));

  VAR_16 = VAR_10 && (VAR_29 & 0x08);
  VAR_17 = VAR_11;
  VAR_18 = VAR_13;
 } else {




  int VAR_33 = FUNC_3(VAR_21, 0x1a);
  int VAR_34 = FUNC_3(VAR_21, 0x1b);
  int VAR_35 = FUNC_3(VAR_21, 0x1c);
  int VAR_36 = FUNC_3(VAR_21, 0x1d);
  int VAR_37 = FUNC_3(VAR_21, 0x2a);
  int VAR_38 = FUNC_3(VAR_21, 0x2b);
  int VAR_39 = FUNC_3(VAR_21, 0x2d);
  int VAR_40 = FUNC_3(VAR_21, 0x2f);
  bool VAR_41 = VAR_40 & FUNC_0(3);
  bool VAR_42 = VAR_40 & FUNC_0(4);
  int VAR_43;
  int VAR_44;
  int VAR_45;

  FUNC_5(VAR_21, VAR_2);
  VAR_43 = FUNC_3(VAR_21, 0xe0);
  VAR_44 = FUNC_3(VAR_21, 0xeb);
  VAR_45 = FUNC_3(VAR_21, 0xed);

  VAR_10 = !(VAR_35 & FUNC_0(5));
  VAR_11 = !(VAR_35 & FUNC_0(6));
  VAR_13 = !(VAR_35 & FUNC_0(7));

  VAR_16 = !(VAR_35 & FUNC_0(0));
  VAR_17 = !(VAR_35 & FUNC_0(1));
  VAR_18 = !(VAR_35 & FUNC_0(2));

  switch (VAR_9->kind) {
  case 134:
   VAR_14 = VAR_39 & FUNC_0(1);
   VAR_19 = VAR_39 & FUNC_0(0);
   break;
  case 133:
   VAR_14 = !VAR_41 && (VAR_39 & FUNC_0(1));
   VAR_19 = !VAR_41 && (VAR_39 & FUNC_0(0));
   break;
  case 132:
   VAR_13 |= VAR_34 & FUNC_0(5);
   VAR_13 |= VAR_44 & FUNC_0(5);

   VAR_14 = !VAR_41 && (VAR_39 & FUNC_0(1));
   VAR_14 |= VAR_44 & FUNC_0(3);

   VAR_18 |= VAR_39 & FUNC_0(7);
   VAR_18 |= (VAR_44 & FUNC_0(4)) && !(VAR_37 & FUNC_0(0));

   VAR_19 = !VAR_41 && (VAR_39 & FUNC_0(0));
   VAR_19 |= VAR_44 & FUNC_0(2);
   break;
  case 131:
   VAR_13 |= VAR_34 & FUNC_0(5);
   VAR_13 |= VAR_44 & FUNC_0(5);

   VAR_14 = (VAR_37 & FUNC_0(4)) &&
     (!VAR_41 || (VAR_45 & FUNC_0(4)));
   VAR_14 |= VAR_44 & FUNC_0(3);

   VAR_18 |= VAR_39 & FUNC_0(7);
   VAR_18 |= (VAR_44 & FUNC_0(4)) && !(VAR_37 & FUNC_0(0));

   VAR_19 = (VAR_37 & FUNC_0(3)) && (VAR_45 & FUNC_0(2));
   VAR_19 |= VAR_44 & FUNC_0(2);
   break;
  case 130:
   VAR_13 |= VAR_34 & FUNC_0(5);
   VAR_13 |= (VAR_43 & FUNC_0(3)) && !(VAR_34 & FUNC_0(0));
   VAR_13 |= VAR_44 & FUNC_0(5);

   VAR_14 = (VAR_37 & FUNC_0(4)) &&
     (!VAR_41 || (VAR_45 & FUNC_0(4)));
   VAR_14 |= VAR_44 & FUNC_0(3);

   VAR_15 = !(VAR_38 & FUNC_0(2));

   VAR_18 |= VAR_39 & FUNC_0(7);
   VAR_18 |= (VAR_43 & FUNC_0(4)) && !(VAR_34 & FUNC_0(0));
   VAR_18 |= (VAR_44 & FUNC_0(4)) && !(VAR_37 & FUNC_0(0));

   VAR_19 = (VAR_37 & FUNC_0(3)) && (VAR_45 & FUNC_0(2));
   VAR_19 |= VAR_44 & FUNC_0(2);

   VAR_20 = !(VAR_36 & (FUNC_0(2) | FUNC_0(3)));
   break;
  case 129:
   VAR_13 |= !VAR_42 && (VAR_34 & FUNC_0(5));
   VAR_13 |= VAR_44 & FUNC_0(5);

   VAR_14 = VAR_37 & FUNC_0(4);
   VAR_14 |= VAR_44 & FUNC_0(3);

   VAR_15 = VAR_33 & FUNC_0(1);

   VAR_18 |= (VAR_44 & FUNC_0(4)) && !(VAR_37 & FUNC_0(0));
   VAR_18 |= !VAR_42 && (VAR_39 & FUNC_0(7));

   VAR_19 = VAR_44 & FUNC_0(2);
   VAR_19 |= VAR_45 & FUNC_0(2);

   VAR_20 = VAR_36 & FUNC_0(4);
   break;
  case 128:
   VAR_14 = !(VAR_34 & FUNC_0(0)) && (VAR_43 & FUNC_0(3));
   VAR_14 |= VAR_37 & FUNC_0(4);
   VAR_14 |= VAR_44 & FUNC_0(5);

   VAR_15 = VAR_34 & FUNC_0(5);
   VAR_15 |= !(VAR_38 & FUNC_0(2));
   VAR_15 |= VAR_44 & FUNC_0(3);

   VAR_19 = !(VAR_34 & FUNC_0(0)) && (VAR_43 & FUNC_0(4));
   VAR_19 |= !(VAR_45 & FUNC_0(2)) && (VAR_37 & FUNC_0(3));
   VAR_19 |= (VAR_44 & FUNC_0(4)) && !(VAR_37 & FUNC_0(0));

   VAR_20 = !(VAR_36 & (FUNC_0(2) | FUNC_0(3)));
   VAR_20 |= VAR_39 & FUNC_0(7);
   VAR_20 |= VAR_44 & FUNC_0(2);
   break;
  default:
   break;
  }

  VAR_12 = VAR_11;
 }


 VAR_9->has_fan = 0x03 | (VAR_10 << 2) | (VAR_11 << 3) |
  (VAR_13 << 4) | (VAR_14 << 5) | (VAR_15 << 6);
 VAR_9->has_fan_min = 0x03 | (VAR_10 << 2) | (VAR_12 << 3) |
  (VAR_13 << 4) | (VAR_14 << 5) | (VAR_15 << 6);
 VAR_9->has_pwm = 0x03 | (VAR_16 << 2) | (VAR_17 << 3) |
  (VAR_18 << 4) | (VAR_19 << 5) | (VAR_20 << 6);
}
