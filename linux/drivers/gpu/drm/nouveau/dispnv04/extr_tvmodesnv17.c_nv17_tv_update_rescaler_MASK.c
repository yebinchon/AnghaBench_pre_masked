
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv17_tv_state {int ptv_208; int vfilter; int hfilter2; int hfilter; } ;
struct nv17_tv_encoder {int overscan; struct nv17_tv_state state; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_device*,struct nv17_tv_state*,int) ;
 struct nv17_tv_encoder* FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (struct drm_device*,int ,int ) ;
 int FUNC_4 (struct drm_encoder*) ;

void FUNC_5(struct drm_encoder *VAR_3)
{
 struct drm_device *VAR_4 = VAR_3->dev;
 struct nv17_tv_encoder *VAR_5 = FUNC_2(VAR_3);
 struct nv17_tv_state *VAR_6 = &VAR_5->state;

 VAR_6->ptv_208 = 0x40 | (FUNC_0(VAR_5->overscan) << 8);

 FUNC_4(VAR_3);

 FUNC_1(VAR_4, VAR_6, 208);
 FUNC_3(VAR_4, VAR_0, VAR_6->hfilter);
 FUNC_3(VAR_4, VAR_1, VAR_6->hfilter2);
 FUNC_3(VAR_4, VAR_2, VAR_6->vfilter);
}
