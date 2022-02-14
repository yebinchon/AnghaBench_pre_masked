
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msi_priv_data; } ;
struct msi_desc {TYPE_1__ platform; } ;
struct device {int msi_domain; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct msi_desc* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct device*) ;
 int FUNC_4 (struct device*,int ,int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct device *VAR_1)
{
 if (!FUNC_2(FUNC_0(VAR_1))) {
  struct msi_desc *VAR_2;

  VAR_2 = FUNC_1(VAR_1);
  FUNC_5(VAR_2->platform.msi_priv_data);
 }

 FUNC_3(VAR_1->msi_domain, VAR_1);
 FUNC_4(VAR_1, 0, VAR_0);
}
