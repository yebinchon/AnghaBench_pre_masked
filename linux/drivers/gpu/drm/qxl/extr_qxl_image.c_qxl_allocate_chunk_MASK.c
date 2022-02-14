
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qxl_release {int dummy; } ;
struct qxl_drm_image {int chunk_list; } ;
struct qxl_drm_chunk {int head; int bo; } ;
struct qxl_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qxl_drm_chunk*) ;
 struct qxl_drm_chunk* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct qxl_device*,struct qxl_release*,unsigned int,int *) ;

__attribute__((used)) static int
FUNC_4(struct qxl_device *VAR_2,
     struct qxl_release *VAR_3,
     struct qxl_drm_image *VAR_4,
     unsigned int VAR_5)
{
 struct qxl_drm_chunk *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(sizeof(struct qxl_drm_chunk), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_5, &VAR_6->bo);
 if (VAR_7) {
  FUNC_0(VAR_6);
  return VAR_7;
 }

 FUNC_2(&VAR_6->head, &VAR_4->chunk_list);
 return 0;
}
