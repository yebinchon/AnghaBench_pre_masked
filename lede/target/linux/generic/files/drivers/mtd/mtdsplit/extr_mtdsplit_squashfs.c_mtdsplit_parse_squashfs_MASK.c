
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_partition {scalar_t__ offset; int size; int name; } ;
struct mtd_part_parser_data {int dummy; } ;
struct mtd_info {scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mtd_partition* FUNC_0 (int,int ) ;
 int FUNC_1 (struct mtd_info*,int ,size_t*) ;
 int FUNC_2 (scalar_t__,struct mtd_info*) ;
 scalar_t__ FUNC_3 (size_t,struct mtd_info*) ;
 struct mtd_info* FUNC_4 (struct mtd_info*) ;
 size_t FUNC_5 (struct mtd_info*) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static int
FUNC_7(struct mtd_info *VAR_3,
   const struct mtd_partition **VAR_4,
   struct mtd_part_parser_data *VAR_5)
{
 struct mtd_partition *VAR_6;
 struct mtd_info *VAR_7;
 size_t VAR_8;
 size_t VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_3, 0, &VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_7 = FUNC_4(VAR_3);
 VAR_8 = FUNC_5(VAR_3);

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  FUNC_6("unable to allocate memory for \"%s\" partition\n",
    VAR_2);
  return -VAR_0;
 }

 VAR_6->name = VAR_2;
 VAR_6->offset = FUNC_3(VAR_8 + VAR_9,
      VAR_7) - VAR_8;
 VAR_6->size = FUNC_2(VAR_3->size - VAR_6->offset, VAR_3);

 *VAR_4 = VAR_6;
 return 1;
}
