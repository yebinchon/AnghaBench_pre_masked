
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct md_rdev {TYPE_3__* mddev; TYPE_2__* bdev; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {TYPE_1__* bd_disk; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*,int ,char const*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static inline bool FUNC_3(struct md_rdev *VAR_2, const char *VAR_3)
{
 int VAR_4 = VAR_2->bdev->bd_disk->flags;

 if (!(VAR_4 & VAR_0)) {
  if (!FUNC_2(VAR_1, &VAR_2->mddev->flags))
   FUNC_1("md: %s: %s array has a missing/failed member\n",
    FUNC_0(VAR_2->mddev), VAR_3);
  return 1;
 }
 return 0;
}
