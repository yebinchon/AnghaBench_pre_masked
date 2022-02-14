
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct scatterlist {int dummy; } ;
struct device {int dummy; } ;
struct buffer_array {unsigned int num_of_buffers; unsigned int* nents; unsigned int* offset; unsigned int* total_data_len; int* is_last; scalar_t__** mlli_nents; int * type; TYPE_1__* entry; } ;
struct TYPE_2__ {struct scatterlist* sgl; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,unsigned int,unsigned int,struct scatterlist*,unsigned int,int) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_1, struct buffer_array *VAR_2,
       unsigned int VAR_3, struct scatterlist *VAR_4,
       unsigned int VAR_5, unsigned int VAR_6,
       bool VAR_7, u32 *VAR_8)
{
 unsigned int VAR_9 = VAR_2->num_of_buffers;

 FUNC_0(VAR_1, "index=%u nents=%u sgl=%pK data_len=0x%08X is_last=%d\n",
  VAR_9, VAR_3, VAR_4, VAR_5, VAR_7);
 VAR_2->nents[VAR_9] = VAR_3;
 VAR_2->entry[VAR_9].sgl = VAR_4;
 VAR_2->offset[VAR_9] = VAR_6;
 VAR_2->total_data_len[VAR_9] = VAR_5;
 VAR_2->type[VAR_9] = VAR_0;
 VAR_2->is_last[VAR_9] = VAR_7;
 VAR_2->mlli_nents[VAR_9] = VAR_8;
 if (VAR_2->mlli_nents[VAR_9])
  *VAR_2->mlli_nents[VAR_9] = 0;
 VAR_2->num_of_buffers++;
}
