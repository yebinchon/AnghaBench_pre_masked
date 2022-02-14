
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_queue_struct {scalar_t__ nr; struct diff_filepair** queue; int alloc; } ;
struct diff_filepair {int dummy; } ;


 int FUNC_0 (struct diff_filepair**,scalar_t__,int ) ;

void FUNC_1(struct diff_queue_struct *VAR_0, struct diff_filepair *VAR_1)
{
 FUNC_0(VAR_0->queue, VAR_0->nr + 1, VAR_0->alloc);
 VAR_0->queue[VAR_0->nr++] = VAR_1;
}
