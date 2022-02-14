
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct gendisk {int dummy; } ;
struct block_device {int dummy; } ;
typedef scalar_t__ sector_t ;


 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (struct block_device*) ;
 int FUNC_2 (scalar_t__,unsigned int,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct gendisk*) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static bool FUNC_5(struct gendisk *VAR_0,
         struct block_device *VAR_1,
         sector_t VAR_2, sector_t VAR_3)
{
 unsigned int VAR_4 = FUNC_1(VAR_1);
 if (!VAR_4)
  return 1;







 if (FUNC_0(!FUNC_4(VAR_4))) {
  u32 VAR_5;

  FUNC_2(VAR_2, VAR_4, &VAR_5);
  if (VAR_5)
   return 0;
  if ((VAR_2 + VAR_3) < FUNC_3(VAR_0)) {
   FUNC_2(VAR_3, VAR_4, &VAR_5);
   if (VAR_5)
    return 0;
  }

 } else {

  if (VAR_2 & (VAR_4 - 1))
   return 0;
  if ((VAR_2 + VAR_3) < FUNC_3(VAR_0) &&
      (VAR_3 & (VAR_4 - 1)))
   return 0;

 }

 return 1;
}
