
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hv_ring_buffer_info {int ring_lock; } ;
struct vmbus_channel {int out_full_flag; scalar_t__ rescind; int out_full_first; int out_full_total; struct hv_ring_buffer_info outbound; } ;
struct kvec {int iov_len; int * iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hv_ring_buffer_info*,int,int *,int) ;
 int FUNC_1 (struct hv_ring_buffer_info*) ;
 int FUNC_2 (struct hv_ring_buffer_info*) ;
 int FUNC_3 (struct hv_ring_buffer_info*) ;
 int FUNC_4 (struct hv_ring_buffer_info*,int) ;
 int FUNC_5 (int,struct vmbus_channel*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 () ;

int FUNC_9(struct vmbus_channel *VAR_2,
   const struct kvec *VAR_3, u32 VAR_4)
{
 int VAR_5;
 u32 VAR_6;
 u32 VAR_7 = sizeof(u64);
 u32 VAR_8;
 u32 VAR_9;
 u64 VAR_10;
 unsigned long VAR_11;
 struct hv_ring_buffer_info *VAR_12 = &VAR_2->outbound;

 if (VAR_2->rescind)
  return -VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  VAR_7 += VAR_3[VAR_5].iov_len;

 FUNC_6(&VAR_12->ring_lock, VAR_11);

 VAR_6 = FUNC_1(VAR_12);






 if (VAR_6 <= VAR_7) {
  ++VAR_2->out_full_total;

  if (!VAR_2->out_full_flag) {
   ++VAR_2->out_full_first;
   VAR_2->out_full_flag = 1;
  }

  FUNC_7(&VAR_12->ring_lock, VAR_11);
  return -VAR_0;
 }

 VAR_2->out_full_flag = 0;


 VAR_8 = FUNC_2(VAR_12);

 VAR_9 = VAR_8;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_8 = FUNC_0(VAR_12,
           VAR_8,
           VAR_3[VAR_5].iov_base,
           VAR_3[VAR_5].iov_len);
 }


 VAR_10 = FUNC_3(VAR_12);

 VAR_8 = FUNC_0(VAR_12,
          VAR_8,
          &VAR_10,
          sizeof(u64));


 FUNC_8();


 FUNC_4(VAR_12, VAR_8);


 FUNC_7(&VAR_12->ring_lock, VAR_11);

 FUNC_5(VAR_9, VAR_2);

 if (VAR_2->rescind)
  return -VAR_1;

 return 0;
}
