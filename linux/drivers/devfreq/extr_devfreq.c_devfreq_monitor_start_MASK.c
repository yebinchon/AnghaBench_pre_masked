
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devfreq {TYPE_1__* profile; int work; } ;
struct TYPE_2__ {scalar_t__ polling_ms; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int *,int ) ;

void FUNC_3(struct devfreq *VAR_2)
{
 FUNC_0(&VAR_2->work, VAR_0);
 if (VAR_2->profile->polling_ms)
  FUNC_2(VAR_1, &VAR_2->work,
   FUNC_1(VAR_2->profile->polling_ms));
}
