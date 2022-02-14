
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {struct clone* private; } ;
struct clone {int ios_in_flight; } ;
struct bio {int dummy; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct dm_target *VAR_1, struct bio *VAR_2, blk_status_t *VAR_3)
{
 struct clone *VAR_4 = VAR_1->private;

 FUNC_0(&VAR_4->ios_in_flight);

 return VAR_0;
}
