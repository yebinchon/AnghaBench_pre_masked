
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cached_dir {TYPE_1__* untracked; scalar_t__ fdir; } ;
struct TYPE_2__ {int valid; int recurse; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct cached_dir *VAR_0)
{
 if (VAR_0->fdir)
  FUNC_0(VAR_0->fdir);




 if (VAR_0->untracked) {
  VAR_0->untracked->valid = 1;
  VAR_0->untracked->recurse = 1;
 }
}
