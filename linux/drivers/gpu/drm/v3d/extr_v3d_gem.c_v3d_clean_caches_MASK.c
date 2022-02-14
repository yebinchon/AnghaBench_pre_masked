
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;
struct v3d_dev {int cache_clean_lock; struct drm_device drm; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*) ;
 scalar_t__ FUNC_8 (int,int) ;

void
FUNC_9(struct v3d_dev *VAR_5)
{
 struct drm_device *VAR_6 = &VAR_5->drm;
 int VAR_7 = 0;

 FUNC_6(VAR_6);

 FUNC_2(VAR_7, VAR_0, VAR_4);
 if (FUNC_8(!(FUNC_1(VAR_7, VAR_0) &
         VAR_3), 100)) {
  FUNC_0("Timeout waiting for L1T write combiner flush\n");
 }

 FUNC_4(&VAR_5->cache_clean_lock);
 FUNC_2(VAR_7, VAR_0,
         VAR_3 |
         FUNC_3(VAR_2, VAR_1));

 if (FUNC_8(!(FUNC_1(VAR_7, VAR_0) &
         VAR_3), 100)) {
  FUNC_0("Timeout waiting for L2T clean\n");
 }

 FUNC_5(&VAR_5->cache_clean_lock);

 FUNC_7(VAR_6);
}
