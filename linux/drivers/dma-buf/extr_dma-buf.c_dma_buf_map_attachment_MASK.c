
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct dma_buf_attachment {int dir; struct sg_table* sgt; TYPE_2__* dmabuf; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {scalar_t__ cache_sgt_mapping; struct sg_table* (* map_dma_buf ) (struct dma_buf_attachment*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sg_table* FUNC_0 (int ) ;
 int FUNC_1 (struct sg_table*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 () ;
 struct sg_table* FUNC_4 (struct dma_buf_attachment*,int) ;

struct sg_table *FUNC_5(struct dma_buf_attachment *VAR_4,
     enum dma_data_direction VAR_5)
{
 struct sg_table *VAR_6;

 FUNC_3();

 if (FUNC_2(!VAR_4 || !VAR_4->dmabuf))
  return FUNC_0(-VAR_2);

 if (VAR_4->sgt) {




  if (VAR_4->dir != VAR_5 &&
      VAR_4->dir != VAR_0)
   return FUNC_0(-VAR_1);

  return VAR_4->sgt;
 }

 VAR_6 = VAR_4->dmabuf->ops->map_dma_buf(VAR_4, VAR_5);
 if (!VAR_6)
  VAR_6 = FUNC_0(-VAR_3);

 if (!FUNC_1(VAR_6) && VAR_4->dmabuf->ops->cache_sgt_mapping) {
  VAR_4->sgt = VAR_6;
  VAR_4->dir = VAR_5;
 }

 return VAR_6;
}
