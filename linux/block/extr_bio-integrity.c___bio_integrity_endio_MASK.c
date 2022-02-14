
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blk_integrity {TYPE_1__* profile; } ;
struct bio_integrity_payload {int bip_flags; int bip_work; } ;
struct bio {int bi_status; int bi_disk; } ;
struct TYPE_2__ {scalar_t__ verify_fn; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_1 ;
 struct bio_integrity_payload* FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct bio*) ;
 struct blk_integrity* FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int ,int *) ;

bool FUNC_6(struct bio *VAR_4)
{
 struct blk_integrity *VAR_5 = FUNC_4(VAR_4->bi_disk);
 struct bio_integrity_payload *VAR_6 = FUNC_1(VAR_4);

 if (FUNC_3(VAR_4) == VAR_1 && !VAR_4->bi_status &&
     (VAR_6->bip_flags & VAR_0) && VAR_5->profile->verify_fn) {
  FUNC_0(&VAR_6->bip_work, VAR_2);
  FUNC_5(VAR_3, &VAR_6->bip_work);
  return 0;
 }

 FUNC_2(VAR_4);
 return 1;
}
