
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_du_crtc {int index; int crtc; int dev; int group; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rcar_du_crtc*) ;
 int FUNC_4 (struct rcar_du_crtc*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (struct rcar_du_crtc*) ;

__attribute__((used)) static void FUNC_9(struct rcar_du_crtc *VAR_5)
{

 FUNC_4(VAR_5, VAR_1, FUNC_1(0, 0, 0));
 FUNC_4(VAR_5, VAR_0, FUNC_0(0, 0, 0));


 FUNC_3(VAR_5);
 FUNC_5(VAR_5->group);


 FUNC_6(VAR_5->group, VAR_5->index % 2 ? VAR_3 : VAR_2, 0);


 if (FUNC_7(VAR_5->dev, VAR_4))
  FUNC_8(VAR_5);


 FUNC_2(&VAR_5->crtc);
}
