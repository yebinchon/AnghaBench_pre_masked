
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rcar_du_crtc {int crtc; scalar_t__ vblank_enable; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,int,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rcar_du_crtc*) ;
 int FUNC_3 (struct rcar_du_crtc*) ;

__attribute__((used)) static void FUNC_4(void *VAR_2, unsigned int VAR_3, u32 VAR_4)
{
 struct rcar_du_crtc *VAR_5 = VAR_2;

 if (VAR_5->vblank_enable)
  FUNC_1(&VAR_5->crtc);

 if (VAR_3 & VAR_0)
  FUNC_2(VAR_5);
 if (VAR_3 & VAR_1)
  FUNC_3(VAR_5);

 FUNC_0(&VAR_5->crtc, 0, 0, &VAR_4);
}
