
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cur_rsp_stat; int done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(int VAR_4)
{
 int VAR_5 = FUNC_2(
   &VAR_3->done, FUNC_1(VAR_2));
 if (VAR_5 == 0)
  VAR_5 = -VAR_1;
 else if (VAR_5 > 0)
  VAR_5 = VAR_3->cur_rsp_stat & FUNC_0(VAR_4) ? 0 : -VAR_0;
 return VAR_5;
}
