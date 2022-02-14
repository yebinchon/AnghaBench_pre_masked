
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct metadata_stats {int snap; int era; scalar_t__ total; scalar_t__ used; } ;
struct era {int sectors_per_block; TYPE_4__* origin_dev; TYPE_2__* metadata_dev; } ;
struct dm_target {struct era* private; } ;
typedef int status_type_t ;
typedef int ssize_t ;
struct TYPE_8__ {TYPE_3__* bdev; } ;
struct TYPE_7__ {int bd_dev; } ;
struct TYPE_6__ {TYPE_1__* bdev; } ;
struct TYPE_5__ {int bd_dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct era*,int ,struct metadata_stats*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct dm_target *VAR_5, status_type_t VAR_6,
         unsigned VAR_7, char *VAR_8, unsigned VAR_9)
{
 int VAR_10;
 struct era *VAR_11 = VAR_5->private;
 ssize_t VAR_12 = 0;
 struct metadata_stats VAR_13;
 char VAR_14[VAR_0];

 switch (VAR_6) {
 case 129:
  VAR_10 = FUNC_2(VAR_11, VAR_4, &VAR_13);
  if (VAR_10)
   goto err;

  FUNC_0("%u %llu/%llu %u",
         (unsigned) (VAR_1 >> VAR_2),
         (unsigned long long) VAR_13.used,
         (unsigned long long) VAR_13.total,
         (unsigned) VAR_13.era);

  if (VAR_13.snap != VAR_3)
   FUNC_0(" %llu", VAR_13.snap);
  else
   FUNC_0(" -");
  break;

 case 128:
  FUNC_1(VAR_14, VAR_11->metadata_dev->bdev->bd_dev);
  FUNC_0("%s ", VAR_14);
  FUNC_1(VAR_14, VAR_11->origin_dev->bdev->bd_dev);
  FUNC_0("%s %u", VAR_14, VAR_11->sectors_per_block);
  break;
 }

 return;

err:
 FUNC_0("Error");
}
