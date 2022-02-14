
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(int VAR_8)
{
 unsigned long VAR_9;

 VAR_6 = 1;


 VAR_9 = (VAR_8 & 0xf) << 28;
 VAR_9 |= (VAR_8 & 0xf) << 16;
 VAR_9 |= (VAR_8 & 0x1) << 27;

 if (!VAR_7) {

  int VAR_10 = VAR_2 >> 28;

  VAR_6 = FUNC_0(VAR_10, VAR_9) != 0;
  if (VAR_8 == 15)
   VAR_3 = 1;

 } else if (VAR_5 & VAR_1) {

  if (VAR_4) {
   int VAR_11 = (VAR_2 >> VAR_4) & 0xf;
   VAR_6 = FUNC_0(VAR_11, VAR_9) != 0;
  }

  if (VAR_8 == 15)
   VAR_3 = 1;

 } else if (VAR_5 & VAR_0) {

  unsigned VAR_12 = (VAR_8 >> 4);
  unsigned VAR_13 = VAR_12 % 7;
  unsigned VAR_14 = VAR_12 / 7 + 2;

  if (VAR_14 > 0x1f) {

   VAR_13 = 7;
   VAR_14 = 0x4;
   if ((VAR_8 & 0xf) == 0xf)
    VAR_3 = 1;
  }

  VAR_9 |= VAR_13 << 13;
  VAR_9 |= (VAR_14 & 0x1) << 12;
  VAR_9 |= (VAR_14 & 0x2) << 10;
  VAR_9 |= (VAR_14 & 0x4) << 8;
  VAR_9 |= (VAR_14 & 0x8) << 23;
  VAR_9 |= (VAR_14 & 0x10) << 21;

  VAR_6 = FUNC_0((VAR_9 >> 12) & 0xf, VAR_9) != 0;

 } else {

  switch (VAR_8) {
  case 16:
   VAR_9 = 0x00000800;
   VAR_6 = 0;
   break;
  case 17:
   VAR_9 = 0xf0007800;
   VAR_6 = 0;
   break;
  case 18:
   VAR_9 = 0x00009800;
   break;
  case 19:
   VAR_9 = 0xf0002800;
   VAR_3 = 1;
   break;
  }
 }

 return VAR_9;
}
