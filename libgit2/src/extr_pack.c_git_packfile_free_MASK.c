
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct git_pack_file {TYPE_1__ bases; int lock; struct git_pack_file* bad_object_sha1; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct git_pack_file*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct git_pack_file*,int) ;
 int FUNC_4 (struct git_pack_file*) ;

void FUNC_5(struct git_pack_file *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(&VAR_0->bases);

 FUNC_3(VAR_0, 0);

 FUNC_4(VAR_0);

 FUNC_1(VAR_0->bad_object_sha1);

 FUNC_2(&VAR_0->lock);
 FUNC_2(&VAR_0->bases.lock);
 FUNC_1(VAR_0);
}
