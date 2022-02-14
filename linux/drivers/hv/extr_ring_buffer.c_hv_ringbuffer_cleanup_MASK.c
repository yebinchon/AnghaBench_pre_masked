
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_ring_buffer_info {int ring_buffer_mutex; int * ring_buffer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct hv_ring_buffer_info *VAR_0)
{
 FUNC_0(&VAR_0->ring_buffer_mutex);
 FUNC_2(VAR_0->ring_buffer);
 VAR_0->ring_buffer = ((void*)0);
 FUNC_1(&VAR_0->ring_buffer_mutex);
}
