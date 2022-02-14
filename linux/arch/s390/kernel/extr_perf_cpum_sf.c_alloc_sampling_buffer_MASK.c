
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sf_buffer {unsigned long* sdbt; int num_sdbt; unsigned long* tail; scalar_t__ num_sdb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*,...) ;
 int FUNC_1 (struct sf_buffer*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sf_buffer*,unsigned long,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct sf_buffer *VAR_4, unsigned long VAR_5)
{
 int VAR_6;

 if (VAR_4->sdbt)
  return -VAR_0;


 VAR_4->sdbt = (unsigned long *) FUNC_2(VAR_2);
 if (!VAR_4->sdbt)
  return -VAR_1;
 VAR_4->num_sdb = 0;
 VAR_4->num_sdbt = 1;




 VAR_4->tail = VAR_4->sdbt;
 *VAR_4->tail = (unsigned long)(void *) VAR_4->sdbt + 1;


 VAR_6 = FUNC_3(VAR_4, VAR_5, VAR_2);
 if (VAR_6) {
  FUNC_1(VAR_4);
  FUNC_0(VAR_3, 4, "alloc_sampling_buffer: "
   "realloc_sampling_buffer failed with rc=%i\n", VAR_6);
 } else
  FUNC_0(VAR_3, 4,
   "alloc_sampling_buffer: tear=%p dear=%p\n",
   VAR_4->sdbt, (void *) *VAR_4->sdbt);
 return VAR_6;
}
