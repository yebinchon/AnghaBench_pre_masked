
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct device {int dummy; } ;
struct buffer_array {unsigned int num_of_buffers; int* nents; unsigned int* total_data_len; int* is_last; scalar_t__** mlli_nents; int * type; scalar_t__* offset; TYPE_1__* entry; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int buffer_dma; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,unsigned int,int *,unsigned int,int) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_1,
    struct buffer_array *VAR_2,
    dma_addr_t VAR_3, unsigned int VAR_4,
    bool VAR_5, u32 *VAR_6)
{
 unsigned int VAR_7 = VAR_2->num_of_buffers;

 FUNC_0(VAR_1, "index=%u single_buff=%pad buffer_len=0x%08X is_last=%d\n",
  VAR_7, &VAR_3, VAR_4, VAR_5);
 VAR_2->nents[VAR_7] = 1;
 VAR_2->entry[VAR_7].buffer_dma = VAR_3;
 VAR_2->offset[VAR_7] = 0;
 VAR_2->total_data_len[VAR_7] = VAR_4;
 VAR_2->type[VAR_7] = VAR_0;
 VAR_2->is_last[VAR_7] = VAR_5;
 VAR_2->mlli_nents[VAR_7] = VAR_6;
 if (VAR_2->mlli_nents[VAR_7])
  *VAR_2->mlli_nents[VAR_7] = 0;
 VAR_2->num_of_buffers++;
}
