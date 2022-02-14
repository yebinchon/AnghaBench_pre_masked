
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtd_info {int dummy; } ;
typedef int magic ;
typedef enum mtdsplit_part_type { ____Placeholder_mtdsplit_part_type } mtdsplit_part_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct mtd_info*,size_t,int,size_t*,unsigned char*) ;

int FUNC_3(struct mtd_info *VAR_7, size_t VAR_8,
      enum mtdsplit_part_type *VAR_9)
{
 u32 VAR_10;
 size_t VAR_11;
 int VAR_12;

 VAR_12 = FUNC_2(VAR_7, VAR_8, sizeof(VAR_10), &VAR_11,
         (unsigned char *) &VAR_10);
 if (VAR_12)
  return VAR_12;

 if (VAR_11 != sizeof(VAR_10))
  return -VAR_1;

 if (FUNC_1(VAR_10) == VAR_5) {
  if (VAR_9)
   *VAR_9 = VAR_3;
  return 0;
 } else if (VAR_10 == 0x19852003) {
  if (VAR_9)
   *VAR_9 = VAR_2;
  return 0;
 } else if (FUNC_0(VAR_10) == VAR_6) {
  if (VAR_9)
   *VAR_9 = VAR_4;
  return 0;
 }

 return -VAR_0;
}
