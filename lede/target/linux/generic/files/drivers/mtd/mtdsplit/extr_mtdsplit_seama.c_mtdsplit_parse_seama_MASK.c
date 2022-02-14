
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seama_header {int metasize; int size; int magic; } ;
struct mtd_partition {int offset; size_t size; int name; } ;
struct mtd_part_parser_data {int dummy; } ;
struct mtd_info {size_t size; } ;
typedef int hdr ;
typedef enum mtdsplit_part_type { ____Placeholder_mtdsplit_part_type } mtdsplit_part_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 struct mtd_partition* FUNC_2 (int,int ) ;
 int FUNC_3 (struct mtd_info*,size_t,int*) ;
 int FUNC_4 (struct mtd_info*,int ,size_t,size_t*,int*) ;
 int FUNC_5 (struct mtd_info*,int ,size_t,size_t*,void*) ;

__attribute__((used)) static int FUNC_6(struct mtd_info *VAR_11,
    const struct mtd_partition **VAR_12,
    struct mtd_part_parser_data *VAR_13)
{
 struct seama_header VAR_14;
 size_t VAR_15, VAR_16, VAR_17;
 size_t VAR_18;
 struct mtd_partition *VAR_19;
 enum mtdsplit_part_type VAR_20;
 int VAR_21;

 VAR_15 = sizeof(VAR_14);
 VAR_21 = FUNC_5(VAR_11, 0, VAR_15, &VAR_16, (void *) &VAR_14);
 if (VAR_21)
  return VAR_21;

 if (VAR_16 != VAR_15)
  return -VAR_1;


 if (FUNC_1(VAR_14.magic) != VAR_7)
  return -VAR_0;

 VAR_17 = VAR_15 + FUNC_1(VAR_14.size) +
     FUNC_0(VAR_14.metasize);
 if (VAR_17 > VAR_11->size)
  return -VAR_0;


 VAR_21 = FUNC_3(VAR_11, VAR_17, &VAR_20);
 if (!VAR_21) {
  VAR_18 = VAR_17;
 } else {






  VAR_21 = FUNC_4(VAR_11, VAR_8,
        VAR_11->size, &VAR_18, &VAR_20);
  if (VAR_21)
   return VAR_21;
 }

 VAR_19 = FUNC_2(VAR_9 * sizeof(*VAR_19), VAR_3);
 if (!VAR_19)
  return -VAR_2;

 VAR_19[0].name = VAR_4;
 VAR_19[0].offset = sizeof VAR_14 + FUNC_0(VAR_14.metasize);
 VAR_19[0].size = VAR_18 - VAR_19[0].offset;

 if (VAR_20 == VAR_5)
  VAR_19[1].name = VAR_10;
 else
  VAR_19[1].name = VAR_6;
 VAR_19[1].offset = VAR_18;
 VAR_19[1].size = VAR_11->size - VAR_18;

 *VAR_12 = VAR_19;
 return VAR_9;
}
