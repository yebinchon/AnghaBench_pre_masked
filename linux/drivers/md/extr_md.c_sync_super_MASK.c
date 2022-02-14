
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mddev {size_t major_version; int (* sync_super ) (struct mddev*,struct md_rdev*) ;} ;
struct md_rdev {int dummy; } ;
struct TYPE_3__ {int (* sync_super ) (struct mddev*,struct md_rdev*) ;} ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mddev*,struct md_rdev*) ;
 int FUNC_3 (struct mddev*,struct md_rdev*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_4(struct mddev *VAR_1, struct md_rdev *VAR_2)
{
 if (VAR_1->sync_super) {
  VAR_1->sync_super(VAR_1, VAR_2);
  return;
 }

 FUNC_1(VAR_1->major_version >= FUNC_0(VAR_0));

 VAR_0[VAR_1->major_version].sync_super(VAR_1, VAR_2);
}
