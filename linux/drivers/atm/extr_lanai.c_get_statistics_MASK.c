
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ovfl_trash; int vci_trash; int hec_err; int atm_ovfl; } ;
struct lanai_dev {TYPE_1__ stats; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (struct lanai_dev*,int ) ;

__attribute__((used)) static void FUNC_5(struct lanai_dev *VAR_1)
{
 u32 VAR_2 = FUNC_4(VAR_1, VAR_0);
 VAR_1->stats.atm_ovfl += FUNC_2(VAR_2);
 VAR_1->stats.hec_err += FUNC_3(VAR_2);
 VAR_1->stats.vci_trash += FUNC_0(VAR_2);
 VAR_1->stats.ovfl_trash += FUNC_1(VAR_2);
}
