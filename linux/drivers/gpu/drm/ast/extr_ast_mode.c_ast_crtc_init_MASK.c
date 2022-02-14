
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;
struct ast_crtc {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct drm_device*,int *,int *) ;
 int FUNC_2 (int *,int) ;
 struct ast_crtc* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_4)
{
 struct ast_crtc *VAR_5;

 VAR_5 = FUNC_3(sizeof(struct ast_crtc), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_1(VAR_4, &VAR_5->base, &VAR_2);
 FUNC_2(&VAR_5->base, 256);
 FUNC_0(&VAR_5->base, &VAR_3);
 return 0;
}
