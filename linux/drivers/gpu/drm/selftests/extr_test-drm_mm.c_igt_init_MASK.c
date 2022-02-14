
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct drm_mm_node {unsigned int size; scalar_t__ start; } ;
struct drm_mm {unsigned int size; scalar_t__ start; } ;
typedef int mm ;


 int VAR_0 ;
 int FUNC_0 (struct drm_mm_node*) ;
 int FUNC_1 (struct drm_mm_node*,int ,unsigned int const) ;
 int FUNC_2 (struct drm_mm_node*) ;
 int FUNC_3 (struct drm_mm_node*,int ,unsigned int const) ;
 scalar_t__ FUNC_4 (struct drm_mm_node*) ;
 int FUNC_5 (struct drm_mm_node*) ;
 int FUNC_6 (struct drm_mm_node*,struct drm_mm_node*) ;
 int FUNC_7 (struct drm_mm_node*) ;
 int FUNC_8 (struct drm_mm_node*,int,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct drm_mm_node*) ;

__attribute__((used)) static int FUNC_11(void *VAR_1)
{
 const unsigned int VAR_2 = 4096;
 struct drm_mm VAR_3;
 struct drm_mm_node VAR_4;
 int VAR_5 = -VAR_0;


 FUNC_8(&VAR_3, 0, sizeof(VAR_3));
 if (FUNC_4(&VAR_3)) {
  FUNC_9("zeroed mm claims to be initialized\n");
  return VAR_5;
 }

 FUNC_8(&VAR_3, 0xff, sizeof(VAR_3));
 FUNC_3(&VAR_3, 0, VAR_2);
 if (!FUNC_4(&VAR_3)) {
  FUNC_9("mm claims not to be initialized\n");
  goto out;
 }

 if (!FUNC_2(&VAR_3)) {
  FUNC_9("mm not empty on creation\n");
  goto out;
 }


 if (!FUNC_1(&VAR_3, 0, VAR_2)) {
  VAR_5 = -VAR_0;
  goto out;
 }

 FUNC_8(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.start = 0;
 VAR_4.size = VAR_2;
 VAR_5 = FUNC_6(&VAR_3, &VAR_4);
 if (VAR_5) {
  FUNC_9("failed to reserve whole drm_mm\n");
  goto out;
 }


 if (!FUNC_0(&VAR_3)) {
  VAR_5 = -VAR_0;
  goto out;
 }


 FUNC_5(&VAR_4);
 if (!FUNC_1(&VAR_3, 0, VAR_2)) {
  VAR_5 = -VAR_0;
  goto out;
 }

out:
 if (VAR_5)
  FUNC_10(&VAR_3);
 FUNC_7(&VAR_3);
 return VAR_5;
}
