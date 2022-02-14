
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf; } ;
struct lanai_vcc {TYPE_1__ rx; } ;
struct lanai_dev {int dummy; } ;
struct TYPE_4__ {int max_sdu; } ;
struct atm_qos {TYPE_2__ rxtp; } ;


 int VAR_0 ;
 int FUNC_0 (struct lanai_dev*,int *,int ,int ,char*) ;

__attribute__((used)) static inline int FUNC_1(struct lanai_dev *VAR_1,
 struct lanai_vcc *VAR_2, const struct atm_qos *VAR_3)
{
 return FUNC_0(VAR_1, &VAR_2->rx.buf,
     VAR_3->rxtp.max_sdu, VAR_0, "RX");
}
