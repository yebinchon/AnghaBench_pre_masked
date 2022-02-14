
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int block_size; int disk_offset; int block_count; } ;
union label_t {TYPE_1__ cms; } ;
typedef int tmp ;
struct parsed_partitions {int pp_buf; } ;
struct hd_geometry {int dummy; } ;
typedef int sector_t ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct parsed_partitions*,int,int,int) ;
 int FUNC_1 (char*,int,char*,char*) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct parsed_partitions *VAR_1,
    struct hd_geometry *VAR_2,
    int VAR_3,
    char VAR_4[],
    union label_t *VAR_5,
    sector_t VAR_6)
{
 loff_t VAR_7, VAR_8;
 char VAR_9[64];
 int VAR_10;




 VAR_3 = VAR_5->cms.block_size;
 VAR_10 = VAR_3 >> 9;
 if (VAR_5->cms.disk_offset != 0) {
  FUNC_1(VAR_9, sizeof(VAR_9), "CMS1/%8s(MDSK):", VAR_4);
  FUNC_2(VAR_1->pp_buf, VAR_9, VAR_0);

  VAR_7 = VAR_5->cms.disk_offset * VAR_10;
  VAR_8 = (VAR_5->cms.block_count - 1) * VAR_10;
 } else {
  FUNC_1(VAR_9, sizeof(VAR_9), "CMS1/%8s:", VAR_4);
  FUNC_2(VAR_1->pp_buf, VAR_9, VAR_0);







  if (VAR_6 == 1)
   VAR_7 = 2 * VAR_10;
  else
   VAR_7 = VAR_6 + VAR_10;
  VAR_8 = VAR_5->cms.block_count * VAR_10;
 }

 FUNC_0(VAR_1, 1, VAR_7, VAR_8-VAR_7);
 FUNC_2(VAR_1->pp_buf, "\n", VAR_0);
 return 1;
}
