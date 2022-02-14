
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int state; } ;
struct efa_com_dev {TYPE_1__ aq; scalar_t__ reg_bar; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,scalar_t__) ;

void FUNC_3(struct efa_com_dev *VAR_3, bool VAR_4)
{
 u32 VAR_5 = 0;

 if (VAR_4)
  VAR_5 = VAR_1;

 FUNC_2(VAR_5, VAR_3->reg_bar + VAR_2);
 if (VAR_4)
  FUNC_1(VAR_0, &VAR_3->aq.state);
 else
  FUNC_0(VAR_0, &VAR_3->aq.state);
}
