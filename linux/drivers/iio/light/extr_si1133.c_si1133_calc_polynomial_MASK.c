
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct si1133_coeff {scalar_t__ info; int mag; } ;
typedef int s8 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__,scalar_t__,scalar_t__,int,struct si1133_coeff const*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(u32 VAR_1, u32 VAR_2, u8 VAR_3, u8 VAR_4,
      const struct si1133_coeff *VAR_5)
{
 u8 VAR_6, VAR_7;
 u8 VAR_8;
 s8 VAR_9;
 int VAR_10 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  if (VAR_5->info < 0)
   VAR_9 = -1;
  else
   VAR_9 = 1;

  VAR_6 = FUNC_2(VAR_5->info);
  VAR_7 = FUNC_3(VAR_5->info);

  if ((VAR_6 == 0) && (VAR_7 == 0))
   VAR_10 +=
          VAR_9 * VAR_5->mag << VAR_0;
  else
   VAR_10 += FUNC_1(VAR_1, VAR_2, VAR_6,
         VAR_7,
         VAR_3, VAR_9,
         VAR_5);
  VAR_5++;
 }

 return FUNC_0(VAR_10);
}
