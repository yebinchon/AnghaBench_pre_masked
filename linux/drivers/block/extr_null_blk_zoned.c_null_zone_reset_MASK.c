
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nullb_device {size_t nr_zones; struct blk_zone* zones; } ;
struct nullb_cmd {int rq; TYPE_1__* nq; } ;
struct blk_zone {int start; int wp; void* cond; int type; } ;
typedef int sector_t ;
typedef int blk_status_t ;
struct TYPE_2__ {struct nullb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;


 unsigned int FUNC_0 (struct nullb_device*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static blk_status_t FUNC_2(struct nullb_cmd *VAR_5, sector_t VAR_6)
{
 struct nullb_device *VAR_7 = VAR_5->nq->dev;
 unsigned int VAR_8 = FUNC_0(VAR_7, VAR_6);
 struct blk_zone *VAR_9 = &VAR_7->zones[VAR_8];
 size_t VAR_10;

 switch (FUNC_1(VAR_5->rq)) {
 case 128:
  for (VAR_10 = 0; VAR_10 < VAR_7->nr_zones; VAR_10++) {
   if (VAR_9[VAR_10].type == VAR_4)
    continue;
   VAR_9[VAR_10].cond = VAR_3;
   VAR_9[VAR_10].wp = VAR_9[VAR_10].start;
  }
  break;
 case 129:
  if (VAR_9->type == VAR_4)
   return VAR_0;

  VAR_9->cond = VAR_3;
  VAR_9->wp = VAR_9->start;
  break;
 default:
  return VAR_1;
 }
 return VAR_2;
}
