
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qxl_release {int dummy; } ;
struct qxl_image {int dummy; } ;
struct qxl_drm_image {int bo; int chunk_list; } ;
struct qxl_device {int dummy; } ;
struct qxl_data_chunk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct qxl_drm_image*) ;
 struct qxl_drm_image* FUNC_2 (int,int ) ;
 int FUNC_3 (struct qxl_device*,struct qxl_release*,int,int *) ;
 int FUNC_4 (struct qxl_device*,struct qxl_release*,struct qxl_drm_image*,int) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct qxl_device *VAR_2,
   struct qxl_release *VAR_3,
   struct qxl_drm_image **VAR_4,
   int VAR_5, int VAR_6)
{
 struct qxl_drm_image *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(sizeof(struct qxl_drm_image), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_0(&VAR_7->chunk_list);

 VAR_8 = FUNC_3(VAR_2, VAR_3, sizeof(struct qxl_image), &VAR_7->bo);
 if (VAR_8) {
  FUNC_1(VAR_7);
  return VAR_8;
 }

 VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_7, sizeof(struct qxl_data_chunk) + VAR_6 * VAR_5);
 if (VAR_8) {
  FUNC_5(&VAR_7->bo);
  FUNC_1(VAR_7);
  return VAR_8;
 }
 *VAR_4 = VAR_7;
 return 0;
}
