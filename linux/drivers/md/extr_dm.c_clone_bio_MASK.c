
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {unsigned int bi_sector; int bi_size; } ;
struct bio {TYPE_3__ bi_iter; } ;
struct dm_target_io {TYPE_2__* ti; TYPE_1__* io; struct bio clone; } ;
typedef unsigned int sector_t ;
struct TYPE_9__ {int name; } ;
struct TYPE_7__ {TYPE_4__* type; } ;
struct TYPE_6__ {int md; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bio*,struct bio*) ;
 int FUNC_2 (struct bio*,int ) ;
 scalar_t__ FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*,struct bio*,int ) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (unsigned int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct dm_target_io *VAR_2, struct bio *VAR_3,
       sector_t VAR_4, unsigned VAR_5)
{
 struct bio *VAR_6 = &VAR_2->clone;

 FUNC_1(VAR_6, VAR_3);

 if (FUNC_3(VAR_3)) {
  int VAR_7;

  if (FUNC_10(!FUNC_7(VAR_2->ti->type) &&
        !FUNC_8(VAR_2->ti->type))) {
   FUNC_0("%s: the target %s doesn't support integrity data.",
    FUNC_6(VAR_2->io->md),
    VAR_2->ti->type->name);
   return -VAR_0;
  }

  VAR_7 = FUNC_4(VAR_6, VAR_3, VAR_1);
  if (VAR_7 < 0)
   return VAR_7;
 }

 FUNC_2(VAR_6, FUNC_9(VAR_4 - VAR_6->bi_iter.bi_sector));
 VAR_6->bi_iter.bi_size = FUNC_9(VAR_5);

 if (FUNC_3(VAR_3))
  FUNC_5(VAR_6);

 return 0;
}
