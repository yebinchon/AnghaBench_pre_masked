
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmz_metadata {TYPE_1__* dev; } ;
struct dm_zone {int wp_block; int flags; } ;
struct blk_zone {scalar_t__ cond; scalar_t__ start; scalar_t__ wp; } ;
struct TYPE_2__ {int bdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,struct blk_zone*,unsigned int*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int FUNC_3 (struct dmz_metadata*,struct dm_zone*) ;
 scalar_t__ FUNC_4 (struct dm_zone*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct dmz_metadata*,struct dm_zone*) ;
 int FUNC_7 (unsigned int) ;
 unsigned int FUNC_8 () ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct dmz_metadata *VAR_5, struct dm_zone *VAR_6)
{
 unsigned int VAR_7 = 1;
 unsigned int VAR_8;
 struct blk_zone VAR_9;
 int VAR_10;







 VAR_8 = FUNC_8();
 VAR_10 = FUNC_0(VAR_5->dev->bdev, FUNC_6(VAR_5, VAR_6),
      &VAR_9, &VAR_7);
 FUNC_7(VAR_8);
 if (!VAR_7)
  VAR_10 = -VAR_4;
 if (VAR_10) {
  FUNC_2(VAR_5->dev, "Get zone %u report failed",
       FUNC_3(VAR_5, VAR_6));
  return VAR_10;
 }

 FUNC_1(VAR_2, &VAR_6->flags);
 FUNC_1(VAR_3, &VAR_6->flags);
 if (VAR_9.cond == VAR_0)
  FUNC_9(VAR_2, &VAR_6->flags);
 else if (VAR_9.cond == VAR_1)
  FUNC_9(VAR_3, &VAR_6->flags);

 if (FUNC_4(VAR_6))
  VAR_6->wp_block = FUNC_5(VAR_9.wp - VAR_9.start);
 else
  VAR_6->wp_block = 0;

 return 0;
}
