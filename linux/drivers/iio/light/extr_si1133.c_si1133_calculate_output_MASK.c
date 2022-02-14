
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct si1133_coeff {int mag; scalar_t__ info; } ;
typedef int s8 ;


 int FUNC_0 (int ,int,int ,int) ;

__attribute__((used)) static int FUNC_1(u32 VAR_0, u32 VAR_1, u8 VAR_2, u8 VAR_3,
       u8 VAR_4, s8 VAR_5,
       const struct si1133_coeff *VAR_6)
{
 s8 VAR_7;
 int VAR_8 = 1;
 int VAR_9 = 1;
 int VAR_10 = 1;
 int VAR_11 = 1;

 VAR_7 = ((u16)VAR_6->info & 0xFF00) >> 8;
 VAR_7 ^= 0xFF;
 VAR_7 += 1;
 VAR_7 = -VAR_7;

 if (VAR_2 > 0) {
  VAR_8 = FUNC_0(VAR_0, VAR_4,
             VAR_6->mag, VAR_7);
  if (VAR_2 > 1)
   VAR_9 = VAR_8;
 }

 if (VAR_3 > 0) {
  VAR_10 = FUNC_0(VAR_1, VAR_4,
             VAR_6->mag, VAR_7);
  if (VAR_3 > 1)
   VAR_11 = VAR_10;
 }

 return VAR_5 * VAR_8 * VAR_9 * VAR_10 * VAR_11;
}
