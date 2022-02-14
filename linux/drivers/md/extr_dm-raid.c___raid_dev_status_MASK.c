
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; } ;
struct raid_set {int runtime_flags; TYPE_1__ journal_dev; } ;
struct md_rdev {int flags; int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static const char *FUNC_1(struct raid_set *VAR_6, struct md_rdev *VAR_7)
{
 if (!VAR_7->bdev)
  return "-";
 else if (FUNC_0(VAR_0, &VAR_7->flags))
  return "D";
 else if (FUNC_0(VAR_2, &VAR_7->flags))
  return (VAR_6->journal_dev.mode == VAR_3) ? "A" : "a";
 else if (FUNC_0(VAR_5, &VAR_6->runtime_flags) ||
   (!FUNC_0(VAR_4, &VAR_6->runtime_flags) &&
    !FUNC_0(VAR_1, &VAR_7->flags)))
  return "a";
 else
  return "A";
}
