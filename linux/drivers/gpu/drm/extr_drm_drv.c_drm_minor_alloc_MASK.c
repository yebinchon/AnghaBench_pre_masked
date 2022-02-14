
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_minor {unsigned int type; int index; int kdev; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct drm_minor** FUNC_2 (struct drm_device*,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct drm_minor*) ;
 int FUNC_4 (int *,int *,int,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (struct drm_minor*) ;
 struct drm_minor* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_12(struct drm_device *VAR_5, unsigned int VAR_6)
{
 struct drm_minor *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 VAR_7 = FUNC_9(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->type = VAR_6;
 VAR_7->dev = VAR_5;

 FUNC_5(VAR_1);
 FUNC_10(&VAR_3, VAR_8);
 VAR_9 = FUNC_4(&VAR_4,
        ((void*)0),
        64 * VAR_6,
        64 * (VAR_6 + 1),
        VAR_2);
 FUNC_11(&VAR_3, VAR_8);
 FUNC_6();

 if (VAR_9 < 0)
  goto err_free;

 VAR_7->index = VAR_9;

 VAR_7->kdev = FUNC_3(VAR_7);
 if (FUNC_0(VAR_7->kdev)) {
  VAR_9 = FUNC_1(VAR_7->kdev);
  goto err_index;
 }

 *FUNC_2(VAR_5, VAR_6) = VAR_7;
 return 0;

err_index:
 FUNC_10(&VAR_3, VAR_8);
 FUNC_7(&VAR_4, VAR_7->index);
 FUNC_11(&VAR_3, VAR_8);
err_free:
 FUNC_8(VAR_7);
 return VAR_9;
}
