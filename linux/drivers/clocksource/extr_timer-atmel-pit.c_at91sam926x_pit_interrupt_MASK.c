
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* event_handler ) (TYPE_1__*) ;} ;
struct pit_data {int cnt; int cycle; TYPE_1__ clkevt; int base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 struct pit_data *VAR_7 = VAR_6;


 if (FUNC_1(&VAR_7->clkevt) &&
     (FUNC_2(VAR_7->base, VAR_2) & VAR_0)) {

  VAR_7->cnt += VAR_7->cycle * FUNC_0(FUNC_2(VAR_7->base,
             VAR_1));
  VAR_7->clkevt.event_handler(&VAR_7->clkevt);

  return VAR_3;
 }

 return VAR_4;
}
