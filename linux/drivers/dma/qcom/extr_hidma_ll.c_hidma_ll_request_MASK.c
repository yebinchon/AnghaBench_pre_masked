
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hidma_tre {int dma_sig; char const* dev_name; void (* callback ) (void*) ;unsigned int idx; int* tre_local; struct hidma_lldev* lldev; scalar_t__ err_info; scalar_t__ err_code; scalar_t__ queued; scalar_t__ status; void* data; int allocated; } ;
struct hidma_lldev {int nr_tres; int chidx; struct hidma_tre* trepool; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_1 (int *,int,int) ;

int FUNC_2(struct hidma_lldev *VAR_3, u32 VAR_4, const char *VAR_5,
       void (*VAR_6)(void *VAR_7), void *VAR_8, u32 *VAR_9)
{
 unsigned int VAR_10;
 struct hidma_tre *VAR_11;
 u32 *VAR_12;

 if (!VAR_9 || !VAR_3)
  return -VAR_0;


 for (VAR_10 = 0; VAR_10 < VAR_3->nr_tres - 1; VAR_10++) {
  if (FUNC_1(&VAR_3->trepool[VAR_10].allocated, 1, 1))
   break;
 }

 if (VAR_10 == (VAR_3->nr_tres - 1))
  return -VAR_1;

 VAR_11 = &VAR_3->trepool[VAR_10];
 VAR_11->dma_sig = VAR_4;
 VAR_11->dev_name = VAR_5;
 VAR_11->callback = VAR_6;
 VAR_11->data = VAR_8;
 VAR_11->idx = VAR_10;
 VAR_11->status = 0;
 VAR_11->queued = 0;
 VAR_11->err_code = 0;
 VAR_11->err_info = 0;
 VAR_11->lldev = VAR_3;
 VAR_12 = &VAR_11->tre_local[0];
 VAR_12[VAR_2] = (VAR_3->chidx & 0xFF) << 8;
 VAR_12[VAR_2] |= FUNC_0(16);
 *VAR_9 = VAR_10;
 if (VAR_6)
  VAR_6(VAR_8);
 return 0;
}
