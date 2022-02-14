
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s390_operand {int shift; int bits; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned char *VAR_4,
        const struct s390_operand *VAR_5)
{
 unsigned char *VAR_6;
 unsigned int VAR_7;
 int VAR_8;


 VAR_6 = VAR_4 + VAR_5->shift / 8;
 VAR_8 = (VAR_5->shift & 7) + VAR_5->bits;
 VAR_7 = 0;
 do {
  VAR_7 <<= 8;
  VAR_7 |= (unsigned int) *VAR_6++;
  VAR_8 -= 8;
 } while (VAR_8 > 0);
 VAR_7 >>= -VAR_8;
 VAR_7 &= ((1U << (VAR_5->bits - 1)) << 1) - 1;


 if (VAR_5->bits == 20 && VAR_5->shift == 20)
  VAR_7 = (VAR_7 & 0xff) << 12 | (VAR_7 & 0xfff00) >> 8;


 if (VAR_5->flags & VAR_3) {
  if (VAR_5->shift == 8)
   VAR_7 |= (VAR_4[4] & 8) << 1;
  else if (VAR_5->shift == 12)
   VAR_7 |= (VAR_4[4] & 4) << 2;
  else if (VAR_5->shift == 16)
   VAR_7 |= (VAR_4[4] & 2) << 3;
  else if (VAR_5->shift == 32)
   VAR_7 |= (VAR_4[4] & 1) << 4;
 }


 if ((VAR_5->flags & (VAR_2 | VAR_1)) &&
     (VAR_7 & (1U << (VAR_5->bits - 1))))
  VAR_7 |= (-1U << (VAR_5->bits - 1)) << 1;


 if (VAR_5->flags & VAR_1)
  VAR_7 <<= 1;


 if (VAR_5->flags & VAR_0)
  VAR_7++;
 return VAR_7;
}
