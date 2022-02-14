
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_writecache {int flush_list; int flush_thread; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int *,struct bio*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct dm_writecache *VAR_0, struct bio *VAR_1)
{
 if (FUNC_1(&VAR_0->flush_list))
  FUNC_2(VAR_0->flush_thread);
 FUNC_0(&VAR_0->flush_list, VAR_1);
}
