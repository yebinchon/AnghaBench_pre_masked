
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ position; void* channel; void* phys; } ;
struct TYPE_3__ {scalar_t__ position; void* channel; void* phys; } ;
struct tegra_ivc {void (* notify ) (struct tegra_ivc*,void*) ;size_t frame_size; unsigned int num_frames; TYPE_2__ rx; TYPE_1__ tx; void* notify_data; struct device* peer; } ;
struct device {int dummy; } ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (struct device*,void*,size_t,int ) ;
 scalar_t__ FUNC_2 (struct device*,void*) ;
 int FUNC_3 (struct device*,void*,size_t,int ) ;
 int FUNC_4 (unsigned long,unsigned long,unsigned int,size_t) ;
 size_t FUNC_5 (unsigned int) ;

int FUNC_6(struct tegra_ivc *VAR_5, struct device *VAR_6, void *VAR_7,
     dma_addr_t VAR_8, void *VAR_9, dma_addr_t VAR_10,
     unsigned int VAR_11, size_t VAR_12,
     void (*VAR_13)(struct tegra_ivc *VAR_14, void *VAR_15),
     void *VAR_16)
{
 size_t VAR_17;
 int VAR_18;

 if (FUNC_0(!VAR_5 || !VAR_13))
  return -VAR_2;





 if (VAR_12 > VAR_4)
  return -VAR_1;

 VAR_18 = FUNC_4((unsigned long)VAR_7, (unsigned long)VAR_9,
         VAR_11, VAR_12);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_17 = FUNC_5(VAR_11 * VAR_12);

 if (VAR_6) {
  VAR_5->rx.phys = FUNC_1(VAR_6, VAR_7, VAR_17,
           VAR_0);
  if (FUNC_2(VAR_6, VAR_5->rx.phys))
   return -VAR_3;

  VAR_5->tx.phys = FUNC_1(VAR_6, VAR_9, VAR_17,
           VAR_0);
  if (FUNC_2(VAR_6, VAR_5->tx.phys)) {
   FUNC_3(VAR_6, VAR_5->rx.phys, VAR_17,
      VAR_0);
   return -VAR_3;
  }
 } else {
  VAR_5->rx.phys = VAR_8;
  VAR_5->tx.phys = VAR_10;
 }

 VAR_5->rx.channel = VAR_7;
 VAR_5->tx.channel = VAR_9;
 VAR_5->peer = VAR_6;
 VAR_5->notify = VAR_13;
 VAR_5->notify_data = VAR_16;
 VAR_5->frame_size = VAR_12;
 VAR_5->num_frames = VAR_11;





 VAR_5->tx.position = 0;
 VAR_5->rx.position = 0;

 return 0;
}
