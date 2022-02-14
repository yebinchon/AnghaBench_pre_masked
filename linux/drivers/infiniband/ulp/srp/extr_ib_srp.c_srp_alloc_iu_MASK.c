
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srp_iu {size_t size; int direction; struct srp_iu* buf; int dma; } ;
struct srp_host {TYPE_1__* srp_dev; } ;
typedef int gfp_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,struct srp_iu*,size_t,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct srp_iu*) ;
 struct srp_iu* FUNC_3 (int,int ) ;
 struct srp_iu* FUNC_4 (size_t,int ) ;

__attribute__((used)) static struct srp_iu *FUNC_5(struct srp_host *VAR_0, size_t VAR_1,
       gfp_t VAR_2,
       enum dma_data_direction VAR_3)
{
 struct srp_iu *VAR_4;

 VAR_4 = FUNC_3(sizeof *VAR_4, VAR_2);
 if (!VAR_4)
  goto out;

 VAR_4->buf = FUNC_4(VAR_1, VAR_2);
 if (!VAR_4->buf)
  goto out_free_iu;

 VAR_4->dma = FUNC_0(VAR_0->srp_dev->dev, VAR_4->buf, VAR_1,
        VAR_3);
 if (FUNC_1(VAR_0->srp_dev->dev, VAR_4->dma))
  goto out_free_buf;

 VAR_4->size = VAR_1;
 VAR_4->direction = VAR_3;

 return VAR_4;

out_free_buf:
 FUNC_2(VAR_4->buf);
out_free_iu:
 FUNC_2(VAR_4);
out:
 return ((void*)0);
}
