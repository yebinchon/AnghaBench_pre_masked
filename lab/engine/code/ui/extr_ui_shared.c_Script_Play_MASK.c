
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int itemDef_t ;
struct TYPE_2__ {int (* registerSound ) (char const*,int ) ;int (* startLocalSound ) (int ,int ) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (char**,char const**) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char const*,int ) ;

void FUNC_3(itemDef_t *VAR_3, char **VAR_4) {
 const char *VAR_5;
 if (FUNC_0(VAR_4, &VAR_5)) {
  VAR_1->startLocalSound(VAR_1->registerSound(VAR_5, VAR_2), VAR_0);
 }
}
