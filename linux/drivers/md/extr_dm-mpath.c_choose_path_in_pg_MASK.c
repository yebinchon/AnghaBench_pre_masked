
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* type; } ;
struct priority_group {TYPE_2__ ps; } ;
struct pgpath {int dummy; } ;
struct multipath {int lock; struct pgpath* current_pgpath; int current_pg; } ;
struct dm_path {int dummy; } ;
struct TYPE_3__ {struct dm_path* (* select_path ) (TYPE_2__*,size_t) ;} ;


 int VAR_0 ;
 struct pgpath* FUNC_0 (int ) ;
 struct priority_group* FUNC_1 (int ) ;
 int FUNC_2 (struct multipath*,struct priority_group*) ;
 struct pgpath* FUNC_3 (struct dm_path*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct dm_path* FUNC_6 (TYPE_2__*,size_t) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static struct pgpath *FUNC_8(struct multipath *VAR_1,
     struct priority_group *VAR_2,
     size_t VAR_3)
{
 unsigned long VAR_4;
 struct dm_path *VAR_5;
 struct pgpath *VAR_6;

 VAR_5 = VAR_2->ps.type->select_path(&VAR_2->ps, VAR_3);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_3(VAR_5);

 if (FUNC_7(FUNC_1(VAR_1->current_pg) != VAR_2)) {

  FUNC_4(&VAR_1->lock, VAR_4);
  VAR_1->current_pgpath = VAR_6;
  FUNC_2(VAR_1, VAR_2);
  FUNC_5(&VAR_1->lock, VAR_4);
 }

 return VAR_6;
}
