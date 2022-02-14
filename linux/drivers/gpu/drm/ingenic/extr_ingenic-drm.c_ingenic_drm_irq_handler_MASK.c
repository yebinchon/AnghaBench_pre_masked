
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ingenic_drm {int crtc; int map; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,unsigned int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct ingenic_drm *VAR_5 = VAR_4;
 unsigned int VAR_6;

 FUNC_1(VAR_5->map, VAR_2, &VAR_6);

 FUNC_2(VAR_5->map, VAR_2,
      VAR_1, 0);

 if (VAR_6 & VAR_1)
  FUNC_0(&VAR_5->crtc);

 return VAR_0;
}
