
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union label_t {scalar_t__ format; int label_block; } ;
struct parsed_partitions {int pp_buf; struct block_device* bdev; } ;
struct hd_geometry {scalar_t__ format; int label_block; } ;
struct block_device {int bd_inode; } ;
typedef int sector_t ;
typedef int loff_t ;
typedef union label_t dasd_information2_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct block_device*) ;
 int FUNC_1 (struct parsed_partitions*,union label_t*,int,char*,union label_t*,int ) ;
 scalar_t__ FUNC_2 (struct parsed_partitions*,union label_t*,union label_t*,int,int *,char*,char*,union label_t*) ;
 int FUNC_3 (struct parsed_partitions*,union label_t*,int,char*,union label_t*,int ,int,union label_t*) ;
 int FUNC_4 (struct parsed_partitions*,union label_t*,int,char*,union label_t*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct block_device*,int ,unsigned long) ;
 int FUNC_7 (union label_t*) ;
 union label_t* FUNC_8 (int,int ) ;
 int FUNC_9 (struct parsed_partitions*,int,int,int) ;
 int FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (char*,char*,int) ;

int FUNC_12(struct parsed_partitions *VAR_5)
{
 struct block_device *VAR_6 = VAR_5->bdev;
 int VAR_7, VAR_8;
 loff_t VAR_9, VAR_10, VAR_11;
 dasd_information2_t *VAR_12;
 struct hd_geometry *VAR_13;
 char VAR_14[5] = {0,};
 char VAR_15[7] = {0,};
 sector_t VAR_16;
 union label_t *VAR_17;

 VAR_8 = 0;
 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7 <= 0)
  goto out_exit;
 VAR_9 = FUNC_5(VAR_6->bd_inode);
 if (VAR_9 == 0)
  goto out_exit;
 VAR_12 = FUNC_8(sizeof(dasd_information2_t), VAR_2);
 if (VAR_12 == ((void*)0))
  goto out_exit;
 VAR_13 = FUNC_8(sizeof(struct hd_geometry), VAR_2);
 if (VAR_13 == ((void*)0))
  goto out_nogeo;
 VAR_17 = FUNC_8(sizeof(union label_t), VAR_2);
 if (VAR_17 == ((void*)0))
  goto out_nolab;
 if (FUNC_6(VAR_6, VAR_3, (unsigned long)VAR_13) != 0)
  goto out_freeall;
 if (FUNC_6(VAR_6, VAR_0, (unsigned long)VAR_12) != 0) {
  FUNC_7(VAR_12);
  VAR_12 = ((void*)0);
 }

 if (FUNC_2(VAR_5, VAR_12, VAR_13, VAR_7, &VAR_16, VAR_15, VAR_14,
         VAR_17)) {
  if (!FUNC_11(VAR_14, "VOL1", 4)) {
   VAR_8 = FUNC_4(VAR_5, VAR_13, VAR_7, VAR_15,
         VAR_17);
  } else if (!FUNC_11(VAR_14, "LNX1", 4)) {
   VAR_8 = FUNC_3(VAR_5, VAR_13, VAR_7, VAR_15,
         VAR_17, VAR_16, VAR_9,
         VAR_12);
  } else if (!FUNC_11(VAR_14, "CMS1", 4)) {
   VAR_8 = FUNC_1(VAR_5, VAR_13, VAR_7, VAR_15,
         VAR_17, VAR_16);
  }
 } else if (VAR_12) {







  VAR_8 = 1;
  if (VAR_12->format == VAR_1) {
   FUNC_10(VAR_5->pp_buf, "(nonl)", VAR_4);
   VAR_11 = VAR_9 >> 9;
   VAR_10 = (VAR_12->label_block + 1) * (VAR_7 >> 9);
   FUNC_9(VAR_5, 1, VAR_10, VAR_11-VAR_10);
   FUNC_10(VAR_5->pp_buf, "\n", VAR_4);
  }
 } else
  VAR_8 = 0;

out_freeall:
 FUNC_7(VAR_17);
out_nolab:
 FUNC_7(VAR_13);
out_nogeo:
 FUNC_7(VAR_12);
out_exit:
 return VAR_8;
}
