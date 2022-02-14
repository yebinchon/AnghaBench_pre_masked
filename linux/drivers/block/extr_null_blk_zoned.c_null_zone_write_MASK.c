
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nullb_device {struct blk_zone* zones; } ;
struct nullb_cmd {int error; TYPE_1__* nq; } ;
struct blk_zone {int cond; unsigned int wp; unsigned int start; unsigned int len; } ;
typedef unsigned int sector_t ;
typedef int blk_status_t ;
struct TYPE_2__ {struct nullb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;




 unsigned int FUNC_0 (struct nullb_device*,unsigned int) ;

__attribute__((used)) static blk_status_t FUNC_1(struct nullb_cmd *VAR_2, sector_t VAR_3,
       unsigned int VAR_4)
{
 struct nullb_device *VAR_5 = VAR_2->nq->dev;
 unsigned int VAR_6 = FUNC_0(VAR_5, VAR_3);
 struct blk_zone *VAR_7 = &VAR_5->zones[VAR_6];

 switch (VAR_7->cond) {
 case 130:

  VAR_2->error = VAR_0;
  return VAR_0;
 case 131:
 case 129:

  if (VAR_3 != VAR_7->wp)
   return VAR_0;

  if (VAR_7->cond == 131)
   VAR_7->cond = 129;

  VAR_7->wp += VAR_4;
  if (VAR_7->wp == VAR_7->start + VAR_7->len)
   VAR_7->cond = 130;
  break;
 case 128:
  break;
 default:

  return VAR_0;
 }
 return VAR_1;
}
