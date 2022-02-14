
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct dm_pr {int fail_early; scalar_t__ flags; scalar_t__ new_key; scalar_t__ old_key; } ;
struct block_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct block_device*,int ,struct dm_pr*) ;

__attribute__((used)) static int FUNC_1(struct block_device *VAR_1, u64 VAR_2, u64 VAR_3,
     u32 VAR_4)
{
 struct dm_pr VAR_5 = {
  .old_key = VAR_2,
  .new_key = VAR_3,
  .flags = VAR_4,
  .fail_early = 1,
 };
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_0, &VAR_5);
 if (VAR_6 && VAR_3) {

  VAR_5.old_key = VAR_3;
  VAR_5.new_key = 0;
  VAR_5.flags = 0;
  VAR_5.fail_early = 0;
  FUNC_0(VAR_1, VAR_0, &VAR_5);
 }

 return VAR_6;
}
