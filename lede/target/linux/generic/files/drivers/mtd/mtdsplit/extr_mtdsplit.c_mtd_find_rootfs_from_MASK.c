
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;
typedef enum mtdsplit_part_type { ____Placeholder_mtdsplit_part_type } mtdsplit_part_type ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,size_t,int*) ;
 size_t FUNC_1 (struct mtd_info*,size_t) ;

int FUNC_2(struct mtd_info *VAR_1,
    size_t VAR_2,
    size_t VAR_3,
    size_t *VAR_4,
    enum mtdsplit_part_type *VAR_5)
{
 size_t VAR_6;
 int VAR_7;

 for (VAR_6 = VAR_2; VAR_6 < VAR_3;
      VAR_6 = FUNC_1(VAR_1, VAR_6)) {
  VAR_7 = FUNC_0(VAR_1, VAR_6, VAR_5);
  if (VAR_7)
   continue;

  *VAR_4 = VAR_6;
  return 0;
 }

 return -VAR_0;
}
