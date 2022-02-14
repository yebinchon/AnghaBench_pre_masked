
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {int polled; } ;
struct udl_drm_connector {struct drm_connector connector; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_1 (struct drm_connector*,int *) ;
 int FUNC_2 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int FUNC_3 (struct drm_connector*) ;
 struct udl_drm_connector* FUNC_4 (int,int ) ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_5(struct drm_device *VAR_8, struct drm_encoder *VAR_9)
{
 struct udl_drm_connector *VAR_10;
 struct drm_connector *VAR_11;

 VAR_10 = FUNC_4(sizeof(struct udl_drm_connector), VAR_5);
 if (!VAR_10)
  return -VAR_4;

 VAR_11 = &VAR_10->connector;
 FUNC_2(VAR_8, VAR_11, &VAR_6,
      VAR_3);
 FUNC_1(VAR_11, &VAR_7);

 FUNC_3(VAR_11);
 FUNC_0(VAR_11, VAR_9);
 VAR_11->polled = VAR_2 |
  VAR_0 | VAR_1;

 return 0;
}
