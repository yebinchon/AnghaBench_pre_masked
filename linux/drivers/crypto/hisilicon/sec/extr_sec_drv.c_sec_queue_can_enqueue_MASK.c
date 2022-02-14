
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_queue_ring_cmd {int used; } ;
struct sec_queue {struct sec_queue_ring_cmd ring_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

bool FUNC_1(struct sec_queue *VAR_1, int VAR_2)
{
 struct sec_queue_ring_cmd *VAR_3 = &VAR_1->ring_cmd;

 return VAR_0 - FUNC_0(&VAR_3->used) >= VAR_2;
}
