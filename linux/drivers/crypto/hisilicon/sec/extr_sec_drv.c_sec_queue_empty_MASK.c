
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_queue_ring_cmd {int used; } ;
struct sec_queue {struct sec_queue_ring_cmd ring_cmd; } ;


 int FUNC_0 (int *) ;

bool FUNC_1(struct sec_queue *VAR_0)
{
 struct sec_queue_ring_cmd *VAR_1 = &VAR_0->ring_cmd;

 return !FUNC_0(&VAR_1->used);
}
