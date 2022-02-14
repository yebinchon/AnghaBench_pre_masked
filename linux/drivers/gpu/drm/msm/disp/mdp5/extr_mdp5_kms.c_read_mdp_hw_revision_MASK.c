
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mdp5_kms {TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct mdp5_kms*,int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static void FUNC_5(struct mdp5_kms *VAR_3,
     u32 *VAR_4, u32 *VAR_5)
{
 struct device *VAR_6 = &VAR_3->pdev->dev;
 u32 VAR_7;

 FUNC_3(VAR_6);
 VAR_7 = FUNC_2(VAR_3, VAR_2);
 FUNC_4(VAR_6);

 *VAR_4 = FUNC_1(VAR_7, VAR_0);
 *VAR_5 = FUNC_1(VAR_7, VAR_1);

 FUNC_0(VAR_6, "MDP5 version v%d.%d", *VAR_4, *VAR_5);
}
