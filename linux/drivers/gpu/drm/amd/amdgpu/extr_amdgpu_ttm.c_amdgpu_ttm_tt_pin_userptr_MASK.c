
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ttm_tt {int num_pages; TYPE_2__* sg; int pages; int bdev; } ;
struct TYPE_5__ {int dma_address; } ;
struct amdgpu_ttm_tt {int userflags; TYPE_1__ ttm; } ;
struct amdgpu_device {int dev; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_6__ {unsigned int nents; int sgl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct amdgpu_device* FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ,int ,unsigned int,int) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int,int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct ttm_tt *VAR_6)
{
 struct amdgpu_device *VAR_7 = FUNC_0(VAR_6->bdev);
 struct amdgpu_ttm_tt *VAR_8 = (void *)VAR_6;
 unsigned VAR_9;
 int VAR_10;

 int VAR_11 = !(VAR_8->userflags & VAR_0);
 enum dma_data_direction VAR_12 = VAR_11 ?
  VAR_1 : VAR_2;


 VAR_10 = FUNC_4(VAR_6->sg, VAR_6->pages, VAR_6->num_pages, 0,
          VAR_6->num_pages << VAR_5,
          VAR_4);
 if (VAR_10)
  goto release_sg;


 VAR_10 = -VAR_3;
 VAR_9 = FUNC_1(VAR_7->dev, VAR_6->sg->sgl, VAR_6->sg->nents, VAR_12);
 if (VAR_9 != VAR_6->sg->nents)
  goto release_sg;


 FUNC_2(VAR_6->sg, VAR_6->pages,
      VAR_8->ttm.dma_address, VAR_6->num_pages);

 return 0;

release_sg:
 FUNC_3(VAR_6->sg);
 return VAR_10;
}
