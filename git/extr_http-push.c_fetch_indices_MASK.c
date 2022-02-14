
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int packs; int url; } ;




 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_3;

 if (VAR_0)
  FUNC_0(VAR_2, "Getting pack list\n");

 switch (FUNC_1(VAR_1->url, &VAR_1->packs)) {
 case 128:
 case 129:
  VAR_3 = 0;
  break;
 default:
  VAR_3 = -1;
 }

 return VAR_3;
}
