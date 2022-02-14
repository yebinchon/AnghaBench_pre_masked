
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct dmz_metadata {TYPE_2__* dev; } ;
struct TYPE_3__ {int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef int sector_t ;
struct TYPE_4__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bio*,struct page*,int ,int ) ;
 struct bio* FUNC_1 (int ,int) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,int ) ;
 int FUNC_4 (struct bio*,int,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct bio*) ;

__attribute__((used)) static int FUNC_8(struct dmz_metadata *VAR_7, int VAR_8, sector_t VAR_9,
     struct page *VAR_10)
{
 struct bio *VAR_11;
 int VAR_12;

 if (FUNC_5(VAR_7->dev))
  return -VAR_1;

 VAR_11 = FUNC_1(VAR_3, 1);
 if (!VAR_11)
  return -VAR_2;

 VAR_11->bi_iter.bi_sector = FUNC_6(VAR_9);
 FUNC_3(VAR_11, VAR_7->dev->bdev);
 FUNC_4(VAR_11, VAR_8, VAR_6 | VAR_4 | VAR_5);
 FUNC_0(VAR_11, VAR_10, VAR_0, 0);
 VAR_12 = FUNC_7(VAR_11);
 FUNC_2(VAR_11);

 return VAR_12;
}
