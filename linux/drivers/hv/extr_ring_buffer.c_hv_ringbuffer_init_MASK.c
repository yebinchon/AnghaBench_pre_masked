
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct page {int dummy; } ;
struct hv_ring_buffer_info {int ring_size; int ring_datasize; int ring_lock; scalar_t__ priv_read_index; int ring_size_div10_reciprocal; struct hv_ring_buffer* ring_buffer; } ;
struct TYPE_2__ {int value; } ;
struct hv_ring_buffer {TYPE_1__ feature_bits; scalar_t__ write_index; scalar_t__ read_index; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct page** FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct page**) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct page**,int,int ,int ) ;

int FUNC_6(struct hv_ring_buffer_info *VAR_6,
         struct page *VAR_7, u32 VAR_8)
{
 int VAR_9;
 struct page **VAR_10;

 FUNC_0((sizeof(struct hv_ring_buffer) != VAR_4));





 VAR_10 = FUNC_1(VAR_8 * 2 - 1, sizeof(struct page *),
       VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10[0] = VAR_7;
 for (VAR_9 = 0; VAR_9 < 2 * (VAR_8 - 1); VAR_9++)
  VAR_10[VAR_9 + 1] = &VAR_7[VAR_9 % (VAR_8 - 1) + 1];

 VAR_6->ring_buffer = (struct hv_ring_buffer *)
  FUNC_5(VAR_10, VAR_8 * 2 - 1, VAR_5, VAR_2);

 FUNC_2(VAR_10);


 if (!VAR_6->ring_buffer)
  return -VAR_0;

 VAR_6->ring_buffer->read_index =
  VAR_6->ring_buffer->write_index = 0;


 VAR_6->ring_buffer->feature_bits.value = 1;

 VAR_6->ring_size = VAR_8 << VAR_3;
 VAR_6->ring_size_div10_reciprocal =
  FUNC_3(VAR_6->ring_size / 10);
 VAR_6->ring_datasize = VAR_6->ring_size -
  sizeof(struct hv_ring_buffer);
 VAR_6->priv_read_index = 0;

 FUNC_4(&VAR_6->ring_lock);

 return 0;
}
