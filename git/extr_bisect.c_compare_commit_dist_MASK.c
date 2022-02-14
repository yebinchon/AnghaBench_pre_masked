
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct commit_dist {scalar_t__ distance; TYPE_2__* commit; } ;
struct TYPE_3__ {int oid; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 struct commit_dist *VAR_2, *VAR_3;

 VAR_2 = (struct commit_dist *)VAR_0;
 VAR_3 = (struct commit_dist *)VAR_1;
 if (VAR_2->distance != VAR_3->distance)
  return VAR_3->distance - VAR_2->distance;
 return FUNC_0(&VAR_2->commit->object.oid, &VAR_3->commit->object.oid);
}
