
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sectors_dirty_init {int start; int op; int inode; scalar_t__ count; } ;
struct bcache_device {int c; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,int ,int *,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;

void FUNC_6(struct bcache_device *VAR_3)
{
 struct sectors_dirty_init VAR_4;
 int VAR_5;

 FUNC_2(&VAR_4.op, -1);
 VAR_4.inode = VAR_3->id;
 VAR_4.count = 0;
 VAR_4.start = FUNC_0(VAR_4.inode, 0, 0);

 do {
  VAR_5 = FUNC_1(&VAR_4.op, VAR_3->c, &VAR_4.start,
      VAR_2, 0);
  if (VAR_5 == -VAR_0)
   FUNC_5(
    FUNC_3(VAR_1));
  else if (VAR_5 < 0) {
   FUNC_4("sectors dirty init failed, ret=%d!", VAR_5);
   break;
  }
 } while (VAR_5 == -VAR_0);
}
