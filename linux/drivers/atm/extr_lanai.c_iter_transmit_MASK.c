
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t vci_t ;
struct TYPE_2__ {int endptr; int (* unqueue ) (struct lanai_dev*,struct lanai_vcc*,int ) ;} ;
struct lanai_vcc {TYPE_1__ tx; } ;
struct lanai_dev {struct lanai_vcc** vccs; } ;


 int FUNC_0 (struct lanai_dev*,struct lanai_vcc*,int ) ;
 scalar_t__ FUNC_1 (struct lanai_vcc*) ;

__attribute__((used)) static void FUNC_2(struct lanai_dev *VAR_0, vci_t VAR_1)
{
 struct lanai_vcc *VAR_2 = VAR_0->vccs[VAR_1];
 if (FUNC_1(VAR_2))
  VAR_2->tx.unqueue(VAR_0, VAR_2, VAR_2->tx.endptr);
}
