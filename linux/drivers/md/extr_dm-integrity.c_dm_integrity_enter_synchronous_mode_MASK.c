
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_integrity_c {char mode; int synchronous_mode; int commit_wq; int bitmap_flush_work; scalar_t__ bitmap_flush_interval; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_5(struct dm_integrity_c *VAR_0)
{
 FUNC_0("dm_integrity_enter_synchronous_mode\n");

 if (VAR_0->mode == 'B') {
  VAR_0->bitmap_flush_interval = FUNC_3(10) + 1;
  VAR_0->synchronous_mode = 1;

  FUNC_1(&VAR_0->bitmap_flush_work);
  FUNC_4(VAR_0->commit_wq, &VAR_0->bitmap_flush_work, 0);
  FUNC_2(VAR_0->commit_wq);
 }
}
