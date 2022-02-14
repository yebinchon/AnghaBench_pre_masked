
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {int lock; int retry_on_resume_list; } ;
struct dm_thin_endio_hook {struct thin_c* tc; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int *,struct bio*) ;
 struct dm_thin_endio_hook* FUNC_1 (struct bio*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct bio *VAR_0)
{
 struct dm_thin_endio_hook *VAR_1 = FUNC_1(VAR_0, sizeof(struct dm_thin_endio_hook));
 struct thin_c *VAR_2 = VAR_1->tc;
 unsigned long VAR_3;

 FUNC_2(&VAR_2->lock, VAR_3);
 FUNC_0(&VAR_2->retry_on_resume_list, VAR_0);
 FUNC_3(&VAR_2->lock, VAR_3);
}
