
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_partition {size_t offset; size_t size; int name; } ;
struct mtd_part_parser_data {int dummy; } ;
struct mtd_info {size_t size; size_t erasesize; int name; } ;
struct fdt_header {int totalsize; int magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t FUNC_0 (int ) ;
 struct mtd_partition* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mtd_info*,size_t,size_t,size_t*,int *) ;
 int FUNC_3 (struct mtd_info*,int ,size_t,size_t*,void*) ;
 size_t FUNC_4 (size_t,struct mtd_info*) ;
 int FUNC_5 (char*,int ,unsigned long long) ;
 int FUNC_6 (char*,int ,...) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static int
FUNC_8(struct mtd_info *VAR_7,
     const struct mtd_partition **VAR_8,
            struct mtd_part_parser_data *VAR_9)
{
 struct fdt_header VAR_10;
 size_t VAR_11, VAR_12;
 size_t VAR_13;
 size_t VAR_14, VAR_15;
 size_t VAR_16, VAR_17;
 struct mtd_partition *VAR_18;
 int VAR_19;

 VAR_11 = sizeof(struct fdt_header);


 for(VAR_13 = 0; VAR_13 < VAR_7->size; VAR_13 += VAR_7->erasesize) {
  VAR_19 = FUNC_3(VAR_7, 0, VAR_11, &VAR_12, (void*) &VAR_10);
  if (VAR_19) {
   FUNC_6("read error in \"%s\" at offset 0x%llx\n",
          VAR_7->name, (unsigned long long) VAR_13);
   return VAR_19;
  }

  if (VAR_12 != VAR_11) {
   FUNC_6("short read in \"%s\"\n", VAR_7->name);
   return -VAR_0;
  }


  if (FUNC_0(VAR_10.magic) != VAR_5) {
   FUNC_5("no valid FIT image found in \"%s\" at offset %llx\n",
     VAR_7->name, (unsigned long long) VAR_13);
   continue;
  }


  break;
 }

 VAR_14 = VAR_13;
 VAR_15 = FUNC_0(VAR_10.totalsize);

 if (VAR_15 == 0) {
  FUNC_6("FIT image in \"%s\" at offset %llx has null size\n",
         VAR_7->name, (unsigned long long) VAR_14);
  return -VAR_1;
 }


 VAR_19 = FUNC_2(VAR_7, VAR_14 + VAR_15, VAR_7->size,
       &VAR_16, ((void*)0));
 if (VAR_19) {
  FUNC_7("no rootfs found after FIT image in \"%s\"\n",
   VAR_7->name);
  return VAR_19;
 }

 VAR_17 = VAR_7->size - VAR_16;

 VAR_18 = FUNC_1(2 * sizeof(*VAR_18), VAR_3);
 if (!VAR_18)
  return -VAR_2;

 VAR_18[0].name = VAR_4;
 VAR_18[0].offset = VAR_14;
 VAR_18[0].size = FUNC_4(VAR_15, VAR_7) + VAR_7->erasesize;

 VAR_18[1].name = VAR_6;
 VAR_18[1].offset = VAR_16;
 VAR_18[1].size = VAR_17;

 *VAR_8 = VAR_18;
 return 2;
}
