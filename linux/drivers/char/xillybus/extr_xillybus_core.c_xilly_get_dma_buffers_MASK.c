
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct xilly_endpoint {int msgbuf_dma_addr; int msg_buf_size; scalar_t__ registers; void* msgbuf_addr; TYPE_1__* ephw; struct device* dev; } ;
struct xilly_buffer {int dma_addr; void* addr; } ;
struct xilly_alloc_state {int left_of_salami; int regdirection; void* salami; int nbuffer; int direction; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* map_single ) (struct xilly_endpoint*,void*,int,int ,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct device*,int,int) ;
 struct xilly_buffer* FUNC_2 (struct device*,int,int,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct xilly_endpoint*,void*,int,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct xilly_endpoint *VAR_9,
     struct xilly_alloc_state *VAR_10,
     struct xilly_buffer **VAR_11,
     int VAR_12, int VAR_13)
{
 int VAR_14, VAR_15;
 dma_addr_t VAR_16;
 struct device *VAR_17 = VAR_9->dev;
 struct xilly_buffer *VAR_18 = ((void*)0);

 if (VAR_11) {
  VAR_18 = FUNC_2(VAR_17, VAR_12,
        sizeof(struct xilly_buffer),
        VAR_2);
  if (!VAR_18)
   return -VAR_1;
 }

 for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {





  if ((VAR_10->left_of_salami < VAR_13) &&
      (VAR_10->left_of_salami > 0)) {
   FUNC_0(VAR_9->dev,
    "Corrupt buffer allocation in IDT. Aborting.\n");
   return -VAR_0;
  }

  if (VAR_10->left_of_salami == 0) {
   int VAR_19, VAR_20;

   VAR_20 = VAR_3;
   VAR_19 = 0;
   while (VAR_13 > VAR_20) {
    VAR_20 *= 2;
    VAR_19++;
   }

   VAR_10->salami = (void *) FUNC_1(
    VAR_17,
    VAR_2 | VAR_4 | VAR_5,
    VAR_19);
   if (!VAR_10->salami)
    return -VAR_1;

   VAR_10->left_of_salami = VAR_20;
  }

  VAR_15 = VAR_9->ephw->map_single(VAR_9, VAR_10->salami,
       VAR_13, VAR_10->direction,
       &VAR_16);
  if (VAR_15)
   return VAR_15;

  FUNC_3((u32) (VAR_16 & 0xffffffff),
     VAR_9->registers + VAR_7);
  FUNC_3(((u32) ((((u64) VAR_16) >> 32) & 0xffffffff)),
     VAR_9->registers + VAR_6);

  if (VAR_11) {
   VAR_18->addr = VAR_10->salami;
   VAR_18->dma_addr = VAR_16;
   VAR_11[VAR_14] = VAR_18++;

   FUNC_3(VAR_10->regdirection | VAR_10->nbuffer++,
      VAR_9->registers + VAR_8);
  } else {
   VAR_9->msgbuf_addr = VAR_10->salami;
   VAR_9->msgbuf_dma_addr = VAR_16;
   VAR_9->msg_buf_size = VAR_13;

   FUNC_3(VAR_10->regdirection,
      VAR_9->registers + VAR_8);
  }

  VAR_10->left_of_salami -= VAR_13;
  VAR_10->salami += VAR_13;
 }
 return 0;
}
