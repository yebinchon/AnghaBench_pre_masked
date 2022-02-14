
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct scatterlist {int dummy; } ;
struct device {int dummy; } ;
struct ccp_sg_workarea {scalar_t__ nents; int dma_dir; int dma_count; struct device* dma_dev; struct scatterlist* dma_sg; scalar_t__ sg_used; scalar_t__ bytes_left; struct scatterlist* sg; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct scatterlist*,int,int) ;
 int FUNC_1 (struct ccp_sg_workarea*,int ,int) ;
 scalar_t__ FUNC_2 (struct scatterlist*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct ccp_sg_workarea *VAR_2, struct device *VAR_3,
    struct scatterlist *VAR_4, u64 VAR_5,
    enum dma_data_direction VAR_6)
{
 FUNC_1(VAR_2, 0, sizeof(*VAR_2));

 VAR_2->sg = VAR_4;
 if (!VAR_4)
  return 0;

 VAR_2->nents = FUNC_2(VAR_4, VAR_5);
 if (VAR_2->nents < 0)
  return VAR_2->nents;

 VAR_2->bytes_left = VAR_5;
 VAR_2->sg_used = 0;

 if (VAR_5 == 0)
  return 0;

 if (VAR_6 == VAR_0)
  return 0;

 VAR_2->dma_sg = VAR_4;
 VAR_2->dma_dev = VAR_3;
 VAR_2->dma_dir = VAR_6;
 VAR_2->dma_count = FUNC_0(VAR_3, VAR_4, VAR_2->nents, VAR_6);
 if (!VAR_2->dma_count)
  return -VAR_1;

 return 0;
}
