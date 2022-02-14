
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct host1x_waitlist {int * data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct host1x_waitlist *VAR_0)
{
 wait_queue_head_t *VAR_1 = VAR_0->data;

 FUNC_0(VAR_1);
}
