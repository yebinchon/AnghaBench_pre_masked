
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c24xx_dma_engine {int dummy; } ;
struct TYPE_2__ {int desc_free; } ;
struct s3c24xx_dma_chan {int id; int slave; TYPE_1__ vc; void* name; int state; struct s3c24xx_dma_engine* host; } ;
struct dma_device {int dev; int channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,void*) ;
 int FUNC_2 (int ,char*,int,char*) ;
 struct s3c24xx_dma_chan* FUNC_3 (int ,int,int ) ;
 void* FUNC_4 (int ,char*,int) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*,struct dma_device*) ;

__attribute__((used)) static int FUNC_6(struct s3c24xx_dma_engine *VAR_4,
  struct dma_device *VAR_5, unsigned int VAR_6, bool VAR_7)
{
 struct s3c24xx_dma_chan *VAR_8;
 int VAR_9;

 FUNC_0(&VAR_5->channels);






 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_8 = FUNC_3(VAR_5->dev, sizeof(*VAR_8), VAR_1);
  if (!VAR_8)
   return -VAR_0;

  VAR_8->id = VAR_9;
  VAR_8->host = VAR_4;
  VAR_8->state = VAR_2;

  if (VAR_7) {
   VAR_8->slave = 1;
   VAR_8->name = FUNC_4(VAR_1, "slave%d", VAR_9);
   if (!VAR_8->name)
    return -VAR_0;
  } else {
   VAR_8->name = FUNC_4(VAR_1, "memcpy%d", VAR_9);
   if (!VAR_8->name)
    return -VAR_0;
  }
  FUNC_1(VAR_5->dev,
    "initialize virtual channel \"%s\"\n",
    VAR_8->name);

  VAR_8->vc.desc_free = VAR_3;
  FUNC_5(&VAR_8->vc, VAR_5);
 }
 FUNC_2(VAR_5->dev, "initialized %d virtual %s channels\n",
   VAR_9, VAR_7 ? "slave" : "memcpy");
 return VAR_9;
}
