
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_queue_struct {scalar_t__ nr; } ;
struct diff_options {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct diff_queue_struct *VAR_0,
        struct diff_options *VAR_1, void *VAR_2)
{
 int *VAR_3 = VAR_2;

 (*VAR_3) += VAR_0->nr;
}
