
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entry; } ;
struct continuation {TYPE_1__ ws; } ;
struct batcher {int commit_scheduled; int lock; int work_items; } ;


 int FUNC_0 (struct batcher*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct batcher *VAR_0, struct continuation *VAR_1)
{
 unsigned long VAR_2;
 bool VAR_3;

 FUNC_2(&VAR_0->lock, VAR_2);
 VAR_3 = VAR_0->commit_scheduled;
 FUNC_1(&VAR_1->ws.entry, &VAR_0->work_items);
 FUNC_3(&VAR_0->lock, VAR_2);

 if (VAR_3)
  FUNC_0(VAR_0);
}
