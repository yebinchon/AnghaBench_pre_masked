
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct scatterlist {int dummy; } ;
struct device {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct device*,scalar_t__,scalar_t__,scalar_t__*,scalar_t__**) ;
 scalar_t__ FUNC_1 (struct scatterlist*) ;
 scalar_t__ FUNC_2 (struct scatterlist*) ;
 struct scatterlist* FUNC_3 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, struct scatterlist *VAR_1,
    u32 VAR_2, u32 VAR_3,
    u32 *VAR_4, u32 **VAR_5)
{
 struct scatterlist *VAR_6 = VAR_1;
 u32 *VAR_7 = *VAR_5;
 s32 VAR_8 = 0;

 for ( ; (VAR_6 && VAR_2);
       VAR_6 = FUNC_3(VAR_6)) {
  u32 VAR_9 =
   (VAR_2 > FUNC_2(VAR_6) - VAR_3) ?
    FUNC_2(VAR_6) - VAR_3 :
    VAR_2;
  VAR_2 -= VAR_9;
  VAR_8 = FUNC_0(VAR_0, FUNC_1(VAR_6) +
         VAR_3, VAR_9,
         VAR_4, &VAR_7);
  if (VAR_8)
   return VAR_8;

  VAR_3 = 0;
 }
 *VAR_5 = VAR_7;
 return 0;
}
