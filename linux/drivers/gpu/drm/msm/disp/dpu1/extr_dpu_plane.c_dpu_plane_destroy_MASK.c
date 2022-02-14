
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane {int dummy; } ;
struct dpu_plane {int pipe_hw; int lock; } ;


 int FUNC_0 (struct dpu_plane*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_plane*,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_plane*) ;
 int FUNC_4 (struct dpu_plane*) ;
 int FUNC_5 (int *) ;
 struct dpu_plane* FUNC_6 (struct drm_plane*) ;

__attribute__((used)) static void FUNC_7(struct drm_plane *VAR_1)
{
 struct dpu_plane *VAR_2 = VAR_1 ? FUNC_6(VAR_1) : ((void*)0);

 FUNC_0(VAR_2, "\n");

 if (VAR_2) {
  FUNC_1(VAR_1, 0, VAR_0);

  FUNC_5(&VAR_2->lock);


  FUNC_3(VAR_1);

  FUNC_2(VAR_2->pipe_hw);

  FUNC_4(VAR_2);
 }
}
