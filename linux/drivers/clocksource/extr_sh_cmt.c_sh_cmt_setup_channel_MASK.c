
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_cmt_device {TYPE_2__* pdev; TYPE_1__* info; int mapbase; } ;
struct sh_cmt_channel {unsigned int index; unsigned int hwidx; unsigned int timer_bit; int max_match_value; int match_value; int cs_enabled; int lock; int iostart; int ioctrl; struct sh_cmt_device* cmt; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int model; int width; } ;







 int FUNC_0 (int *,char*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sh_cmt_channel*,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct sh_cmt_channel *VAR_0, unsigned int VAR_1,
    unsigned int VAR_2, bool VAR_3,
    bool VAR_4, struct sh_cmt_device *VAR_5)
{
 int VAR_6;


 if (!VAR_3 && !VAR_4)
  return 0;

 VAR_0->cmt = VAR_5;
 VAR_0->index = VAR_1;
 VAR_0->hwidx = VAR_2;
 VAR_0->timer_bit = VAR_2;






 switch (VAR_5->info->model) {
 case 130:
  VAR_0->ioctrl = VAR_5->mapbase + 2 + VAR_0->hwidx * 6;
  break;
 case 129:
 case 128:
  VAR_0->ioctrl = VAR_5->mapbase + 0x10 + VAR_0->hwidx * 0x10;
  break;
 case 132:
 case 131:
  VAR_0->iostart = VAR_5->mapbase + VAR_0->hwidx * 0x100;
  VAR_0->ioctrl = VAR_0->iostart + 0x10;
  VAR_0->timer_bit = 0;
  break;
 }

 if (VAR_5->info->width == (sizeof(VAR_0->max_match_value) * 8))
  VAR_0->max_match_value = ~0;
 else
  VAR_0->max_match_value = (1 << VAR_5->info->width) - 1;

 VAR_0->match_value = VAR_0->max_match_value;
 FUNC_2(&VAR_0->lock);

 VAR_6 = FUNC_3(VAR_0, FUNC_1(&VAR_5->pdev->dev),
         VAR_3, VAR_4);
 if (VAR_6) {
  FUNC_0(&VAR_5->pdev->dev, "ch%u: registration failed\n",
   VAR_0->index);
  return VAR_6;
 }
 VAR_0->cs_enabled = 0;

 return 0;
}
