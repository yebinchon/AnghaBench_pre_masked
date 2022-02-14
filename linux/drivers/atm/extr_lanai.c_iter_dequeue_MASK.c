
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t vci_t ;
struct TYPE_2__ {int (* unqueue ) (struct lanai_dev*,struct lanai_vcc*,int) ;int * atmvcc; } ;
struct lanai_vcc {TYPE_1__ tx; } ;
struct lanai_dev {int backlog_vccs; struct lanai_vcc** vccs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (struct lanai_vcc*,int ) ;
 int FUNC_3 (struct lanai_dev*,struct lanai_vcc*,int) ;
 int FUNC_4 (struct lanai_vcc*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct lanai_dev *VAR_1, vci_t VAR_2)
{
 struct lanai_vcc *VAR_3 = VAR_1->vccs[VAR_2];
 int VAR_4;
 if (VAR_3 == ((void*)0) || VAR_3->tx.atmvcc == ((void*)0) ||
     !FUNC_4(VAR_3)) {
  FUNC_1(VAR_2, VAR_1->backlog_vccs);
  return;
 }
 VAR_4 = FUNC_0(FUNC_2(VAR_3, VAR_0));
 VAR_3->tx.unqueue(VAR_1, VAR_3, VAR_4);
}
