
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct fw_card {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fw_card*,int ,int,int,int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct fw_card *VAR_5, int VAR_6, int VAR_7,
  u32 VAR_8, u64 VAR_9, bool VAR_10)
{
 __be32 VAR_11, VAR_12, VAR_13;
 __be32 VAR_14[2];
 int VAR_15, VAR_16 = -VAR_2, VAR_17 = 5;

 VAR_13 = VAR_12 = VAR_10 ? FUNC_0(~0) : 0;

 for (VAR_15 = 0; VAR_15 < 32; VAR_15++) {
  if (!(VAR_8 & 1 << VAR_15))
   continue;

  VAR_16 = -VAR_1;

  VAR_11 = FUNC_0(1 << (31 - VAR_15));
  if ((VAR_13 & VAR_11) != (VAR_12 & VAR_11))
   continue;

  VAR_14[0] = VAR_13;
  VAR_14[1] = VAR_13 ^ VAR_11;
  switch (FUNC_1(VAR_5, VAR_4,
        VAR_6, VAR_7, VAR_3,
        VAR_9, VAR_14, 8)) {
  case 128:

   return VAR_10 ? -VAR_0 : VAR_15;

  case 129:
   if (VAR_14[0] == VAR_13)
    return VAR_15;

   VAR_13 = VAR_14[0];


   if ((VAR_14[0] & VAR_11) == (VAR_14[1] & VAR_11))
    continue;


  default:
   if (VAR_17) {
    VAR_17--;
    VAR_15--;
   } else {
    VAR_16 = -VAR_2;
   }
  }
 }

 return VAR_16;
}
