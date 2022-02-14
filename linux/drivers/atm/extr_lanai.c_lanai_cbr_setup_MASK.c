
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lanai_dev {int conf2; TYPE_1__* cbrvcc; } ;
struct TYPE_2__ {int vci; int qos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lanai_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lanai_dev*,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct lanai_dev *VAR_3)
{
 FUNC_2(VAR_3, FUNC_1(&VAR_3->cbrvcc->qos), VAR_0);
 FUNC_2(VAR_3, VAR_3->cbrvcc->vci, VAR_1);
 VAR_3->conf2 |= VAR_2;
 FUNC_0(VAR_3);
}
