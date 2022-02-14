
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request {int dummy; } ;
struct TYPE_4__ {unsigned long id; scalar_t__ flag; scalar_t__ sector_number; int nr_sectors; } ;
struct TYPE_5__ {TYPE_1__ discard; } ;
struct blkif_request {TYPE_2__ u; int operation; } ;
struct blkfront_ring_info {TYPE_3__* shadow; struct blkfront_info* dev_info; } ;
struct blkfront_info {scalar_t__ feature_secdiscard; } ;
typedef scalar_t__ blkif_sector_t ;
struct TYPE_6__ {struct blkif_request req; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 unsigned long FUNC_2 (struct blkfront_ring_info*,struct request*,struct blkif_request**) ;
 scalar_t__ FUNC_3 (struct request*) ;

__attribute__((used)) static int FUNC_4(struct request *VAR_3, struct blkfront_ring_info *VAR_4)
{
 struct blkfront_info *VAR_5 = VAR_4->dev_info;
 struct blkif_request *VAR_6;
 unsigned long VAR_7;


 VAR_7 = FUNC_2(VAR_4, VAR_3, &VAR_6);

 VAR_6->operation = VAR_1;
 VAR_6->u.discard.nr_sectors = FUNC_1(VAR_3);
 VAR_6->u.discard.id = VAR_7;
 VAR_6->u.discard.sector_number = (blkif_sector_t)FUNC_0(VAR_3);
 if (FUNC_3(VAR_3) == VAR_2 && VAR_5->feature_secdiscard)
  VAR_6->u.discard.flag = VAR_0;
 else
  VAR_6->u.discard.flag = 0;


 VAR_4->shadow[VAR_7].req = *VAR_6;

 return 0;
}
