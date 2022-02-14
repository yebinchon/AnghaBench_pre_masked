
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int * seq_zones_wlock; int * seq_zones_bitmap; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct request_queue *VAR_0)
{
 FUNC_0(VAR_0->seq_zones_bitmap);
 VAR_0->seq_zones_bitmap = ((void*)0);
 FUNC_0(VAR_0->seq_zones_wlock);
 VAR_0->seq_zones_wlock = ((void*)0);
}
