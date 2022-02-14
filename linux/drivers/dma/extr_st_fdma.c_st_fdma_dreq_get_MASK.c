
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct st_fdma_dev {long dreq_mask; int dev; } ;
struct TYPE_2__ {scalar_t__ req_line; } ;
struct st_fdma_chan {TYPE_1__ cfg; struct st_fdma_dev* fdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,long) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (scalar_t__,long*) ;

__attribute__((used)) static int FUNC_3(struct st_fdma_chan *VAR_2)
{
 struct st_fdma_dev *VAR_3 = VAR_2->fdev;
 u32 VAR_4 = VAR_2->cfg.req_line;
 u32 VAR_5;
 int VAR_6 = 0;






 do {
  if (VAR_3->dreq_mask == ~0L) {
   FUNC_1(VAR_3->dev, "No req lines available\n");
   return -VAR_0;
  }

  if (VAR_6 || VAR_4 >= VAR_1) {
   FUNC_1(VAR_3->dev, "Invalid or used req line\n");
   return -VAR_0;
  } else {
   VAR_5 = VAR_4;
  }

  VAR_6++;
 } while (FUNC_2(VAR_5, &VAR_3->dreq_mask));

 FUNC_0(VAR_3->dev, "get dreq_line:%d mask:%#lx\n",
  VAR_5, VAR_3->dreq_mask);

 return VAR_5;
}
