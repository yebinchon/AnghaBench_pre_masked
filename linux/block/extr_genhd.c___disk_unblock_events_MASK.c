
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {struct disk_events* ev; } ;
struct disk_events {scalar_t__ block; int lock; int dwork; } ;


 scalar_t__ FUNC_0 (int) ;
 unsigned long FUNC_1 (struct gendisk*) ;
 int FUNC_2 (int ,int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct gendisk *VAR_1, bool VAR_2)
{
 struct disk_events *VAR_3 = VAR_1->ev;
 unsigned long VAR_4;
 unsigned long VAR_5;

 FUNC_3(&VAR_3->lock, VAR_5);

 if (FUNC_0(VAR_3->block <= 0))
  goto out_unlock;

 if (--VAR_3->block)
  goto out_unlock;

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_2)
  FUNC_2(VAR_0,
    &VAR_3->dwork, 0);
 else if (VAR_4)
  FUNC_2(VAR_0,
    &VAR_3->dwork, VAR_4);
out_unlock:
 FUNC_4(&VAR_3->lock, VAR_5);
}
