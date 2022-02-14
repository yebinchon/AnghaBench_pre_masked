
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sync_file {int file; } ;
struct drm_file {int dummy; } ;
struct dma_fence {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dma_fence*) ;
 int FUNC_1 (struct drm_file*,int,int ,int ,struct dma_fence**) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 struct sync_file* FUNC_5 (struct dma_fence*) ;

__attribute__((used)) static int FUNC_6(struct drm_file *VAR_2,
     int VAR_3, int *VAR_4)
{
 int VAR_5;
 struct dma_fence *VAR_6;
 struct sync_file *VAR_7;
 int VAR_8 = FUNC_3(VAR_1);

 if (VAR_8 < 0)
  return VAR_8;

 VAR_5 = FUNC_1(VAR_2, VAR_3, 0, 0, &VAR_6);
 if (VAR_5)
  goto err_put_fd;

 VAR_7 = FUNC_5(VAR_6);

 FUNC_0(VAR_6);

 if (!VAR_7) {
  VAR_5 = -VAR_0;
  goto err_put_fd;
 }

 FUNC_2(VAR_8, VAR_7->file);

 *VAR_4 = VAR_8;
 return 0;
err_put_fd:
 FUNC_4(VAR_8);
 return VAR_5;
}
