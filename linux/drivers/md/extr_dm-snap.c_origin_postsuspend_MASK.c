
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {struct dm_origin* private; } ;
struct dm_origin {int dummy; } ;


 int FUNC_0 (struct dm_origin*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dm_target *VAR_1)
{
 struct dm_origin *VAR_2 = VAR_1->private;

 FUNC_1(&VAR_0);
 FUNC_0(VAR_2);
 FUNC_2(&VAR_0);
}
