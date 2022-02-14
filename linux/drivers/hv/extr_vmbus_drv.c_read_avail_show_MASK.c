
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_ring_buffer_info {int ring_buffer_mutex; int ring_buffer; } ;
struct vmbus_channel {struct hv_ring_buffer_info inbound; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct hv_ring_buffer_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct vmbus_channel *VAR_1, char *VAR_2)
{
 struct hv_ring_buffer_info *VAR_3 = &VAR_1->inbound;
 ssize_t VAR_4;

 FUNC_1(&VAR_3->ring_buffer_mutex);
 if (!VAR_3->ring_buffer) {
  FUNC_2(&VAR_3->ring_buffer_mutex);
  return -VAR_0;
 }

 VAR_4 = FUNC_3(VAR_2, "%u\n", FUNC_0(VAR_3));
 FUNC_2(&VAR_3->ring_buffer_mutex);
 return VAR_4;
}
