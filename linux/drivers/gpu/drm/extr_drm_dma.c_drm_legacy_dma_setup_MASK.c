
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* dma; int buf_alloc; scalar_t__ buf_use; } ;
struct TYPE_2__ {int * bufs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct drm_device*,int ) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int ,int) ;

int FUNC_4(struct drm_device *VAR_5)
{
 int VAR_6;

 if (!FUNC_1(VAR_5, VAR_0) ||
     !FUNC_1(VAR_5, VAR_1))
  return 0;

 VAR_5->buf_use = 0;
 FUNC_0(&VAR_5->buf_alloc, 0);

 VAR_5->dma = FUNC_2(sizeof(*VAR_5->dma), VAR_4);
 if (!VAR_5->dma)
  return -VAR_3;

 for (VAR_6 = 0; VAR_6 <= VAR_2; VAR_6++)
  FUNC_3(&VAR_5->dma->bufs[VAR_6], 0, sizeof(VAR_5->dma->bufs[0]));

 return 0;
}
