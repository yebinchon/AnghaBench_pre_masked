
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int recovery; } ;
struct raid_set {TYPE_1__ md; int runtime_flags; } ;
struct dm_target {struct raid_set* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct dm_target *VAR_2)
{
 struct raid_set *VAR_3 = VAR_2->private;

 if (!FUNC_4(VAR_1, &VAR_3->runtime_flags)) {

  if (!FUNC_5(VAR_0, &VAR_3->md.recovery))
   FUNC_0(&VAR_3->md);

  FUNC_1(&VAR_3->md);
  FUNC_2(&VAR_3->md);
  FUNC_3(&VAR_3->md);
 }
}
