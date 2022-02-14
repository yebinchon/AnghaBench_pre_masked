
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_zone {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dm_zone*) ;
 int FUNC_1 (int ,int *) ;

int FUNC_2(struct dm_zone *VAR_1)
{

 if (FUNC_0(VAR_1))
  return 0;

 return !FUNC_1(VAR_0, &VAR_1->flags);
}
