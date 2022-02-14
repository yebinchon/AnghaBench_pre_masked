
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mtd_partition {unsigned long offset; unsigned long size; int name; } ;
struct mtd_part_parser_data {int dummy; } ;
struct mtd_info {unsigned long size; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct mtd_partition* FUNC_0 (int,int ) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (struct mtd_info*,unsigned long,int *) ;
 int FUNC_3 (struct mtd_info*,unsigned long,int,size_t*,void*) ;

__attribute__((used)) static int FUNC_4(struct mtd_info *VAR_11,
    const struct mtd_partition **VAR_12,
    struct mtd_part_parser_data *VAR_13)
{
 struct mtd_partition *VAR_14;
 uint32_t VAR_15;
 unsigned long VAR_16, VAR_17, VAR_18;
 size_t VAR_19;
 int VAR_20 = 0;

 for (VAR_16 = 0; VAR_16 < VAR_11->size;
      VAR_16 += VAR_0) {
  VAR_20 = FUNC_2(VAR_11, VAR_16, ((void*)0));
  if (!VAR_20)
   break;
 }

 if (VAR_20)
  return VAR_20;

 if (VAR_16 >= VAR_11->size)
  return -VAR_5;

 VAR_20 = FUNC_3(VAR_11, VAR_16 - VAR_1, 4, &VAR_19,
   (void *)&VAR_15);
 if (VAR_20)
  return VAR_20;

 if (VAR_19 != 4)
  return -VAR_6;

 VAR_18 = FUNC_1(VAR_15);

 if (VAR_18 > (VAR_16 - VAR_3))
  return -VAR_5;

 if (VAR_18 < (VAR_16 - VAR_2))
  return -VAR_5;





 VAR_17 = VAR_11->size - VAR_16 - VAR_1;

 VAR_14 = FUNC_0(VAR_4 * sizeof(*VAR_14), VAR_8);
 if (!VAR_14)
  return -VAR_7;

 VAR_14[0].name = VAR_9;
 VAR_14[0].offset = 0;
 VAR_14[0].size = VAR_18;

 VAR_14[1].name = VAR_10;
 VAR_14[1].offset = VAR_16;
 VAR_14[1].size = VAR_17;

 *VAR_12 = VAR_14;
 return VAR_4;
}
