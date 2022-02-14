
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udl_fbdev {int helper; } ;
struct udl_device {struct udl_fbdev* fbdev; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_device*,int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct drm_device*,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drm_device*) ;
 int VAR_2 ;
 int FUNC_6 (struct udl_fbdev*) ;
 struct udl_fbdev* FUNC_7 (int,int ) ;
 struct udl_device* FUNC_8 (struct drm_device*) ;
 int VAR_3 ;

int FUNC_9(struct drm_device *VAR_4)
{
 struct udl_device *VAR_5 = FUNC_8(VAR_4);
 int VAR_6 = VAR_2;
 struct udl_fbdev *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_7(sizeof(struct udl_fbdev), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_5->fbdev = VAR_7;

 FUNC_3(VAR_4, &VAR_7->helper, &VAR_3);

 VAR_8 = FUNC_1(VAR_4, &VAR_7->helper, 1);
 if (VAR_8)
  goto free;

 VAR_8 = FUNC_4(&VAR_7->helper);
 if (VAR_8)
  goto fini;


 FUNC_5(VAR_4);

 VAR_8 = FUNC_2(&VAR_7->helper, VAR_6);
 if (VAR_8)
  goto fini;

 return 0;

fini:
 FUNC_0(&VAR_7->helper);
free:
 FUNC_6(VAR_7);
 return VAR_8;
}
