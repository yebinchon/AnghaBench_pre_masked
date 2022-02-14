
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* event_handler ) (TYPE_1__*) ;} ;
struct sh_tmu_channel {TYPE_1__ ced; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct sh_tmu_channel*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct sh_tmu_channel *VAR_6 = VAR_5;


 if (FUNC_0(&VAR_6->ced))
  FUNC_1(VAR_6, VAR_1, VAR_2);
 else
  FUNC_1(VAR_6, VAR_1, VAR_3 | VAR_2);


 VAR_6->ced.event_handler(&VAR_6->ced);
 return VAR_0;
}
