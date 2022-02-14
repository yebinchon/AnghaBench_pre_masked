
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_hwmon_dev {int dummy; } ;
struct slimpro_resp_msg {int msg; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct xgene_hwmon_dev*,struct slimpro_resp_msg*) ;

__attribute__((used)) static void FUNC_3(struct xgene_hwmon_dev *VAR_2,
           struct slimpro_resp_msg *VAR_3)
{
 if ((FUNC_0(VAR_3->msg) == VAR_0) &&
     (FUNC_1(VAR_3->msg) == VAR_1))
  FUNC_2(VAR_2, VAR_3);
}
