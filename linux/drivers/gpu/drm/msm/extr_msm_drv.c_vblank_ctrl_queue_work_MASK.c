
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_vblank_work {int crtc_id; int enable; int work; struct msm_drm_private* priv; } ;
struct msm_drm_private {int wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct msm_vblank_work* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct msm_drm_private *VAR_3,
     int VAR_4, bool VAR_5)
{
 struct msm_vblank_work *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_0(&VAR_6->work, VAR_2);

 VAR_6->crtc_id = VAR_4;
 VAR_6->enable = VAR_5;
 VAR_6->priv = VAR_3;

 FUNC_2(VAR_3->wq, &VAR_6->work);

 return 0;
}
