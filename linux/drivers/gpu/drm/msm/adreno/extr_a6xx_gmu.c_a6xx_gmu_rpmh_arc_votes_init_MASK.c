
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef unsigned int u32 ;
typedef unsigned int u16 ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned int const*) ;
 int FUNC_2 (unsigned int const*) ;
 unsigned int FUNC_3 (struct device*,unsigned long) ;
 unsigned int* FUNC_4 (char const*,size_t*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1, u32 *VAR_2,
  unsigned long *VAR_3, int VAR_4, const char *VAR_5)
{
 int VAR_6, VAR_7;
 const u16 *VAR_8, *VAR_9;
 size_t VAR_10, VAR_11;

 VAR_8 = FUNC_4(VAR_5, &VAR_10);
 if (FUNC_1(VAR_8))
  return FUNC_2(VAR_8);




 VAR_10 >>= 1;
 if (!VAR_10)
  return -VAR_0;

 VAR_9 = FUNC_4("mx.lvl", &VAR_11);
 if (FUNC_1(VAR_9))
  return FUNC_2(VAR_9);

 VAR_11 >>= 1;
 if (!VAR_11)
  return -VAR_0;


 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  u8 VAR_12 = 0, VAR_13 = 0;
  unsigned int VAR_14 = FUNC_3(VAR_1, VAR_3[VAR_6]);


  for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++) {
   if (VAR_8[VAR_7] >= VAR_14) {
    VAR_12 = VAR_7;
    break;
   }
  }

  if (VAR_7 == VAR_10) {
   FUNC_0(VAR_1,
    "Level %u not found in in the RPMh list\n",
     VAR_14);
   FUNC_0(VAR_1, "Available levels:\n");
   for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++)
    FUNC_0(VAR_1, "  %u\n", VAR_8[VAR_7]);

   return -VAR_0;
  }






  for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7++) {
   if (VAR_9[VAR_7] >= VAR_14) {
    VAR_13 = VAR_7;
    break;
   } else if (VAR_9[VAR_7]) {
    VAR_13 = VAR_7;
   }
  }


  VAR_2[VAR_6] = ((VAR_8[VAR_12] & 0xffff) << 16) |
   (VAR_13 << 8) | VAR_12;
 }

 return 0;
}
