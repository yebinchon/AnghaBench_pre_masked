
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msgdma_device {int done_list; int pending_list; int active_list; } ;


 int FUNC_0 (struct msgdma_device*,int *) ;

__attribute__((used)) static void FUNC_1(struct msgdma_device *VAR_0)
{
 FUNC_0(VAR_0, &VAR_0->active_list);
 FUNC_0(VAR_0, &VAR_0->pending_list);
 FUNC_0(VAR_0, &VAR_0->done_list);
}
