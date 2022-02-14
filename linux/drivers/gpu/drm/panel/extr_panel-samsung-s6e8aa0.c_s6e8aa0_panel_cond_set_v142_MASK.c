
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s6e8aa0 {int id; scalar_t__ flip_vertical; scalar_t__ flip_horizontal; } ;


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
 int FUNC_0 (struct s6e8aa0*,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct s6e8aa0 *VAR_28)
{
 static const u8 VAR_29[] = {
  0x04, 0x04, 0x04, 0x04, 0x04, 0x60, 0x80, 0xA0
 };
 u8 VAR_30 = VAR_29[VAR_28->id >> 5];
 u8 VAR_31 = 0x3d;
 u8 VAR_32 = 0xc8;
 u8 VAR_33 = 0x08;
 u8 VAR_34 = 0x48;
 u8 VAR_35 = 0xff;
 u8 VAR_36 = 0xff;
 u8 VAR_37 = 0xc8;

 if (VAR_28->flip_vertical) {

  VAR_31 &= ~(VAR_21);
  VAR_31 |= (VAR_20);
 }

 if (VAR_28->flip_horizontal) {

  VAR_31 &= ~(VAR_27);
  VAR_31 |= (VAR_26);
 }

 if (VAR_28->flip_horizontal || VAR_28->flip_vertical) {

  VAR_32 &= ~(VAR_5 |
   VAR_7);
  VAR_32 |= (VAR_4 | VAR_6);


  VAR_33 &= ~(VAR_23 |
   VAR_25);
  VAR_33 |= (VAR_22 | VAR_24);


  VAR_34 &= ~(VAR_3 |
   VAR_1);
  VAR_34 |= (VAR_2 |
   VAR_0);


  VAR_35 &= ~(VAR_11 |
   VAR_9);
  VAR_35 |= (VAR_10 |
   VAR_8);


  VAR_36 &= ~(VAR_15 |
   VAR_13);
  VAR_36 |= (VAR_14 |
   VAR_12);


  VAR_37 &= ~(VAR_17 |
   VAR_19);
  VAR_37 |= (VAR_16 |
   VAR_18);
 }

 FUNC_0(VAR_28,
  0xf8, VAR_31, 0x35, 0x00, 0x00, 0x00, 0x93, 0x00,
  0x3c, 0x78, 0x08, 0x27, 0x7d, 0x3f, 0x00, 0x00,
  0x00, 0x20, VAR_30, 0x08, 0x6e, 0x00, 0x00, 0x00,
  0x02, 0x07, 0x07, 0x23, 0x23, 0xc0, VAR_32, VAR_33,
  VAR_34, 0xc1, 0x00, 0xc1, VAR_35, VAR_36,
  VAR_37);
}
