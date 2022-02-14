
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; scalar_t__ sector; int offset; } ;
struct md_rdev {scalar_t__ data_offset; scalar_t__ sectors; int sb_size; TYPE_1__ ppl; int bdev; TYPE_2__* mddev; } ;
struct TYPE_4__ {int external; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct md_rdev *VAR_5)
{
 char VAR_6[VAR_0];
 int VAR_7;
 int VAR_8;







 VAR_7 = VAR_5->ppl.size - (VAR_3 >> 9);

 if (VAR_7 > 0)
  VAR_7 = FUNC_3(VAR_7, VAR_4);

 if (VAR_7 <= 0) {
  FUNC_2("md/raid:%s: PPL space too small on %s\n",
   FUNC_1(VAR_5->mddev), FUNC_0(VAR_5->bdev, VAR_6));
  return -VAR_2;
 }

 VAR_8 = VAR_7 + (VAR_3 >> 9);

 if ((VAR_5->ppl.sector < VAR_5->data_offset &&
      VAR_5->ppl.sector + VAR_8 > VAR_5->data_offset) ||
     (VAR_5->ppl.sector >= VAR_5->data_offset &&
      VAR_5->data_offset + VAR_5->sectors > VAR_5->ppl.sector)) {
  FUNC_2("md/raid:%s: PPL space overlaps with data on %s\n",
   FUNC_1(VAR_5->mddev), FUNC_0(VAR_5->bdev, VAR_6));
  return -VAR_1;
 }

 if (!VAR_5->mddev->external &&
     ((VAR_5->ppl.offset > 0 && VAR_5->ppl.offset < (VAR_5->sb_size >> 9)) ||
      (VAR_5->ppl.offset <= 0 && VAR_5->ppl.offset + VAR_8 > 0))) {
  FUNC_2("md/raid:%s: PPL space overlaps with superblock on %s\n",
   FUNC_1(VAR_5->mddev), FUNC_0(VAR_5->bdev, VAR_6));
  return -VAR_1;
 }

 VAR_5->ppl.size = VAR_8;

 return 0;
}
