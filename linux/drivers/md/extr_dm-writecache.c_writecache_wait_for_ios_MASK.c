
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_writecache {int * bio_in_progress; int * bio_in_progress_wait; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct dm_writecache *VAR_0, int VAR_1)
{
 FUNC_1(VAR_0->bio_in_progress_wait[VAR_1],
     !FUNC_0(&VAR_0->bio_in_progress[VAR_1]));
}
