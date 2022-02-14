
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grant {int gref; } ;
struct blkfront_ring_info {struct blkfront_info* dev_info; } ;
struct blkfront_info {TYPE_1__* xbdev; scalar_t__ feature_persistent; } ;
typedef int grant_ref_t ;
struct TYPE_2__ {int otherend_id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct grant* FUNC_1 (struct blkfront_ring_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,unsigned long,int ) ;
 int FUNC_4 (struct grant*,struct blkfront_info*) ;

__attribute__((used)) static struct grant *FUNC_5(grant_ref_t *VAR_2,
          unsigned long VAR_3,
          struct blkfront_ring_info *VAR_4)
{
 struct grant *VAR_5 = FUNC_1(VAR_4);
 struct blkfront_info *VAR_6 = VAR_4->dev_info;

 if (VAR_5->gref != VAR_1)
  return VAR_5;


 VAR_5->gref = FUNC_2(VAR_2);
 FUNC_0(VAR_5->gref == -VAR_0);
 if (VAR_6->feature_persistent)
  FUNC_4(VAR_5, VAR_6);
 else {

  FUNC_3(VAR_5->gref,
      VAR_6->xbdev->otherend_id,
      VAR_3, 0);
 }

 return VAR_5;
}
