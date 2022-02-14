
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int work; } ;
struct arizona_extcon_info {TYPE_2__ micd_detect_work; int lock; int detecting; TYPE_2__ micd_timeout_work; struct arizona* arizona; } ;
struct TYPE_4__ {int micd_detect_debounce; } ;
struct arizona {TYPE_1__ pdata; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,TYPE_2__*,int ) ;
 int VAR_1 ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_2, void *VAR_3)
{
 struct arizona_extcon_info *VAR_4 = VAR_3;
 struct arizona *VAR_5 = VAR_4->arizona;
 int VAR_6 = VAR_5->pdata.micd_detect_debounce;

 FUNC_1(&VAR_4->micd_detect_work);
 FUNC_1(&VAR_4->micd_timeout_work);

 FUNC_3(&VAR_4->lock);
 if (!VAR_4->detecting)
  VAR_6 = 0;
 FUNC_4(&VAR_4->lock);

 if (VAR_6)
  FUNC_5(VAR_1,
       &VAR_4->micd_detect_work,
       FUNC_2(VAR_6));
 else
  FUNC_0(&VAR_4->micd_detect_work.work);

 return VAR_0;
}
