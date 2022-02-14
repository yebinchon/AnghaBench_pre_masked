
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto4xx_device {scalar_t__ ce_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int **,unsigned int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct crypto4xx_device *VAR_7,
     u8 *VAR_8, unsigned int VAR_9)
{
 unsigned int VAR_10, VAR_11 = 0;
 u32 VAR_12[2];

 do {

  FUNC_3(VAR_6,
         VAR_7->ce_base + VAR_0);

  for (VAR_10 = 0; VAR_10 < 1024; VAR_10++) {

   if ((FUNC_1(VAR_7->ce_base + VAR_3) &
        VAR_4))
    continue;

   VAR_12[0] = FUNC_2(VAR_7->ce_base + VAR_1);
   VAR_12[1] = FUNC_2(VAR_7->ce_base + VAR_2);
   break;
  }
  if (VAR_10 == 1024)
   return -VAR_5;

  if ((VAR_9 - VAR_11) >= 8) {
   FUNC_0(VAR_8, &VAR_12, 8);
   VAR_8 += 8;
   VAR_11 += 8;
  } else {

   FUNC_0(VAR_8, &VAR_12, VAR_9 - VAR_11);
   break;
  }
 } while (VAR_11 < VAR_9);

 return VAR_11;
}
