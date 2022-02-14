
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batcher {int commit_scheduled; int lock; int bios; int work_items; } ;


 int FUNC_0 (struct batcher*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct batcher *VAR_0)
{
 bool VAR_1;
 unsigned long VAR_2;

 FUNC_3(&VAR_0->lock, VAR_2);
 VAR_1 = !FUNC_2(&VAR_0->work_items) || !FUNC_1(&VAR_0->bios);
 VAR_0->commit_scheduled = 1;
 FUNC_4(&VAR_0->lock, VAR_2);

 if (VAR_1)
  FUNC_0(VAR_0);
}
