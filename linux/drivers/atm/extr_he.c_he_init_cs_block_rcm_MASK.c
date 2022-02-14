
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct he_dev {unsigned long long tx_numbuffs; TYPE_1__* atm_dev; } ;
struct TYPE_2__ {unsigned int link_rate; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct he_dev*,int,scalar_t__) ;
 int FUNC_1 (unsigned int***) ;
 unsigned int*** FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct he_dev *VAR_5)
{
 unsigned (*VAR_6)[16][16];
 unsigned VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11;

 unsigned VAR_12, VAR_13, VAR_14;
 unsigned long long VAR_15;
 int VAR_16, VAR_17, VAR_18 = 4;

 VAR_6 = FUNC_2( sizeof(unsigned) * 16 * 16, VAR_3);
 if (!VAR_6)
  return -VAR_2;



 for (VAR_11 = 0x0; VAR_11 < 0xff; ++VAR_11)
  FUNC_0(VAR_5, 0x0, VAR_1 + VAR_11);



 for (VAR_11 = 0x100; VAR_11 < 0x1ff; ++VAR_11)
  FUNC_0(VAR_5, 0x0, VAR_1 + VAR_11);
 VAR_7 = VAR_5->atm_dev->link_rate;
 VAR_8 = VAR_7 / 32;
 for (VAR_10 = 0; VAR_10 < 16; VAR_10++) {
  (*VAR_6)[0][VAR_10] = VAR_7;
  VAR_7 -= VAR_8;
 }

 for (VAR_9 = 1; VAR_9 < 16; VAR_9++)
  for (VAR_10 = 0; VAR_10 < 16; VAR_10++)
   if (VAR_9 > 14)
    (*VAR_6)[VAR_9][VAR_10] = (*VAR_6)[VAR_9 - 1][VAR_10] / 4;
   else
    (*VAR_6)[VAR_9][VAR_10] = (*VAR_6)[VAR_9 - 1][VAR_10] / 2;
 VAR_12 = 0;
 while (VAR_12 < 0x400) {
  VAR_14 = (VAR_12 & 0x1f) << 4;
  VAR_13 = VAR_12 >> 5;





  VAR_15 = (unsigned long long) (1UL << VAR_13) * (VAR_14 + 512) >> 9;

  if (VAR_15 < 10)
   VAR_15 = 10;

  for (VAR_9 = 255; VAR_9 > 0; VAR_9--)
   if ((*VAR_6)[VAR_9/16][VAR_9%16] >= VAR_15)
    break;
  VAR_16 = VAR_5->atm_dev->link_rate / VAR_0;
  if (VAR_15 > (272ULL * VAR_16))
   VAR_17 = 4;
  else if (VAR_15 > (204ULL * VAR_16))
   VAR_17 = 3;
  else if (VAR_15 > (136ULL * VAR_16))
   VAR_17 = 2;
  else if (VAR_15 > (68ULL * VAR_16))
   VAR_17 = 1;
  else
   VAR_17 = 0;

  if (VAR_17 > VAR_18)
   VAR_17 = VAR_18;
  VAR_11 = (VAR_11 << 16) | ((VAR_9 << 8) | VAR_17);



  if (VAR_12 & 0x1)
   FUNC_0(VAR_5, VAR_11,
    VAR_1 + 0x400 + (VAR_12 >> 1));

  ++VAR_12;
 }

 FUNC_1(VAR_6);
 return 0;
}
