
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_disp_mutex {int claimed; } ;
struct mtk_ddp {struct mtk_disp_mutex* mutex; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mtk_disp_mutex* FUNC_0 (int ) ;
 struct mtk_ddp* FUNC_1 (struct device*) ;

struct mtk_disp_mutex *FUNC_2(struct device *VAR_2, unsigned int VAR_3)
{
 struct mtk_ddp *VAR_4 = FUNC_1(VAR_2);

 if (VAR_3 >= 10)
  return FUNC_0(-VAR_1);
 if (VAR_4->mutex[VAR_3].claimed)
  return FUNC_0(-VAR_0);

 VAR_4->mutex[VAR_3].claimed = 1;

 return &VAR_4->mutex[VAR_3];
}
