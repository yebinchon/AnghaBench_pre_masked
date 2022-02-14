
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int invalid_io; } ;
struct zram {TYPE_2__ stats; } ;
struct page {int dummy; } ;
struct block_device {TYPE_1__* bd_disk; } ;
struct bio_vec {scalar_t__ bv_offset; int bv_len; struct page* bv_page; } ;
typedef int sector_t ;
struct TYPE_3__ {struct zram* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct page*,int ,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct zram*,int,int ) ;
 int FUNC_7 (struct zram*,struct bio_vec*,int,int,unsigned int,int *) ;

__attribute__((used)) static int FUNC_8(struct block_device *VAR_6, sector_t VAR_7,
         struct page *VAR_8, unsigned int VAR_9)
{
 int VAR_10, VAR_11;
 u32 VAR_12;
 struct zram *VAR_13;
 struct bio_vec VAR_14;

 if (FUNC_0(VAR_8))
  return -VAR_1;
 VAR_13 = VAR_6->bd_disk->private_data;

 if (!FUNC_6(VAR_13, VAR_7, VAR_2)) {
  FUNC_2(&VAR_13->stats.invalid_io);
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_12 = VAR_7 >> VAR_4;
 VAR_10 = (VAR_7 & (VAR_3 - 1)) << VAR_5;

 VAR_14.bv_page = VAR_8;
 VAR_14.bv_len = VAR_2;
 VAR_14.bv_offset = 0;

 VAR_11 = FUNC_7(VAR_13, &VAR_14, VAR_12, VAR_10, VAR_9, ((void*)0));
out:
 if (FUNC_5(VAR_11 < 0))
  return VAR_11;

 switch (VAR_11) {
 case 0:
  FUNC_4(VAR_8, FUNC_3(VAR_9), 0);
  break;
 case 1:
  VAR_11 = 0;
  break;
 default:
  FUNC_1(1);
 }
 return VAR_11;
}
